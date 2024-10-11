#include <iostream>

#define START_TIME 480  // 8:00
#define END_TIME 1320  // 22:00

using namespace std;

unsigned int h, m, a, b;


unsigned int max(unsigned int n1, unsigned int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}


unsigned int min(unsigned int n1, unsigned int n2) {
    if (n1 < n2) {
        return n1;
    } else {
        return n2;
    }
}


int main() {
    cin >> h >> m >> a >> b;
    unsigned int arrival_time = h * 60 + m;
    unsigned int max_a_b = max(a, b);

    if (START_TIME > arrival_time) {
        cout << (START_TIME - arrival_time) << endl;
    } else if (END_TIME < arrival_time) {
        cout << -1 << endl;
    } else {
        if (arrival_time % a == 0) {
            cout << 0 << endl;
        } else if (arrival_time % b == 0) {
            cout << 0 << endl;
        } else {
            cout << min((unsigned int) (a - (arrival_time % a)), (unsigned int) (b - (arrival_time % b))) << endl;
        }
    }
}
