#2480번
a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
money = 0
    
if a == b and b == c:
    money = 10000 + a * 1000

elif (a==b and a!=c) or (a==c and a!=b):
    money = 1000 + a * 100

elif b==c and b!=a:
    money = 1000 + b*100

elif a!=b and b!=c:
    money = max(a, b, c) * 100

print(money)
