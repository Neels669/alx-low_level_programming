**0x17. C - Doubly linked lists**

What is a doubly linked list

How to use doubly linked lists

Note: The prototypes of all the functions and the prototype of the function _putchar is included in the header file called lists.h ~ You have to start by creating your lists.h

lists.h is the header file containing all the function prototypes used in this project.

**TASKS**

* 0-print_dlistint.c

Function that prints all the elements of a dlistint_t list. Return: the number of nodes

Prototype: size_t print_dlistint(const dlistint_t *h);

* 1-dlistint_len.c

Function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

* 2-add_dnodeint.c

Function that adds a new node at the beginning of a dlistint_t list. Return: the address of the new element, or NULL if it failed.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

* 3-add_dnodeint_end.c

Function that adds a new node at the end of a dlistint_t list. Return: the address of the new element, or NULL if it failed.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

* 4-free_dlistint.c

Function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);

* 5-get_dnodeint.c

Function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

Where index is the index of the node, starting from 0, if the node does not exist, return NULL.

* 6-sum_dlistint.c

Function that returns the sum of all the data (n) of a dlistint_t linked list, if the list is empty, return 0.

Prototype: int sum_dlistint(dlistint_t *head);

* 7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c

Function that inserts a new node at a given position. Returns: the address of the new node, or NULL if it failed

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

Where idx is the index of the list where the new node should be added. Index starts at 0

if it is not possible to add the new node at index idx, do not add the new node and return NULL.

Files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction.

* 8-delete_dnodeint.c

Ffunction that deletes the node at index index of a dlistint_t linked list. Returns: 1 if it succeeded, -1 if it failed.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Where index is the index of the node that should be deleted. Index starts at 0.

**END**



