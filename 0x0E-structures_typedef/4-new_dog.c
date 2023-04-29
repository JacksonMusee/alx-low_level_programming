#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - Create a new dog
 *
 *@name: name of your dog
 *@age: age of the dog
 *@owner: Who owns you
 *
 * Return: A ponter to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kadog;

	kadog = (dog_t *) malloc(sizeof(dog_t));
	if (kadog == NULL)
		return NULL;

	kadog->name = (char *) malloc((sizeof(char) * strlen(name)) + sizeof(char));
	if (kadog->name == NULL)
	{
	free(kadog);
	return (NULL);
	}
	
	kadog->owner = (char *) malloc((sizeof(char) * strlen(owner)) + sizeof(char));
	if (kadog->owner == NULL)
	{
	free(kadog->name);
	free(kadog);
	return (NULL);
	}

	kadog->name = name;
	kadog->age = age;
	kadog->owner = owner;

	return (kadog);
}
