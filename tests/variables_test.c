#include <stdio.h>
#include <stdarg.h>

//variadic function: required args (nb of parameters) + ...
void	print_ints(int count, ...)
{
	va_list	args; //storage for args
	int	value;
	int	i;

	//initialize va_list; va_start takes va_list name 
	//and the 1st parameter of the function
	va_start(args, count);

	i = 0;
	while (i < count)
	{
		value = va_arg(args, int); //get the argument, have to tell what type the arg is
		printf("%d: %d\n", i, value);
		i++;
	}
	va_end(args);
}

int	main()
{
	print_ints(4, 2, 5, 7, 32);
	print_ints(2, 0, 999);
	print_ints(5, 0, 456, 3, 2, 5);
}