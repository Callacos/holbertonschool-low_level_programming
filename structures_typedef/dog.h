#ifndef DOG_H
#define DOG_H

/**
 *struct dog - est une structure qui définit
 * un nom, un age et un proprio
 *@name: nom
 *@age: age
 *@owner: proprio
 *
*/
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
