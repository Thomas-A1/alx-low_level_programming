#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog function
 * @name: name as a variable as char type
 * @age: age as a variable of type float
 * @owner: owner as a variable of char type
 * Description: A struct dog function
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
