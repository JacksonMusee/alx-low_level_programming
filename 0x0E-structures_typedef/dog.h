#ifndef DOG_H
#define DOG_H

/**
 *struct dog - A simple structure my guy
 *
 *@name: Your dog's name
 *@age: Your dog's age
 *@owner: Is the dog your's?
 *
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
