#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 *init_dog - First function
 *
 *@d: Name of struct
 *@name: Dog name
 *@age: Miaka
 *@owner: Mwenyewe
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
