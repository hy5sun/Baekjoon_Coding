import sys
input = sys.stdin.readline
#여러개 입력받는 경우에는 input이 아니라 sys.stdin.readline을 사용한다.

t = int(input())

for _ in range(t):
    n = int(input())
    total = []
    
    for _ in range(n):
        g, m = map(int, input().split()) #int형으로 입력받아야 한다.
        total.append([g, m])

    total.sort()
        
    cnt = 1
    std = total[0][1]

    for i in range(1, n):
        if total[i][1] < std:
            cnt += 1
            std = total[i][1]
    print(cnt)
