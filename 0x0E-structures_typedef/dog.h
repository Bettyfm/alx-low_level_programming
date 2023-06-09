#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog specs
 * @name: dog name
 * @owner: owner name
 * @age: age of dog
 * Description: a structure that spicifies name and owner and age of dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef of struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
