S=list(input())
sum0=0
sum1=0
i=0
while i < len(S):
    if S[i]=='0':
        while S[i]=='0':
            i+=1
            if i>=len(S):
                break
        sum0+=1
    else:
        while S[i]=='1':
            i+=1
            if i>=len(S):
                break
        sum1+=1
   
if sum0>sum1:
    print(sum1)
else:
    print(sum0)
