#ifndef MAIN_H
#define MAIN_H

#define BUF_OF 1024

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);

int fofo(const char *format, int *x);
int wawa(const char *format, int *x, va_list args);
int prere(const char *format, int *x, va_list args);
int lolo(const char *format, int *x);

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
int prpo(va_list type, char buffer[], int widht,
		int flag, int pre, int lenght);
int prnupr(va_list type, char buffer[], int width,
		int flag, int pre, int lenght);
int prrev(va_list type, char buffer[], int width,
		int flag, int pre, int lenght);
int pro13(va_list type, char buffer[], int width,
		int flag, int pre, int lenght);

long int csu(unsigned long int n, int s);
int digit(char i);
int ahc(char asci, char buffer[], int x);
long int csn(long int n, int l);
int ispable(char d);

int prhexa(va_list types, char arr[], char buffer[],
		int width, char flagc, int flag, int pre, int lenght);
int prhaxup(va_list types, char buffer[], int width,
		int flag, int pre, int lenght);
int prhax(va_list type, char buffer[], int width,
		int flag, int pre, int lenght);
int proc(va_list types, char buffer[], int idth,
		int flag, int pre, int lenght);
int pruns(va_list types, char buffer[], int width,
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
