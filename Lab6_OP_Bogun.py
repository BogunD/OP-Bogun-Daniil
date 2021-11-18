import math


def formula(n, k, f):
    p = float((n + k + f)/2)
    Sq = math.sqrt(p*(p-n)*(p-k)*(p-f))
    return Sq


def func(a, b, c):
    if a + b < c or b + c < a or a + c < b:
        print('Трикутника із такими сторонами не існує! Спробуйте ще раз')
    else:
        print("Площа трикутника = ", formula(a, b, c))
        return 1


flag = False
while not flag:
    a = float(input("Введіть довжини сторін 1 трикутника\n а = "))
    b = float(input(" b = "))
    c = float(input(" c = "))
    func(a, b, c)
    flag = True


flag = False
while not flag:
    a1 = float(input("Введіть довжини сторін 2 трикутника\n а = "))
    b1 = float(input(" b = "))
    c1 = float(input(" c = "))
    func(a1, b1, c1)
    flag = True


flag = False
while not flag:
    a2 = float(input("Введіть довжини сторін 3 трикутника\n а = "))
    b2 = float(input(" b = "))
    c2 = float(input(" c = "))
    func(a2, b2, c2)
    flag = True


if (formula(a, b, c) > formula(a1, b1, c1)) and (formula(a, b, c) > formula(a2, b2, c2)):
    print("Перший трикутник найбільший")
elif (formula(a1, b1, c1) > formula(a, b, c)) and (formula(a1, b1, c1) > formula(a2, b2, c2)):
    print("Другий трикутник найбільший")

elif (formula(a2, b2, c2) > formula(a, b, c)) and (formula(a2, b2, c2) > formula(a1, b1, c1)):
    print("Третій трикутник найбільший")

else:
    print("Трикутники рівні")



