#ifndef MAIN_H
#define MAIN_H

/* LIBRARIES */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/* FUNCTIONS */
int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _check_strings(const char *chk_format, ...);
char *rev_string(char *s);


/* PRINT FUNCTIONS */
int print_character(va_list arguments, int printed_counter);
int print_string(va_list arguments, int printed_counter);
int print_percent(int printed_counter);
int print_integer(va_list arguments, int printed_counter);
int print_binary(va_list arguments, int printed_counter);
int reverse_string(va_list arguments, int printed_counter);
int print_unknown(char a, char b, int printed_counter);

/* BASE PRINT FUNCTIONS*/
int b_se(va_list arguments, int printed_counter, char base_index);
int print_unsignedint(va_list arguments, int printed_counter);
int print_octal(va_list arguments, int printed_counter);
int print_lowerHex(va_list arguments, int printed_counter);
int print_upperHex(va_list arguments, int printed_counter);

/* CONVERTERS */
char *binary_converter(unsigned int bin_num);
char *octal_converter(unsigned int bin_num);
char *hexLow_converter(unsigned int bin_num);
char *hexUpper_converter(unsigned int bin_num);


#endif
