import random
SIZE = int(input("Введіть розмір масиву: "))
B = [random.randint(-20, 20) for B in range(SIZE)]
print(B, "\n")
Max_abs = abs(B[1] - B[0])
Min_abs = Max_abs
for i in range (2, SIZE):
    ABS = int(abs(B[i] - B[i - 1]))
    if ABS > Max_abs:
        Max_abs = ABS
    if ABS < Min_abs:
        Min_abs = ABS
print("Max abs = ", Max_abs, "\n")
print("Min abs = ", Min_abs, "\n")





