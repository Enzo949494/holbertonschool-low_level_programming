#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure chien
 * @name: nom chien
 * @age: age chien
 * @owner: proprio chien
 * Description: structure avec infos sur chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* proto fonctions structure dog*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
