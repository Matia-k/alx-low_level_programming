#include "main.h"
/**
  *_abs - Computes the absolute value of an integer
  *@i: integer whose absolute value is to be computed.
  *
  *Return: The absolute value of the  integer passed into it
  */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
