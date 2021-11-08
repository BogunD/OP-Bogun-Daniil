import math


def formula(n, k, f):
    p = float((n + k + f)/2)
    Sq = math.sqrt(p*(p-n)*(p-k)*(p-f))
    return Sq


flag = False
while not flag:
    a = float(input("Введіть довжини сторін трикутника\n а = "))
    b = float(input(" b = "))
    c = float(input(" c = "))
    if a + b < c or b + c < a or a + c < b:
        print('Трикутника із такими сторонами не існує! Спробуйте ще раз')
    else:
        print("Площа трикутника = ", formula(a, b, c))
        flag = True

