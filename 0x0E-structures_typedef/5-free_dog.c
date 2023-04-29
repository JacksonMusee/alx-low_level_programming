#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - This will free the dogs woof!
 *
 *@d: The dog to be freed
 *
 *
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
