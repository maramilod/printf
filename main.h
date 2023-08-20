#ifndef MAIN_H
#define MAIN_H
#define BUF_OF 1024

int _printf(const char *format, ...);
int _putchar(char c);

int all(const char *format, int *i, va_list args, char buffer[],
		int width, int flag, int pre, int lenght);
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
