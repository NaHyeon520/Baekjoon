N,M=input().split()
N=int(N)
M=int(M)
S=[]
test=[]
for i in range(N):
    s=input()
    S.append(s)

for i in range(M):
    s=input()
    test.append(s)
count=0
for i in range(M):
    if test[i] in S:
       count+=1
print(count)
