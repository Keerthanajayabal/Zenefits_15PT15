

s=[]
n=input("")
for i in range(n):
    t=raw_input("")
    s.append(t)
st=raw_input("")
l=len(s)
j,k,l=0,1,2
temp=[]
res=[]
for j in range(l):
    for k in range(l):
        for l in range(l):
           temp.append(s[j])
           temp.append(s[k])
           temp.append(s[l])
           k=k+1
           l=l+1
res.append(temp)
for i in range(len(res)):
    if st in res[i]:
        print(i)
    else:
        i=i+1
        print("Not")
print(res)
print(s)
