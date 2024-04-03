#include <stdio.h>
#include <stdint.h>

int main()
{
    unsigned n, count = 0;
    int max = 1;
    int current_digit;

    scanf("%d", &n);

    for (; n > 0; n--) // Инициализация переменной n не требуется
    {
        scanf("%d", &current_digit);

        if (current_digit > max)
        {
            max = current_digit;
            count = 1;
        }
        else if (current_digit == max)
        {
            count++;
        }
    }

    printf("%u", count);

    return 0;
}