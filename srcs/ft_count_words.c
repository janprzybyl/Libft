#include "libft.h"

int ft_count_words(char *s, char delimiter)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while (s[i])
    {
<<<<<<< HEAD
        while (s[i] && s[i] == delimiter)
            i++;
        if (!s[i])
            return (count);

        while (s[i] && s[i] != delimiter)
            i++;
        count++;
=======
        // if (s[i] != delimiter)
        // {
            while (s[i] && s[i] != delimiter && s[i] != '\0')
                i++;
            count++;
        // } 
        // else
        //     i++;
>>>>>>> 349d77c9b4d036dfb6d94ce04fb1c5b6f7a03cf7
    }

    return (count);
}