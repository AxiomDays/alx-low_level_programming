#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


void check_args(int argc);
void check_read(ssize_t result, char *file_from, int fd_from, int fd_to);
void check_write(ssize_t result, char *file_to, int fd_from, int fd_to);
void check_close(int result, int fd);

int main(int argc, char *argv[]) {
    int fd_from, fd_to, close_from, close_to;
    ssize_t len_read, len_written;
    char buffer[1024];
    mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    check_args(argc);

    fd_from = open(argv[1], O_RDONLY);
    check_read((ssize_t)fd_from, argv[1], -1, -1);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
    check_write((ssize_t)fd_to, argv[2], fd_from, -1);

    len_read = 1024;
    while (len_read == 1024) {
        len_read = read(fd_from, buffer, 1024);
        check_read(len_read, argv[1], fd_from, fd_to);

        len_written = write(fd_to, buffer, len_read);
        if (len_written != len_read)
            len_written = -1;
        check_write(len_written, argv[2], fd_from, fd_to);
    }

    close_to = close(fd_to);
    close_from = close(fd_from);
    check_close(close_to, fd_to);
    check_close(close_from, fd_from);

    return 0;
}

void check_args(int argc) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

void check_read(ssize_t result, char *file_from, int fd_from, int fd_to) {
    if (result == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        if (fd_from != -1)
            close(fd_from);
        if (fd_to != -1)
            close(fd_to);
        exit(98);
    }
}

void check_write(ssize_t result, char *file_to, int fd_from, int fd_to) {
    if (result == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        if (fd_from != -1)
            close(fd_from);
        if (fd_to != -1)
            close(fd_to);
        exit(99);
    }
}

void check_close(int result, int fd) {
    if (result == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

