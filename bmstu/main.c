#include <stdio.h> //библиотека ввода и вывода
#include <stdlib.h> // библиотека для atoi

int main() {
    char str[20];
    
    printf("Введите строку для преобразования в число: ");
    fgets(str, sizeof(str), stdin); // Считываем строку

    int number = atoi(str); // Преобразование строки в целое число

    printf("Преобразованное число: %d\n", number);

    return 0;
}

