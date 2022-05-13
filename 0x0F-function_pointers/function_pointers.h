#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

/**
 * enum bool - typedef function for bool
 * @TRUE: 1
 * @FALSE: 0
*/
typedef enum bool
{
	TRUE = 1,
	FALSE = 0
} bool;

#endif /* FUNCTION_POINTERS_H */
