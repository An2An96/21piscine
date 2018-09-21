#include "ft_is_prime.c"

void    test_ft_is_prime()
{
    int i_result;

	i_result = ft_is_prime(20);
	printf("Call ft_is_prime(20), result: %d. %s\n", i_result, i_result == 0 ? "OK" : "ERROR");
	i_result = ft_is_prime(907);
	printf("Call ft_is_prime(907), result: %d. %s\n", i_result, i_result == 1 ? "OK" : "ERROR");
	i_result = ft_is_prime(-49);
	printf("Call ft_is_prime(-49), result: %d. %s\n", i_result, i_result == 0 ? "OK" : "ERROR");

    printf("\n\n");
}