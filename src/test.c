///////////////////////////////  
//         TEST MAIN         //
///////////////////////////////

#include "libft.h"


void striter_f(char *c)
{
    if ((*c >= 97) && (*c <= 122))
        *c = *c - 32;
}

void striteri_f(unsigned int n, char *c)
{
    printf("index[%d] before = %s ", n, c);
    if ((*c >= 97) && (*c <= 122))
        *c = *c - 32;
    printf("...and after = %s\n", c);
}

char strmap_f(char c)
{
    if ((c >= 97) && (c <= 122))
        c = c - 32;

    return (c);
}

char strmapi_f(unsigned int n, char c)
{
    printf("index[%d] before = %c ", n, c);
    if ((c >= 97) && (c <= 122))
        c = c - 32;
    printf("...and after = %c\n", c);

    return (c);
}

void lstdelone_del(void *s, size_t n)
{
    if (s)
    {
        free(s); 
        ft_putnbr(n);
    }
}

void lstiter_f(t_list *elem)
{
    char *string = "hello";
    elem->content = string;
}

t_list *lstmap_f(t_list *elem)
{
    t_list      *node;

    node = ft_lstnew(ft_strdup(elem->content), sizeof(elem->content));

    return (node);
}


int main()
{
    // char str[50] = "I like cats very much";
    // printf("%s\n", ft_memset(str, '!', 5));



    // char str[50] = "I like cats very much";
    // ft_bzero(str, 3);
    // printf("%s\n", str);



    // char memsrc[] = "I like cats!";
    // char memdst[20];
    // ft_memcpy(memdst, memsrc, 6);
    // memsrc[7] = '\0';
    // printf("%s\n", memdst);



    // char memsrc[] = "I like cats!";
    // char memdst[20];
    // printf("%s\n", ft_memccpy(memdst, memsrc, 'r', 20));
    // printf("%s\n", memdst);



    // char memsrc[] = "I like lions";
    // char memdst[20];
    // printf("%s\n", ft_memmove(memdst, memsrc, 7));



    //  char *str = "I like McDonald's";
    //  char *result = ft_memchr(str, 'M', 30);
    //  printf("%s\n", result);



    // printf("%d\n", ft_memcmp("abCdd", "abss", 4));



    // ft_strlen("KAmil");



    // printf("%s\n",ft_strnew(5)); 



    // char first[40] = "I like \0";
    // char *second = "cats so so much\0";
    // char *res = ft_strcat(first, second);
    // printf("%s\n", res);



    // char first[30] = "Mc\0";
    // char *second = "Donald's\0";
    // char *result = ft_strncat(first, second, 3);
    // printf("%s\n", result);



    // #define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
    // #define		STRING_4	"phrase differente pour le test"
    // #define		STRING_2	"there is no stars in the sky"
    // #define		STRING_3	"test basic !"

    // char	*str = STRING_1;

    // char	buff1[0xF00] = STRING_2;
    // char	buff2[0xF00] = STRING_2;
    // size_t	max = strlen(STRING_1) + 4;

    // int	r1 = strlcat(buff1, str, max);
    // int	r2 = ft_strlcat(buff2, str, max);

    // printf("%d %s\n", r1, buff1);
    // printf("%d %s\n", r2, buff2);

    // char	*src = "aaa";
    // char	dst1[20];
    // char	dst2[20];
    // int		ret1;
    // int		ret2;

    // memset(dst1, 'B', sizeof(dst1));
    // memset(dst2, 'B', sizeof(dst2));

    // strlcat(dst1, src, 20);
    // ret1 = strlcat(dst1, src, 20);
    // printf("%d %s\n", ret1, dst1);

    // ft_strlcat(dst2, src, 20);
    // ret2 = ft_strlcat(dst2, src, 20);
    // printf("%d %s\n", ret2, dst2);

    // char first[30] = "";
    // char *second = "Donald's\0";
    // int res = ft_strlcat(first, second, 30);
    // printf("%d %s\n", res, first);

    // char first1[30] = "";
    // char *second1 = "Donald's\0";
    // int res1 = strlcat(first1, second1, 30);
    // printf("%d %s\n", res1, first1);



    // char *res = ft_strchr("I like cats so much", 'c');
    // printf("%s\n", res);



    // char *res = ft_strrchr("I really like cats", 'a');
    // printf("%s\n", res);



    // char *res = ft_strstr("I like my cats so much", "ca");
    // printf("%s\n", res);  



    // char *res = ft_strnstr("I like my cats so much", "ca", 11);
    // printf("%s\n", res);



    // int result = ft_strcmp("abcd", "abcd");
    // printf("%d\n", result);



    // int result = ft_strncmp("Fbcdef", "abcdef", 3);
    // printf("%d\n", result);



    // printf("%d\n", ft_atoi("123"));



    // printf("%d\n", ft_isalnum('-'));



    // char *temp = malloc(10);
    // char temp2[] = "kAmiL";
    // for (int i = 0; i < ft_strlen(temp2); i++)
    //     temp[i] = temp2[i];
    // ft_striter(temp, striter_f);
    // printf("%s\n", temp);



    // char *temp = malloc(10);
    // char temp2[] = "kamil";
    // for (int i = 0; i < ft_strlen(temp2); i++)
    //     temp[i] = temp2[i];
    // ft_striteri(temp, striteri_f);
    // printf("%s\n", temp);



    // char temp[] = "kAmiL";
    // char *res;
    // res = ft_strmap(temp, strmap_f);
    // printf("%s\n", res);



    // char temp[] = "kAmiL";
    // char *res;
    // res = ft_strmapi(temp, strmapi_f);
    // printf("%s\n", res);



    // printf("%d\n", ft_strequ("kamill", "kamill"));



    // printf("%d\n", ft_strnequ("kamill", "kamIl", 3));



    // printf("%s\n", ft_strsub("out of the blue - unexpectedly", 18, 12));



    // printf("%s\n", ft_strjoin("out of the blue", " - unexpectedly"));



    // printf("%s", ft_strtrim("  I like cats    \0"));



    // char **res = ft_split("I*like*cats", '*');
    // for (int b = 0; b < 3; b++)
    //     printf("%s\n", res[b]);



    // printf("%s\n", ft_itoa(822));
    // printf("%s\n", ft_itoa(-2147483648));
    // printf("%s\n", ft_itoa(-1));
    // printf("%s\n", ft_itoa(2147483647));
    // printf("%s\n", ft_itoa(0));
    // printf("%s\n", ft_itoa(+1));



    // ft_putchar('7');
    // ft_putchar('\n');



    // ft_putstr("Kamil");



    // ft_putendl("Kamil");



    // ft_putnbr(2);



    // char *str = "Kamil";
    // char *res = ft_strrev(str);
    // printf("%s\n", res);



    // printf("%d\n", ft_count_words("I*like*cats", '*'));



    // int *res = ft_count_chars("I*like*cats* s", '*');
    // for (int i = 0; i < 4; i++)
    //     printf("%d\n", res[i]);



    t_list	*a = ft_lstnew(ft_strdup("1"), sizeof(char));
    t_list	*b = ft_lstnew(ft_strdup("2"), sizeof(char));
    t_list	*c = ft_lstnew(ft_strdup("3"), sizeof(char));   
    t_list	*d = ft_lstnew(ft_strdup("4"), sizeof(char));   
    t_list	*e = ft_lstnew(ft_strdup("5"), sizeof(char)); 
    t_list	*f = ft_lstnew(ft_strdup("hello"), sizeof(char)); 
    t_list	*g = ft_lstnew(ft_strdup("yello"), sizeof(char)); 

    // ft_lstdelone(&a, lstdelone_del);

    // ft_lstdel(&a, lstdelone_del);
    
    ft_lstadd_front(&a, b);
    ft_lstadd_front(&a, c);
    ft_lstadd_front(&a, d);
    ft_lstadd_front(&a, e);
    
    // ft_lstiter(a, lstiter_f);

    // t_list *res = ft_lstmap(d, lstmap_f);

    // t_list *res = ft_lstrev(a);

    // ft_lstadd_back(&a, b);
    // ft_lstadd_back(&a, c);
    // ft_lstadd_back(&a, d);
    // ft_lstadd_back(&a, e);

    // ft_remove_node(&a, c);

    ft_lstadd_after(&a, f, c);

    ft_lstadd_before(&a, g, c);
    
    ft_lstprint(a);



    


    return (0);
}