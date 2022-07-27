#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: ponter
 * @letters: size letters
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file, i, n;
char *buf;

if (!filename)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
return (0);

buf = malloc(sizeof(char) * letters);

if (!buf)
return (0);

i = read(file, buf, letters);

if (i == -1)
{
free(buf);
return (0);
}

buf[i] = '\0';

close(file);

n = write(STDOUT_FILEND, buf, i);
if (n == -1)
{
free(buf);
return (0);
}

free(buf);
return (n);
}
