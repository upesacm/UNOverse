s1 = input("Str1: ")
s2 = input("Str2: ")

d1 = dict()
d2 = dict()
for i in s1:
    if not i.isalpha():
        continue
    if i in d1:
        d1[i]+=1
    else:
        d1[i] = 1

for i in s2:
    if not i.isalpha():
        continue
    if i in d2:
        d2[i]+=1
    else:
        d2[i] = 1
if d1==d2:
    print(True)
else:
    print(False)
