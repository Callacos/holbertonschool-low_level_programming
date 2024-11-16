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
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
