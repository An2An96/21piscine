#include "ft_find_next_prime.c"

void    test_ft_find_next_prime()
{
    int i_result;

	i_result = ft_find_next_prime(0);
	printf("Call ft_find_next_prime(0), result: %d. %s\n", i_result, i_result == 2 ? "OK" : "ERROR");
	i_result = ft_find_next_prime(906);
	printf("Call ft_find_next_prime(906), result: %d. %s\n", i_result, i_result == 907 ? "OK" : "ERROR");
	i_result = ft_find_next_prime(412);
	printf("Call ft_find_next_prime(412), result: %d. %s\n", i_result, i_result == 419 ? "OK" : "ERROR");

    printf("\n\n");
}