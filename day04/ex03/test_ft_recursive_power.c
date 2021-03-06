#include "ft_recursive_power.c"

void    test_ft_recursive_power()
{
    int i_result;

    i_result = ft_recursive_power(2, 0);
	printf("Call ft_recursive_power(2, 0), result: %d. %s\n", i_result, i_result == 1 ? "OK" : "ERROR");
	i_result = ft_recursive_power(10, -2);
	printf("Call ft_recursive_power(10, -2), result: %d. %s\n", i_result, i_result == 0 ? "OK" : "ERROR");
	i_result = ft_recursive_power(2, 21);
	printf("Call ft_recursive_power(2, 21), result: %d. %s\n", i_result, i_result == 2097152 ? "OK" : "ERROR");
	
	printf("\n\n");
}