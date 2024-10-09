#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

#include "can_drive.h"

int main(int argc, char** argv) {
    size_t len_nums;
    printf("Enter the number of items: ");
    scanf("%u", &len_nums);

    uint32_t* nums = (uint32_t*)malloc(len_nums * sizeof(uint32_t));
    printf("Enter the values of the items separated by a space: ");
    for (int i = 0; i < len_nums; i++) {
        scanf("%u", &nums[i]);
    }

    bool result = can_drive(nums, len_nums);
    if (result) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    free(nums);
    return 0;
}
