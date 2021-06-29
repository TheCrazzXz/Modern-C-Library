#include "vector.h"

struct Vector Vector_generate(int len)
{
	struct Vector out;
	out.memory = malloc(INT_SIZE(len));
	out.len = len;
	return out;
}

void Vector_extend(Vector* v, int new_size) /*Modern problems require modern solutions*/
{
	v->memory = realloc(v->memory, INT_SIZE(new_size));
	v->len = new_size;
}
void Vector_push(Vector* v, int elem)
{
	//Vector out = v;
	Vector_extend(v, v->len + 1);
	v->memory[v->len - 1] = elem;
	//return out;
}

void Vector_fill(Vector* v, int elem)
{
	for(int i = 0 ; i < v->len ; i++)
	{
		v->memory[i] = elem;
	}
}

void Vector_destroy(Vector* v)
{
	free(v->memory);
}