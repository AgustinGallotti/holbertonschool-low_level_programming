#include <stdio.h>
#include"dog.h"
/**
* print_dog - a function that prints a struct dog
* @d: d
* Return: null
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil\n");
	else
		printf("Owner: %s\n", d->owner);
}
