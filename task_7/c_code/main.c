#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t number = 1;
    uint8_t count = 0;

    while (number < 1000) {
        number += number % 10;
        if (number > 99 && number < 1000) {
            count++;
        }
    }

    printf("%d", count);
}