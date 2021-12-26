def sum_of_nums(inputt):
    word = inputt.split()
    sum = 0
    for curr in word:
        sum += int(curr)
    return sum


inp = str(input("Enter numbers and spaces"))
Sum = sum_of_nums(inp)
print("Sum =", Sum)
