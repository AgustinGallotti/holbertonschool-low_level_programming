#ifndef DOG_H
#define DOG_H
/**
* struct dog - Define a new type struct dog with the following elements
* @name: Poppy
* @age: 3.5
* @owner: Bob
*/
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog;
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
