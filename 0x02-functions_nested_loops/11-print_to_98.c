#include "main.h"
/**
 *print_to_98 - See code
 *@n: First number
 */
void print_to_98(int n)
{
	int cn = n;
	int i;
	int lstDgt;
	int nbrHolder;

	if  (cn  <= 98)
	{
		for (i = 0; i <= 98 - n; i++)
		{
		cn += i;
		nbrHolder = cn;
			while (nbrHolder != 0)
			{
			lstDgt = nbrHolder % 10;
			_putchar(48 + lstDgt);
			nbrHolder = nbrHolder / 10;
			}
		}
		if (cn < 98)
		{
		_putchar(',');
		}
	}
	else
	{
		for (i = 0; i < n - 98; i++)
		{
		cn -= i;
		nbrHolder = cn;
			while (nbrHolder != 0)
			{
			lstDgt = nbrHolder % 10;
			_putchar(48 + lstDgt);
			nbrHolder = nbrHolder / 10;
			}
		}
		if (cn > 98)
		{
		_putchar(',');
		}
	}
}
