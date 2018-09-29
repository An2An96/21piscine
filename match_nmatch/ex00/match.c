int match(char *s1, char *s2)
{
    int i;
    int j;

    while (s1[i] != '\0' || s2[j] != '\0')
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        else
        {
            if (s2[j] == '*')
            {
                if (s2[j + 1] == '\0')
                    return (1);
                else if (s1[i + 1] == s2[j + 1])
                {
                    j++;
                }
            }
            else
            {
                return (0);
            }
        }
        i++;
    }
    return (1);
}