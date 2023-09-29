/**
 * main - Entry point
 *
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ret;

	ret = ~(1 << index);
	*n = *n & ret;

	return 1;
}
