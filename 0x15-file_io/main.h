#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void check_args(int argc);
void check_read(ssize_t result, char *file_from, int fd_from, int fd_to);
void check_write(ssize_t result, char *file_to, int fd_from, int fd_to);
void check_close(int result, int fd);
