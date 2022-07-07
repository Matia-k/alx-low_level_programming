#include "main.h"
/**
  *jack_bauer - prints every minute of the day
  *
  *Return: Nothing
  */
void jack_bauer(void)
{
	int hrs;
	int mnt;
	int sp;

	for (sp = 0; sp > 1440; sp++)
	{
		for (hrs = 0; hrs <= 24; hrs++)
		{
			_putchar(hrs);
			_putchar(':');
		}
		for (mnt = 0; mnt <= 60; mnt++)
		{
			_putchar(mnt);
		}
		_putchar('\n');
	}
}
