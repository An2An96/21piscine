#include <stdio.h>
#include <stdlib.h>

int rmatch(char *s1, char *s2, int pos1, int pos2)
{
    if (s2[pos2] == '*' && s2[pos2 + 1] == '*')
        return rmatch(s1, s2, pos1, pos2 + 1);
    if (s1[pos1] == '\0' || s2[pos2] == '\0')
    {
        if ((s1[pos1] == '\0' && s2[pos2] == '\0') || (s2[pos2] == '*' && s2[pos2 + 1] == '\0'))
            return (1);
        else
            return (0);
    }
    if (s1[pos1] == s2[pos2])
        return rmatch(s1, s2, pos1 + 1, pos2 + 1);
    else
    {
        if (s2[pos2] == '*')
        {
            if (s1[pos1] == s2[pos2 + 1])
            {
                if (rmatch(s1, s2, pos1, pos2 + 1))
                    return (1);
            }
            return rmatch(s1, s2, pos1 + 1, pos2);
        }
    }
    return (0);
}

int match(char *s1, char *s2)
{
    int i;
    int j;
    int temp_pos;

    i = 0;
    j = 0;
    return rmatch(s1, s2, i, j);
}