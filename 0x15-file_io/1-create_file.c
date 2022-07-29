#include "main.h"

/**
 * create_file -creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 * Return: 1 on success else -1 
 */

int create_file(const char *filename, char *text_content)
{
int file, x, y = 0;
if (!filename)
return (-1);

file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file < 0)
return (-1);

if (text_content)
{
while (text_content[y])
y++;
x = write(file, text_content, y);
if (x != y)
return (-1);
}
close(file);
return (1);

}
