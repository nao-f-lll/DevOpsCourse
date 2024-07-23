#include <stdio.h>

void ft_sort_int_tab(int *tab, int size) {

    int outer_index = 0;
    int inner_index = 0;
    while (outer_index < size - 1)
    {
       while (inner_index < size - 1)
    {
        if (tab[inner_index] > tab[inner_index + 1])  
        {
            int temp = tab[inner_index];
            tab[inner_index] = tab[inner_index + 1];
            tab[inner_index + 1] = temp;
        }  
      
      inner_index++;
    }
     inner_index = 0;
      outer_index++;
    }
    
}


void print_array(int *tab, int size) {
    int index = 0;
    while (index < size)
    {
        printf("%d ", tab[index]);
        index++;
    }
    
}


int main()
{
    int array[9] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
     print_array(array, 9);
    ft_sort_int_tab(array, 9);
    print_array(array, 9);
    return (0);
}
