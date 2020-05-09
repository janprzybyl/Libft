#include "libft.h"

char *ft_dec_to_hex(long long int n, int is_uppercase)
{
    int     i;
    int     rem;
    char    *hex_arr;
    char    *hex;
    
    hex = "0123456789abcdef";
    hex_arr = malloc(50 * sizeof(char));
    i = 0;
    while (n != 0)
    {
        rem = n % 16;
        if (is_uppercase)
            hex_arr[i++] = ft_toupper(hex[rem]);
        else 
            hex_arr[i++] = hex[rem];
        n = n / 16;    
    }
    ft_strcat(hex_arr, "x0");

    return (ft_strrev(hex_arr));
}