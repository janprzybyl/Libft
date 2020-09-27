#include "libft.h"

static char **create_arr(char *s, char c)
{
    int     *wordlenght;
    int     words;
    int     i;
    char    **arr;

    wordlenght = ft_count_chars((char *)s, c);
    words = ft_count_words((char *)s, c);
    i = 0;
    if (!(arr = malloc(sizeof(char *) * words)))
        return (NULL);
    while (i < words)
    {
        if (!(arr[i] = malloc(sizeof(char) * wordlenght[i])))
            return (NULL);
        i++;
    }
    return (arr);
}

char **ft_split(char const *s, char c)
{
    int     i;
    int     x;
    int     y;
    char    **arr;

    if (!(arr = create_arr((char *)s, c)))
        return (NULL);
    i = 0;
    y = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            x = 0;
            while (s[i] != c && s[i] != '\0')
                arr[y][x++] = s[i++];
            arr[y][x] = '\0';
            y++;
        }
        else
           i++;
    }
    arr[y] = NULL;
    return (arr);
}