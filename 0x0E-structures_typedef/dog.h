#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Type def for struct dog
 */
typedef struct dog dog_t;


/**
 * struct dog - dog details
 * @name: Name of dog
 * @age: Dog age
 * @owner: owner name
 *
 * Description: Keep details of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
