#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

bool can_drive(uint32_t *nums, size_t len_nums)
{
    uint32_t fuel = nums[0];

    for (size_t i = 1; i < len_nums; i++, fuel--) {
        if (nums[i] > fuel) {
            fuel = nums[i];
        } else if (fuel == 0) {
            return false;
        }
    }
    return true;
}
