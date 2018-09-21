int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	int result;
	
	result = nb;
	while(--power > 0)
	{
		result *= nb;
	}
	return result;
}