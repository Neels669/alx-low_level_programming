**0x12. C - Singly linked lists**

This project aims to learn the below:

When and why using linked lists vs arrays

How to build and use linked lists

Note: The prototypes of all the functions and the prototype of the function _putchar is included in the header file called lists.h ~ You have to start by creating your lists.h

lists.h is the header file containing all the function prototypes used in this project.

**TASKS**

* 0-print_list.c

Function that prints all the elements of a list_t list.

Prototype: size_t print_list(const list_t *h);

Return: the number of nodes. If str is NULL, print [0] (nil).

You are allowed to use printf

* 1-list_len.c
  
Function that returns the number of elements in a linked list_t list.

Prototype: size_t list_len(const list_t *h);

* 2-add_node.c

Function that adds a new node at the beginning of a list_t list.

Prototype: list_t *add_node(list_t **head, const char *str);

Return: the address of the new element, or NULL if it failed. str needs to be duplicated.

You are allowed to use strdup.

* 3-add_node_end.c

Function that adds a new node at the end of a list_t list.

Prototype: list_t *add_node_end(list_t **head, const char *str);

Return: the address of the new element, or NULL if it failed.

str needs to be duplicated

You are allowed to use strdup

* 4-free_list.c

Function that frees a list_t list.

Prototype: void free_list(list_t *head);

* 100-first.c

Function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

You are allowed to use the printf function

**END**
