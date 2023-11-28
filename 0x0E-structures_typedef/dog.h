#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * init_dog - initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints information about a dog
 * @d: Pointer to the dog structure
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: Pointer to the dog structure
 */
void free_dog(dog_t *d);

/**
 * _strcpy - copies a string to a buffer
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to the destination buffer
 */
char *_strcpy(char *dest, const char *src);

/**
 * _strlen - calculates the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(const char *s);

#endif

