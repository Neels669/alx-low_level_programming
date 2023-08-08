**0x10. C - Variadic functions**

This project aims to learn the below:

What are variadic functions.

How to use va_start, va_arg and va_end macros.

Why and how to use the const type qualifier.

Note: The prototypes of all the functions and the prototype of the function _putchar is included in the header file called variadic_functions.h ~ You have to start by creating your variadic_functions.h which should be include guarded.

**TASKS**

* 0-sum_them_all.c

Function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);

If n == 0, return 0

* 1-print_numbers.c

Function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);

where separator is the string to be printed between numbers and n is the number of integers passed to the function

You are allowed to use printf

If separator is NULL, don’t print it. Print a new line at the end of your function.

* 2-print_strings.c

Function that prints strings, followed by a new line.

Prototype: void print_strings(const char *separator, const unsigned int n, ...);

where separator is the string to be printed between the strings and n is the number of strings passed to the function

You are allowed to use printf

If separator is NULL, don’t print it. If one of the string is NULL, print (nil) instead Print a new line at the end of your function.

* 3-print_all.c

Function that prints anything.

Prototype: void print_all(const char * const format, ...);

where format is a list of types of arguments passed to the function

c: char

i: integer

f: float

s: char * (if the string is NULL, print (nil) instead

any other char should be ignored

You are allowed to use printf

Print a new line at the end of your function.

**END**
