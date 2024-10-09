def can_drive(nums: list[int]) -> bool:
    fuel = nums[0]
    for i in range(1, len(nums)):
        if nums[i] > fuel:
            fuel = nums[i]
        elif fuel == 0:
            return False
        fuel -= 1
    return True


if __name__ == "__main__":
    print(can_drive(list(map(int, input().split()))))
