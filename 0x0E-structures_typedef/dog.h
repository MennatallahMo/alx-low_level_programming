#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Dscription: a dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
