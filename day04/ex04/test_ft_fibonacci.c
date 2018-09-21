#include "ft_fibonacci.c"

void    test_ft_fibonacci()
{
    int i_result;

    i_result = ft_fibonacci(-2);
	printf("Call ft_fibonacci(-2), result: %d. %s\n", i_result, i_result == -1 ? "OK" : "ERROR");
	i_result = ft_fibonacci(1);
	printf("Call ft_fibonacci(1), result: %d. %s\n", i_result, i_result == 1 ? "OK" : "ERROR");
	i_result = ft_fibonacci(5);
	printf("Call ft_fibonacci(5), result: %d. %s\n", i_result, i_result == 5 ? "OK" : "ERROR");
	
	printf("\n\n");
}