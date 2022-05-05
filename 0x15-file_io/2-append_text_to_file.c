#include "main.h"
/**
* _strlen - strlen
* @string: string
* Return: 0
*/
unsigned int _strlen(const char *string)
{
	unsigned int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}
/**
* append_text_to_file - A function that appends text at the end of a file.
* @filename: The name of the file
* @text_content: The NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int opening, writer;

	if (filename == NULL)
		return (-1);

	opening = open(filename, O_CREAT | O_APPEND | O_RDWR, 0600);

	if (opening == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}
	writer = write(opening, text_content, _strlen(text_content));

	if (writer == -1)
	{
		close(opening);
		return (-1);
	}
	close(opening);
	return (1);
}
