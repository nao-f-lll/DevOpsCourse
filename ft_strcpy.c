#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *dest, char *src) 
{
    int     index;

    index = 0;
    while (src[index])
    {
        dest[index] =  src[index];
        index++; 
    }
    dest[index] = '\0';

    return (dest);
}


/*
void print_array( char *array) 
{
    while (*array) {
        write(1, array, 1);
        array++;
    }
    write(1, "\n", 1);
}


int main(void)
{

    char src[] = "hello";
    char dest[6];
    print_array(src);  
    ft_strcpy(dest, src);
    print_array(dest);


    char src1[] = "hel\0lo";
    char dest1[6];
    print_array(src1);  
    ft_strcpy(dest1, src1);
    print_array(dest1);

    return (0);
}
*/