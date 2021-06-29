#ifndef VECTOR_H
#define VECTOR_H
#define VECTOR_H_VERSION 1.0

#include <stdlib.h> /*malloc() to allocate to the heap*/
#include <string.h>
#define INT_SIZE(x) x * sizeof(int) /*Get the size in bytes of an integer*/

struct Vector
{
	int* memory;
	int len;
}typedef Vector;
struct Vector Vector_generate(int size);

void Vector_extend(Vector* v, int new_size);
void Vector_push(Vector* v, int elem);

void Vector_fill(Vector* v, int elem);
void Vector_destroy(Vector* v);

#endif /*VECTOR_H*/