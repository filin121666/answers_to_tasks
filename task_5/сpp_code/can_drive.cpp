#include <vector>

using namespace std;

bool can_drive(vector<unsigned int> &nums, unsigned int len_nums)
{
    unsigned int fuel = nums[0];

    for (int i = 1; i < len_nums; i++, fuel--)
    {
        if (nums[i] > fuel)
        {
            fuel = nums[i];
        }
        else if (fuel == 0)
        {
            return false;
        }
    }
    return true;
}
