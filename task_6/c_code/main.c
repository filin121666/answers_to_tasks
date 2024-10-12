#include <stdio.h>
#include <stdint.h>

#define START_TIME 480  // 8:00
#define END_TIME 1320  // 22:00

uint32_t h, m, a, b;


uint32_t max(uint32_t n1, uint32_t n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}


uint32_t min(uint32_t n1, uint32_t n2) {
    if (n1 < n2) {
        return n1;
    } else {
        return n2;
    }
}


int main() {
    scanf("%u", &h);
    scanf("%u", &m);
    scanf("%u", &a);
    scanf("%u", &b);
    uint32_t arrival_time = h * 60 + m;
    uint32_t max_a_b = max(a, b);

    if (START_TIME > arrival_time) {
        printf("%u", (START_TIME - arrival_time));
    } else if (END_TIME < arrival_time) {
        printf("%d", -1);
    } else {
        if (arrival_time % a == 0) {
            printf("%d", 0);
        } else if (arrival_time % b == 0) {
            printf("%d", 0);
        } else {
            printf("%u", min((uint32_t) (a - (arrival_time % a)), (uint32_t) (b - (arrival_time % b))));
        }
    }
}
