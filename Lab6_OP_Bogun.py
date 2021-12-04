import math


def formula(n, k, f):
    p = float((n + k + f)/2)
    Sq = math.sqrt(p*(p-n)*(p-k)*(p-f))
    return Sq

def maxSq(Sq1, Sq2, Sq3):
    if ((Sq1 > Sq2) and (Sq1 > Sq3)):
        Max = 1
    if ((Sq2 > Sq1) and (Sq2 > Sq3)):
        Max = 2
    if ((Sq3 > Sq1) and (Sq3 > Sq2)):
        Max = 3
    return Max

def inputt():
    flag = True
    while flag:
        flag = False
        a = float(input(" а = "))
        b = float(input(" b = "))
        c = float(input(" c = "))
        if((a >= b + c) or (b >= a + c) or (c >= b + a)):
            print("Такого трикутника не існує")
            flag = True
    return a, b, c


print("1 трикутник:")
a, b, c = inputt()
print("2 трикутник:")
a1, b1, c1 = inputt()
print("3 трикутник:")
a2, b2, c2 = inputt()

Sq1 = formula(a, b, c)
Sq2 = formula(a1, b1, c1)
Sq3 = formula(a2, b2, c2)
print("Square 1 = ", Sq1)
print("Square 2 = ", Sq2)
print("Square 3 = ", Sq3)
print( maxSq(Sq1, Sq2, Sq3), " трикутник найбільший")


