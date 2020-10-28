#include "libft.h"

<<<<<<< HEAD
char **ft_strsplit(char *str)
=======
char **ft_strsplit(char *str, int delimiter)
>>>>>>> 349d77c9b4d036dfb6d94ce04fb1c5b6f7a03cf7
{
    char        **str_arr;
    int         words_num;
    int         i;
    int         w;
    int         c;

<<<<<<< HEAD
    words_num = ft_count_words(str, ' ');
=======
    words_num = ft_count_words(str, delimiter);
>>>>>>> 349d77c9b4d036dfb6d94ce04fb1c5b6f7a03cf7
    str_arr = malloc((words_num + 1) * sizeof(char *));
    i = 0;
    while (i != words_num)
        str_arr[i++] = malloc(256 * sizeof(char));
    str_arr[i] = NULL;

    i = 0;
    w = 0;
    while (str[i])
    {
<<<<<<< HEAD
        if (str[i] != ' ')
        {
            c = 0;
            while (str[i] != ' ' && str[i])
=======
        if (str[i] != delimiter)
        {
            c = 0;
            while (str[i] != delimiter && str[i])
>>>>>>> 349d77c9b4d036dfb6d94ce04fb1c5b6f7a03cf7
            {
                str_arr[w][c] = str[i];
                c++;
                i++;
            }
            w++;
        }
        else
            i++;
    }

    return (str_arr);
}