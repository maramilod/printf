#ifndef MAIN_H
#define MAIN_H
#define BUF_OF 1024

int _printf(const char *format, ...);
int _putchar(char c);

int jaa(char *s);
int num(int n);
/**
 * struct fmt - struct
 *
 * @fr: format
 * @fn: array
 */
struct fmt
{
	char fr;
	int (*fn)(va_list, char[], int, int, int, int);
};
#endif
