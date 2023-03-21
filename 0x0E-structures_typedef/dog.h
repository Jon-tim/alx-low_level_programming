#ifndef _DOG_FILE_
#define _DOG_FILE_

/**
 * struct dog - struct that stores dag's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: struct that stores dog's info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
