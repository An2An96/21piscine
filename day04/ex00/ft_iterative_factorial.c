int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
	{
		return 0;
	}
	int i;
	int result;
	
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return result;
}