N,S,R=input().split()
N=int(N)
S=int(S)
R=int(R)

damaged=(input().split())
damaged=list(map(int, damaged))

onemore=input().split()
onemore=list(map(int, onemore))

count=S
for i in range(S):
    for j in range(R):
        if (damaged[i]==onemore[j]) or abs(damaged[i]-onemore[j])==1:
            count-=1
            del onemore[j]
            R-=1
            break

print(count)
