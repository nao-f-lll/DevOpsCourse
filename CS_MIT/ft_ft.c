#include <unistd.h>

void ft_ft(int *nbr) 
{
    *nbr = 42;
}

void convert_number(int numero) {

    char buffer[2];
    buffer[0] = (numero / 10) + '0'; 
     buffer[1] = (numero % 10) + '0'; 
    
    write(1, buffer, 2);
}


int main (void) {
    int nbr;
    nbr = 0;
    convert_number(nbr);
    ft_ft(&nbr);
    convert_number(nbr);
    return (0);
}

