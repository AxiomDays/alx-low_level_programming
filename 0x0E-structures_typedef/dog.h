/**
 * struct dog - Entry point
 * @name: char name
 * @age: float age
 * @owner: char owner
 * Description: 'the program's descriptor'
 *
 * Return: Always 0 (Success)
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
