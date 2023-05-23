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
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
