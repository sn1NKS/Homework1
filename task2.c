#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t n, res = 0;

    scanf("%u", &n);

    uint32_t mask = 0xFF000000;

    res = n ^ mask;

    printf("%u\n", res);

    return 0;
}