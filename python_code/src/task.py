def sum_digits(number):
    result = 0
    while number > 0:
        result += number % 10
        number //= 10
    return result

sequence = [1]+[0]*102
result = 0

for i in range(0, 103):
    if sum_digits(sequence[i-1]) % 2 == 0:
        sequence[i] = sequence[i-1] + 2
    else:
        sequence[i] = sequence[i-1] + 1

for i in range(0, 103):
    if sequence[i] % 2 == 0:
        result += 1

print(result)