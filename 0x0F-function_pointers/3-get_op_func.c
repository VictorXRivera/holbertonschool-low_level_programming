#include "calc.h"

/**
  *
  *
  *
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};
    	int i;

	if (s ! = "+", "-", "*", "/", "%" || !s)
		return (NULL);
	while (s)
	{
		s(get_op_func[i]);
	}
	return (i);
}
