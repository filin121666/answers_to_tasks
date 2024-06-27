package main

import (
	"fmt"
)

func main() {
	const len_sequence int = 103
	// создание последовательности
	var sequence [len_sequence]int = [len_sequence]int{1}
	var result int

	for i := 1; i < len_sequence; i++ {
		if sum_digits(sequence[i-1])%2 == 0 {
			sequence[i] = sequence[i-1] + 2
		} else {
			sequence[i] = sequence[i-1] + 1
		}
	}

	for i := 0; i < len_sequence; i++ {
		if sequence[i]%2 == 0 {
			result++
		}
	}

	// вывод результата
	fmt.Printf("%d", result)
}

// функция вычисляющая сумму цифр
func sum_digits(number int) int {
	var result_sum int
	for number > 0 {
		result_sum += number % 10
		number /= 10
	}
	return result_sum
}
