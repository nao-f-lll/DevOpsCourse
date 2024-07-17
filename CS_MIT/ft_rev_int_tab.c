#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{

    int start_index = 0;
    int end_index = size - 1;
    int temp = 0;
    while (start_index < end_index) 
    {   
        temp = tab[start_index];
        tab[start_index] = tab[end_index];
        tab[end_index] = temp;
        start_index++;
        end_index--;
    }
      
}


void convert_number(int numero) {
    char buffer[1];
    buffer[0] = (numero % 10) + '0'; 
    write(1, buffer, 1);
}

int main (void) {
    int numeros[5] = {0,1,2,3,4};
    convert_number(numeros[1]);
    convert_number(numeros[3]);
    ft_rev_int_tab(numeros, 5);
    convert_number(numeros[1]);
    convert_number(numeros[3]);
    return (0);
}