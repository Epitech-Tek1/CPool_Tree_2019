/*
** EPITECH PROJECT, 2019
** tree
** File description:
** 
*/

void tree(int size)
{
    int n = 0;
    int b = (3 * size);
    int c = (7 + 2 * size);
    int f;;
    int ii;
    int i;
    
    if (0 == size) { // Verification size
        
    } else {
        for (int f = 0; f != size; ++f) {
            for (i = 0; i <= (3 + n); ++i) {
                for (ii = c; ii > 0; --ii) {
                    my_putchar(' ');
                }
                my_putchar('*');
                c = c - 1;
                for (int iii = b; iii != (3 * size); ++iii) {         
                    my_putchar('*');
                    my_putchar('*');
                }
                b = b - 1;
                my_putchar('\n');
            }
            n = n + 1;
            b = b + 2;
            c = c + 2;
        }
        my_putchar('|');
        my_putchar('\n');
    }
}
