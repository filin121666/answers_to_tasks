#include <iostream>
#include <string>

using namespace std;

int sum_digits(int numbers);

int main(){
    const int len_sequence = 103;
	// создание последовательности
	int sequence[103] {1};
	int result = 0;
	for (int i = 1; i < len_sequence; i++) {
		if (sum_digits(sequence[i-1]) % 2 == 0) {
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
	int result_sum = 0;
	while (number > 0) {
		result_sum += number % 10;
		number /= 10;
	}
	return result_sum;
}