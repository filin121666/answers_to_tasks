#include <iostream>

using namespace std;

int main(void) {
    unsigned int number = 1;
    unsigned int count = 0;

    while (number < 1000) {
        number += number % 10;
        if (number > 99 && number < 1000) {
            count++;
        }
    }

    cout << count << endl;
}