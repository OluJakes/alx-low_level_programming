#include "main.h"

/**
 * _isapha - checks if a character is an alphabetic characyer
 * @c: The character to be checked
 * 
 * Return: 1 if c is a letter, lower or uppercase; 0 otherwise
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
