#ifndef STRING_H
#define STRING_H
#define String_H_VERSION 1.0

#include <stdlib.h> /*malloc() to allocate to the heap*/
#include <string.h>
#define CHAR_SIZE(c) c * sizeof(char) /*Get the size in bytes of a char*/

struct String
{
	char* memory;
	int len;
}typedef String;
struct String String_generate(int size);
struct String String_build(char str[], int len);

void String_extend(String* v, int new_size);
void String_push(String* v, char elem);
void String_set(String* v, char str[], int len);

void String_fill(String* v, char elem);
void String_destroy(String* v);

#endif /*STRING_H*/