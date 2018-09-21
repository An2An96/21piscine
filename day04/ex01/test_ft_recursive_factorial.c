#include "ft_recursive_factorial.c"

void    test_ft_recursive_factorial()
{
    int i_result;

    i_result = ft_recursive_factorial(5);
	printf("Call ft_recursive_factorial(5), result: %d. %s\n", i_result, i_result == 120 ? "OK" : "ERROR");
	i_result = ft_recursive_factorial(-5);
	printf("Call ft_recursive_factorial(3), result: %d. %s\n", i_result, i_result == 0 ? "OK" : "ERROR");
	i_result = ft_recursive_factorial(0);
	printf("Call ft_recursive_factorial(0), result: %d. %s\n", i_result, i_result == 1 ? "OK" : "ERROR");
	
	printf("\n\n");
}