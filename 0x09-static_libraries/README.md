**0x09. C - Static libraries**

The aim of this project is to learn the below:

Static library, how does it work, how to create one, and how to use it.

Basic usage of ar, ranlib, nm.

**TASKS**

1) Create the static library **libmy.a** containing all the functions listed below:

- int _putchar(char c);
- int _islower(int c);
- int _isalpha(int c);
- int _abs(int n);
- int _isupper(int c);
- int _isdigit(int c);
- int _strlen(char *s);
- void _puts(char *s);
- char *_strcpy(char *dest, char *src);
- int _atoi(char *s);
- char *_strcat(char *dest, char *src);
- char *_strncat(char *dest, char *src, int n);
- char *_strncpy(char *dest, char *src, int n);
- int _strcmp(char *s1, char *s2);
- char *_memset(char *s, char b, unsigned int n);
- char *_memcpy(char *dest, char *src, unsigned int n);
- char *_strchr(char *s, char c);
- unsigned int _strspn(char *s, char *accept);
- char *_strpbrk(char *s, char *accept);
- char *_strstr(char *haystack, char *needle);

Note: The prototypes of all the functions listed above is included in the header file called main.h

Started this project by creating empty .c files with each file containing each prototype functions. 

All the .c files created in this repository are then compiled using the below code in linux shell:
**gcc -c *.c**

 To create the static library for all the functions, the below code is then execute in linux shell:
  **ar -rc libmy.a *.o**

2) create_static_lib.sh

Script hat creates a static library called liball.a from all the .c files that are in the current directory.

3) liball.a

Library created from executing the script above.




