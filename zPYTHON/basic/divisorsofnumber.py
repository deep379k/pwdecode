n=int(input())
ans=[]
i=1
while(i<=n):
    
    if n%i==0:
        ans.append(i)
    i+=1
print("Divisors of", n, "are:", ans)