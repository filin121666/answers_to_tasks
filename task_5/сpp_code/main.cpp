#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "can_drive.h"

using namespace std;

int main(int argc, char** argv) {
    unsigned int len_nums;
    cout << "Enter the number of items: ";
    cin >> len_nums;

    vector<unsigned int> nums (len_nums);
    cout << "Enter the values of the items separated by a space: ";
    for (int i = 0; i < len_nums; i++) {
        cin >> nums[i];
    }
    bool result = can_drive(nums, len_nums);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}