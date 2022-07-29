#include "main.h"

/**
 * append_text_to_file - Appends text at the end of file
 * @filename: a pointer to the name of the file.
 * @text_content: the string to add to the end of file.
 * Return: If filename is NULL return -1
 *   If text_content is NULL, do not add anythig
 *   to the file.
 *   return 1 if the file exist -1 if the file does not
 *   exist.
 */
int append_text_to_file(const char *filename, char *text_content)

{
int o, w, nat = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (nat = 0; text_content[nat];)
nat++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, nat);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}


