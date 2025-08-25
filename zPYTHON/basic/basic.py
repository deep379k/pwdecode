n=input()
ans=""
left,right=0,len(n)-1
if n[left]!=n[right]:
    ans+=n[:right+1]
print(ans)