#include "main.h"

/**
 * _power - Calculate the power of a number.
 * @base: The base.
 * @pow: The power.
 * Return: The value of base raised to the power.
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
    unsigned long int result = 1;
    unsigned int i = 0;

    for (i = 0; i < pow; i++)
    {
        result *= base;
    }

    return result;
}

/**
 * print_binary - Print the binary representation of a number.
 * @n: The number to be printed in binary.
 * Return: void
 */
void print_binary(unsigned long int n)
{
    unsigned long int dev = 1UL << (sizeof(unsigned long int) * 8 - 1);
    char flag = 0;

    while (dev > 0)
    {
        unsigned long int result = n & dev;

        if (result == dev)
        {
            flag = 1;
            _putchar('1');
        }
        else if (flag == 1 || dev == 1)
        {
            _putchar('0');
        }

        dev >>= 1;
    }
}

