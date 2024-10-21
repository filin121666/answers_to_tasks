#include <stdio.h>

int main(void)
{
    unsigned int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    printf("%d\n", (n - 1) / k + k);
}