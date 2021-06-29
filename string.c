#include "string.h"

struct String String_generate(int len)
{
	struct String out;
	out.memory = malloc(CHAR_SIZE(len));
	out.len = len;
	return out;
}
struct String String_build(char str[], int len)
{
	struct String out;
	out.memory = malloc(CHAR_SIZE(len));
	out.len = len;

	strcpy(out.memory, str);
	return out;
}

void String_extend(String* v, int new_size) /*Modern problems require modern solutions*/
{
	v->memory = realloc(v->memory, CHAR_SIZE(new_size));
	v->len = new_size;
}
void String_push(String* v, char elem)
{
	//String out = v;
	String_extend(v, v->len + 1);
	v->memory[v->len - 1] = elem;
	//return out;
}
void String_set(String* v, char str[], int len)
{
	if(v->len < len) //If we need to extend the string
	{
		String_extend(v, len);
	}
	strcpy(v->memory, str);
}

void String_fill(String* v, char elem)
{
	for(int i = 0 ; i < v->len ; i++)
	{
		v->memory[i] = elem;
	}
}

void String_destroy(String* v)
{
	free(v->memory);
}