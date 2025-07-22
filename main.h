#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct template - structure containing var types and matching functions
 * @indic: indicates the type of the var we will need to print
 * @print: function that will print the arg passed to the main function
 */
typedef struct template
{
	char *indic;
	int (*print)(va_list args);
} templ;

/*function to know the lenght of the string*/
int _strlen(char *str);

/*fctn to print the % if the user enters %%*/
void print_perc(va_list args);

/*annex functions depending on the type*/
int print_char(va_list args);
int print_string(va_list args);

/*main function*/
int _printf(const char *format, ...);

#endif
