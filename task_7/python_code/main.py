number = 1
count = 0
while number < 1000:
    number += number % 10
    if number > 99 and number < 1000:
        count += 1

print(count)
