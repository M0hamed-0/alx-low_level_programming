#include <stdio.h>

int main(void)
{
	unsigned long int n;
	int shift = (sizeof(unsigned long int) * 8) - 1;
	int flag = 0;
	int buffer[sizeof(unsigned int)];

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		if ((n >> shift) & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
		shift--;
	}

}
