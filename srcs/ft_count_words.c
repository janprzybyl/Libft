#include "libft.h"

int ft_count_words(char *s, char delimiter)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    
    while (s[i])
    {
        while (s[i] && s[i] != delimiter && s[i] != '\0')
            i++;

        count++;
    }

    return (count);
}