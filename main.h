#ifndef MAIN_H
#define MAIN_H
#define BUF_OF 1024

int _printf(const char *format, ...);
int _putchar(char c);

int all(const char *format, int *i, va_list args, char buffer[],
		int width, int flag, int pre, int lenght);
int jaa(va_list types, char buffer[], int width, int flag,
	int pre, int lenght);
int num(va_list type, char buffer[], int width,
	int flag, int pre, int lenght);
int prb(va_list types, char buffer[], int width,
	int flag, int pre, int lenght);
int prs(va_list types, char buffer[], int width,
	int flag, int pre, int lenght);
int prcha(va_list types, char buffer[], int width,
	int flag, int pre, int lenght);
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
