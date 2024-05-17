#include <iostream>
#include <string>

using namespace std;

int main(){
    const int len_sequence = 103;
	// создание последовательности
	int sequence[103] {1};
	int result;
	for (int i = 1; i < len_sequence; i++) {
		if (sequence[i-1] % 2 == 0) {
			sequence[i] = sequence[i-1] + 2;
		} else {
			sequence[i] = sequence[i-1] + 1;
		}
	}

	for (int i = 0; i < len_sequence; i++) {
		if (sequence[i] % 2 == 0) {
			result++;
		}
	}

	// вывод результата
	cout << result << endl;
}

// функция вычисляющая сумму цифр
int sum_digits(int number) {
	string string_number = to_string(number);
	int result_sum;
	for (int i = 0; i < string_number.length(); i++) {
		result_sum += stoi(string_number);
	}
	return result_sum;
}