#include "holberton.h"
/**
* _atoi - string to int
* Return: sum
*/
int _atoi(char *s) 
{
  int sum = 0;
  char ch;
  char sign = *s;
  if (*s == '-' || *s == '+') 
	  s++;
  while ((ch = *s++) >= '0' && ch <= '9') {
    sum = sum * 10 - (ch - '0');
  }
  if (sign != '-') {
    sum = -sum;
  }
  return sum;
}
