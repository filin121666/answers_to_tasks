#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t n;

    scanf("%d", &n);

    if (n % 3 == 0) {
        printf("%d\n", n / 3 * 2);
    } else {
        printf("%d\n", n / 3 * 2 + 1);
    }
    return 0;
}
