#include "ft_sqrt.c"

void    test_ft_sqrt()
{
    int i_result;

	i_result = ft_sqrt(64);
	printf("Call ft_sqrt(64), result: %d. %s\n", i_result, i_result == 8 ? "OK" : "ERROR");
	i_result = ft_sqrt(11);
	printf("Call ft_sqrt(11), result: %d. %s\n", i_result, i_result == 0 ? "OK" : "ERROR");
	i_result = ft_sqrt(-49);
	printf("Call ft_sqrt(-49), result: %d. %s\n", i_result, i_result == 0 ? "OK" : "ERROR");

    printf("\n\n");
}