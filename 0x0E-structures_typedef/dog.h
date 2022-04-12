#ifndef DOG_H
#define DOG_H

/**
 ** struct dog - represents a dog with name, age and owner
 ** @name: name of dog as string
 ** @age: age of dog as float
 ** @owner: owner of dog as string
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
