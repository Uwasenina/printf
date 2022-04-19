#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: character to print
 * Return: Success(1), Error(1)sets
 */
int _putchar(char c)
{
	static int bufferCount;
	static char buffer[1024];

	if (c == -1)
	{
		befferCount = 0;
		return (0);
	}
	if (c == -2 || bufferCount == 1024)
	{
		write(1, buffer, bufferCount);
		bufferCount = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[bufferCount] = c;
		bufferCount++;
		return (1);
	}
	return (0);
}
