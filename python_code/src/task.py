ans = [1]
for _ in range(102):
    n = sum(map(int, str(ans[-1])))
    ans.append(ans[-1] + 2 - (n % 2))
print(len(list(filter(lambda i: i % 2 == 0, ans))))