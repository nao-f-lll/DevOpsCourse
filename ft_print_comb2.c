#include <unistd.h>
#include <stdio.h>


void convert_number(int num);
void print_numbers(int primer_numero, int segundo_numero);

void    ft_print_comb2(void) {
    int     primer_numero;
    int     segundo_numero;

    primer_numero = 0;
    segundo_numero = 0;
    while (primer_numero <= 99) 
    {
        while (segundo_numero <= 99)
        {
            print_numbers(primer_numero, segundo_numero);
            segundo_numero++;
        }
        primer_numero++;
        segundo_numero = primer_numero + 1;
    }
}


void print_numbers(int primer_numero, int segundo_numero) {
       if (primer_numero <= segundo_numero) {   
               
                convert_number(primer_numero);
                write(1," ",1);
                convert_number(segundo_numero);
                   
                if (!(primer_numero == 98 && segundo_numero == 99)) {
                    write(1,",",1);
                    write(1," ",1);
                }
            }
}

void convert_number(int numero) {
    char buffer[2];
    buffer[0] = (numero / 10) + '0'; 
    buffer[1] = (numero % 10) + '0'; 
    write(1, buffer, 2);
}


int main (void) {
    ft_print_comb2();
    return (0);
}