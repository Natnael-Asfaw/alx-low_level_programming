#include <stdio.h>
#include <stdlib.h>
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
ssize_t file, i, n;
char *text;
text = malloc(sizeof(letters));

if (text == NULL)
return (NULL);

if (filename == NULL)
return (NULL);

file = open(filename, O_RDONLY);

if (filee == -1)
{
free(text);
return (0);
}

i = read(file, text, letters);
n = write(STDOUT_FILEND, text, i);

close(file);

return (n);
}

