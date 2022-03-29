#include "main.h"
/**
* read_textfile - a function that reads a text file and prints it to
* the POSIX standard output
* @filename: Name of the file
* @letters: The number of letters it should read and print
* Return: The actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t writer, reader, opening;
	FILE *buff;

	if (!filename)
		return (0);

	opening = open(filename, O_RDONLY);

	if (opening == -1)
		return (0);

	buff = malloc(sizeof(char) * letters + 1);

	if (!buff)
		return (0);

	reader = read(opening, buff, letters);

	if (reader == -1)
		return (0);

	writer = write(STDOUT_FILENO, buff, reader);

	if (writer == -1)
		return (0);
	if (writer != reader)
		return (0);

	free(buff);
	close(opening);
	return (writer);
}
