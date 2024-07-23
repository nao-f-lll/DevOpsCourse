#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int valor_temporado = *a;
    *a = *b;
    *b = valor_temporado;
}



void print_number(int numero) {

    char buffer[1];
    buffer[0] = (numero % 10) + '0'; 
    
    write(1, buffer, 1);
}


int main (void) {
    int nbr;
    int nbr2;
    nbr = 0;
    nbr2 = 3;    
    print_number(nbr);
     print_number(nbr2);
    ft_swap(&nbr, &nbr2);
    print_number(nbr);
     print_number(nbr2);
    return (0);
}