#Kattis: QALY
"""
qual between 0 and 1 (perfect)
multiply per year and add
"""
N = int(input())
qaly = 0.0
for i in range(N):
     line = input().split(' ')
     qaly += float(line[0]) * float(line[1])
print(qaly)
     
