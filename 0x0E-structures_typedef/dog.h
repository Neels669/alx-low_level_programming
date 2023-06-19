#ifndef STRUCT_DOG
#define STRUCT_DOG

/**
 * struct dog - struct with dog info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: store different data types
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);





#endif
