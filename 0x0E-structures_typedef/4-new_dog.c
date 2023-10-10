#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - Create a new dog
 * @name: Pointer to the dog name
 * @age: The age of the dog
 * @owner: Pointer to the owner of the dog
 * Return: Pointer to the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n_len, o_len, i;
	dog_t *dog; /* pointer to the dog_t struct */

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t)); /*Alloct mem for contnts of dog in struc*/
	if (dog == NULL)
		return (NULL);
	for (n_len = 0; name[n_len]; n_len++) /* Calc len of name string */
		;
	n_len++; /* Cont counting so that to add space for the '\0' char */

	dog->name = malloc(n_len * sizeof(char)); /* Give name element mem */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n_len; i++)
		dog->name[i] = name[i]; /* Cpy name char into new mem */
	dog->age = age;
	for (o_len = 0; owner[o_len]; o_len++)
		;
	o_len++;
	dog->owner = malloc(o_len * sizeof(char)); /* Alloct owner mem in str */
	if (dog->owner == NULL)
	{
		free(dog->name); /*free insid incas mem alloc for owner fails*/
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o_len; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
