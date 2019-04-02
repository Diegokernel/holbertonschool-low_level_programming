#include "dog.h"
/**
 * *_strdup - turns a pointer to a newly allocated space in memory
 *@str: check
 * Return: (0) always
 */
char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
/**
 * new_dog -  creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *dog_name, *dog_owner;

	doggo = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL)
		return (NULL);
	if (doggo == NULL)
		return (NULL);
	dog_name = _strdup(name);
	if (dog_name == NULL)
	{
		free(dog_name);
		return (NULL);
	}
	dog_owner = _strdup(owner);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(doggo);
		return (NULL);
	}
	doggo->name = dog_name;
	doggo->age = age;
	doggo->owner = dog_owner;
	return (doggo);
}
