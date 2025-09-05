s1=input("enter 1")
s2=input("enter 2")
l1=[]
l2=[]
for i in s1:
    l1.append(i)
for j in s2:
    l2.append(j)
e=len(s2)
count=0
for s in l1:
    if (s in l2):
        count=count+1
if count==e:
    print("matched")
else:
    print("not matched")