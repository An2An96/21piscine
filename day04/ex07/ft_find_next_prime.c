int ft_is_prime(int nb);

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb))
    {
        return nb;
    }
    else
    {
        return ft_find_next_prime(nb + 1);
    }
}

// int ft_is_prime(int nb)
// {
//     if (nb < 2)
//     {
//         return (0);
//     }

//     int i;

//     i = nb;
//     while (--i > 1)
//     {
//         if (nb / i > 0 && nb % i == 0)
//         {
//             return (0);
//         }
//     }
//     return (1);
// }