#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> prices;
    int result = 0;
    int input_number;
    cin >> input_number;
    while (input_number != 0) {
        prices.push_back(input_number);
        cin >> input_number;
    }
    for (int i = 1; i < prices.size() - 1; i++) {
        if (prices[i - 1] > prices[i] && prices[i + 1] > prices[i]) {
            result += prices[i] * 5;
        }
    }
    cout << result << endl;
}
