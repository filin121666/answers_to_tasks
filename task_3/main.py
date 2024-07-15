n = int(input())
plat_heights = list(map(int, input().split()))

res = 0
curr_plat = 0


while curr_plat != n-1:
    if curr_plat <= n-3:
        variant_1 = abs(plat_heights[curr_plat+1] - plat_heights[curr_plat]) + abs(plat_heights[curr_plat+2] - plat_heights[curr_plat+1])
        variant_2 = 3 * abs(plat_heights[curr_plat+2] - plat_heights[curr_plat])
        if variant_1 < variant_2:
            res += variant_1
        else:
            res += variant_2
        curr_plat += 2
    else:
        res += abs(plat_heights[curr_plat+1] - plat_heights[curr_plat])
        curr_plat += 1

print(res)
