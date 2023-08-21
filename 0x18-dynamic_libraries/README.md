**0x18. C - Dynamic libraries**

This project aims to learn the below:

What is a dynamic library, how does it work, how to create one, and how to use it.

What is the environment variable $LD_LIBRARY_PATH and how to use it.

What are the differences between static and shared libraries.

Basic usage nm, ldd, ldconfig.

Note: The prototypes of all the functions and the prototype of the function _putchar is included in the header file called main.h ~ You have to start by creating your main.h which should be include guarded.

**TASKS**

 libdynamic.so
 
Create the dynamic library **libdynamic.so** containing all the functions listed below:
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

First created empty c files with the prototpes provided above (abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c  strcmp.c  strlen.c   strncpy.c  strspn.c atoi.c  isdigit.c  isupper.c  memset.c  puts.c  strchr.c  strcpy.c  strncat.c  strpbrk.c  strstr.c)

To create the dynamic library from the C files in linux, follow the steps:
- gcc -c -fPIC *.c
- gcc -shared -o libdynamic.so *.o

To verify that you did it and have the right functions as dynamic symbols you can use:
- nm -D libdynamic.so

* 1-create_dynamic_lib.sh
  
Script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

* 100-operations.so
Dynamic library that contains C functions that can be called from Python. **100-tests.py** Provided python code. **functions.c**  file created for basic sum / sunstraction / multiplication / division. **op.h** Header for functions.c. Finally followed the same steps in creating a dynamic library **100-operations.so**

Code can be tested with running **python3 100-tests.py** in unix

**END**

