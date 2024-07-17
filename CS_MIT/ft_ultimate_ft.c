#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}


void print_number(int numero) {

    char buffer[2];
    buffer[0] = (numero / 10) + '0'; 
     buffer[1] = (numero % 10) + '0'; 
    
    write(1, buffer, 2);
}


int main (void) {
    int nbr;
    nbr = 0;
    int *pr1 = &nbr;
    int **pr2 = &pr1;
    int ***pr3 = &pr2;
    int ****pr4 = &pr3;
    int *****pr5 = &pr4;
    int ******pr6 = &pr5;
    int *******pr7 = &pr6;
    int ********pr8 = &pr7;
    int *********pr9 = &pr8;


    print_number(nbr);
    ft_ultimate_ft(pr9);
    print_number(nbr);
    return (0);
}
