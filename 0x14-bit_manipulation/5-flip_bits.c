/**
 * flip_bits - Entry point
 *
 * Description: 'the program's descriptor'
 * @n: unsigned long int n
 * @m: unsigned log int m
 * Return: Always 0 (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int i, j;

	i = 0;
	result =1;
	difference = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (result == (difference & result))
		{
			i++;
		}
		result <<= 1;
	}
	return i;
}
