#10872번 팩토리얼을 출력하자~!

n = int(input())
ans = 1

for i in range(1, n+1):
    ans *= i
    i += 1

print(ans)
