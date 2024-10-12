#include <stdio.h>
#include <ctype.h>

int stringToInt(const char *str) {
    int result = 0;
    int sign = 1;
    
    // Пропускаем начальные пробелы
    while (*str == ' ') {
        str++;
    }
    
    // Проверка на знак
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    
    // Преобразование
    while (isdigit(*str)) {
        result = result * 10 + (*str - '0');
        str++;
    }
    
    return result * sign;
}

int maine() {
    char input[100];
    
    printf("Введите строку: ");
    fgets(input, sizeof(input), stdin);  // Чтение строки с клавиатуры
    
    int number = stringToInt(input);
    printf("Преобразованное число: %d\n", number);
    
    return 0;
}
