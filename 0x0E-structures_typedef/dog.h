#ifndef _dog_h_
#define _dog_h_

/**
 *	struct dog - a dog info struct data type
 *	@name: dog's name
 *	@age: dog's age
 *	@owner: dog's owner
 *
 *	Description: struct named 'dog'. Contains name, age and owner.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *	typedef dog_t - dog struct typedef
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
