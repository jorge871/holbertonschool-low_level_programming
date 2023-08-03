#include "main.h"
/**
 * _strlen - Length of string
 * @src: String
 * Return: return length of a string
 */
int _strlen(char *src)
{
int length;

for (length = 0; src && src[length]; length++)
	;
return (length);
}
/**
 * main - Program that copies the content of a file to another file.
 * @ac: Length of arguments
 * @av: Arguments
 * Return: Always 0.
 */
int main(int ac, char **av)
{
int code_receiver, file_from, file_to;
char content[1024];

if (ac != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
file_from = open(av[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
file_to = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
code_receiver = read(file_from, content, 1024);
while (code_receiver)
{
if (write(file_to, content, code_receiver) != code_receiver)
{
dprintf(2, "Error: Can't write to %s\n", av[2]);
exit(99);
}
code_receiver = read(file_from, content, 1024);
if (code_receiver == -1)
{
dprintf(2, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
}
if (close(file_to) == -1 || close(file_from) == -1)
{
dprintf(2, "Error: Can't close fd %d", file_to);
exit(100);
}
return (0);
}
