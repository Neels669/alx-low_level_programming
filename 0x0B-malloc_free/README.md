**0x0B. C - malloc, free**

This project aims to learn the below:

Difference between automatic and dynamic allocation.

What is malloc and free and how to use them.

Why and when use malloc.

How to use valgrind to check for memory leak.

Note: The prototypes of all the functions and the prototype of the function _putchar is included in the header file called main.h ~ You have to start by creating your main.h

main.h is the header file containing all the function prototypes used in this project.

**TASKS**

* 0-create_array.c

Function that creates an array of chars, and initializes it with a specific char. Returns NULL if size = 0. Returns a pointer to the array, or NULL if it fails

Prototype: char *create_array(unsigned int size, char c);

* 1-strdup.c

Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

Returns NULL if str = NULL

On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

Prototype: char *_strdup(char *str);

* 2-str_concat.c

Function that concatenates two strings. 

The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated. if NULL is passed, treat it as an empty string. The function should return NULL on failure.

Prototype: char *str_concat(char *s1, char *s2);

* 3-alloc_grid.c

Function that returns a pointer to a 2 dimensional array of integers. Each element of the grid should be initialized to 0. The function should return NULL on failure. If width or height is 0 or negative, return NULL.

Prototype: int **alloc_grid(int width, int height);

* 4-free_grid.c

Function that frees a 2 dimensional grid previously created by your alloc_grid function. 

Prototype: void free_grid(int **grid, int height);

* 100-argstostr.c

Function that concatenates all the arguments of your program. Returns NULL if ac == 0 or av == NULL. Returns a pointer to a new string, or NULL if it fails. 

Each argument should be followed by a \n in the new string

Prototype: char *argstostr(int ac, char **av);

**END**



