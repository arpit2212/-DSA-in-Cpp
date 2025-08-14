x, y = map(int, input().split())

# First deposit on Jan 1st → compounded for 2 half-years
first_deposit = y * ((1 + x / 100) ** 2)

# Second deposit on July 1st → compounded for 1 half-year
second_deposit = y * ((1 + x / 100) ** 1)

# Total amount
total = first_deposit + second_deposit

# Output rounded amount
print(round(total))
