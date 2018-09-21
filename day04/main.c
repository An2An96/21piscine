#include <stdio.h>
#include "ex00/test_ft_iterative_factorial.c"
#include "ex01/test_ft_recursive_factorial.c"
#include "ex02/test_ft_iterative_power.c"
#include "ex03/test_ft_recursive_power.c"
#include "ex04/test_ft_fibonacci.c"
#include "ex05/test_ft_sqrt.c"
#include "ex06/test_ft_is_prime.c"
#include "ex07/test_ft_find_next_prime.c"

int	main()
{
	//	ex00
	printf("Start testing ex00:\n");
	test_ft_iterative_factorial();
	
	//	ex01
	printf("Start testing ex01:\n");
	test_ft_recursive_factorial();
	
	//	ex02
	printf("Start testing ex02:\n");
	test_ft_iterative_power();
	
	//	ex03
	printf("Start testing ex03:\n");
	test_ft_recursive_power();
	
	//	ex04
	printf("Start testing ex04:\n");
	test_ft_fibonacci();

	//	ex05
	printf("Start testing ex05:\n");
	test_ft_sqrt();

	//	ex06
	printf("Start testing ex06:\n");
	test_ft_is_prime();

	//	ex07
	printf("Start testing ex07:\n");
	test_ft_find_next_prime();
	
	getchar();
	return 0;
}