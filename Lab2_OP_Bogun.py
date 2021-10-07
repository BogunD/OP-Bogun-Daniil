a = float(input(" Введіть довжину цеглини (см) "))
b = float(input(" Введіть ширину цеглини (см) "))
c = float(input(" Введіть висоту цеглини (см) "))
x = float(input(" Введіть ширину отвору (см) "))
y = float(input(" Введіть висоту отвору (см) "))
if x >= a and y >= b or x >= b and y >= a :
    print(f"Цеглина проходить в отвір")
elif x >= c and y >= b or x >= b and y >= c :
    print(f"Цеглина проходить в отвір")
elif x >= b and y >= c or x >= c and y >= b :
    print(f"Цеглина проходить в отвір")
else :
    print(f"Цеглина не проходить в отвір")