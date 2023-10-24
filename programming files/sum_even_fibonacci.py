# sum_even_fibonacci.py is a file that sums even fibonacci values less than 4000000

# declare int variables to increase value
a, b = 0, 1
# sum_even will store total sum
sum_even = 0

# will value is less that 4000000 if it is even add to the sum. 
while b < 4000000:
    if b % 2 == 0:
        sum_even += b
    a, b = b, a+b

# print the sum
print(sum_even)

# answer should be 4613732
