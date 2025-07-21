#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct template - structure containing var types and matching functions
 * @indic: indicates the type of the var we will need to print
 * @print: function that will print the arg passed to the main function
 */
struct template
{
	char *indic;
	void (*print)(va_list args);
};

int strlen(char *str);
int printchar(va_list args);
int printstring(va_list args);

#endif
