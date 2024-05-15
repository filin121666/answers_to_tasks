package main

import (
	"fmt"
	"strconv"
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
	var string_number string = strconv.Itoa(number)
	var result_sum int64
	var tmp_num int64
	var err error
	for i := 0; i < len(string_number); i++ {
		tmp_num, err = strconv.ParseInt(string(string_number[i]), 10, 32)
		if err == nil {
			result_sum += tmp_num
		} else {
			return -1
		}
	}
	return int(result_sum)
}
