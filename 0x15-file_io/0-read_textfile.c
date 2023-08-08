#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = NULL;
	ssize_t tread, twritten;
	FILE *fp = fopen(filename, "r");

	if (fp == NULL || filename == NULL)
		return (0);

	buf = (char *)malloc(letters + 1);
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	tread = fread(buf, sizeof(char), letters, fp);
	if (ferror(fp))
	{
		free(fp);
		fclose(fp);
		return (0);
	}

	buf[tread] = '\0';

	twritten = fwrite(buf, sizeof(char), tread, stdout);
	if (twritten != tread)
	{
		free(buf);
		fclose(fp);
		return (0);
	}

	free(buf);
	fclose(fp);
	return (twritten);
}
