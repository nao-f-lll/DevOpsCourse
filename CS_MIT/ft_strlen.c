#include <unistd.h>

int ft_strlen(char *str)
{
    int contador;
    contador = 0;
    while (*str) {
        contador++;
        str++;
    }
    return (contador);
}


void convert_number(int numero) {
    char buffer[1];
    buffer[0] = (numero % 10) + '0'; 
    write(1, buffer, 1);
}

int main (void) {
    char str[] = {"Hello7f"};
    convert_number(ft_strlen(str));
    return (0);
}