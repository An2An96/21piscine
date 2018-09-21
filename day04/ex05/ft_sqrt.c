int ft_sqrt(int nb)
{
    int cur = nb - 1;
    while (cur > 0)
    {
        if (cur * cur == nb)
        {
            return cur;
        }
        cur--;
    }

    return 0;
}