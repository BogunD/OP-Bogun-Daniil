k = 1
sum = 0
n = int(input(" Введіть натуральне число n: "))
while n <= 0:
    if n <= 0:
        n = int(input("Число має бути додатнім. Спробуйте ще раз: "))
else:
    while k <= n:
          sum = sum + 1 / (k * ((2 * k + 1) ** 2))
          k = k + 1

print("Сума = ", sum)




