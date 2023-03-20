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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
