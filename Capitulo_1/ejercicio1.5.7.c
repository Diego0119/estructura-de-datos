// Escribir una funcion que invierta la representacion de un numero entero
#include <stdio.h>

int invert_representation_of_integer(int number);

int main()
{
    // int number1 = 10;
    int number2 = 1223;
    // int number3 = 2;
    invert_representation_of_integer(number2);
    return 0;
}

int invert_representation_of_integer(int number)
{
    if (number % 10 != 0)
    {
        int new_number = number % 10;
        return invert_representation_of_integer(new_number);
    }
}
