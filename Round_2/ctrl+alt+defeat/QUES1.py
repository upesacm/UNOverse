def freq(l):
    d={}
    for i in l:
        d[i]=d.get(i,0)+1
    return d
def anagram(d1,d2):
    if len(d1)!=len(d2):
        return False
    for i in d1:
        if d1.get(i,0)!=d2.get(i):
         return False
    return True

s1=input("String1:")
s2=input("String2: ")
d1=freq(list(s1))
d2=freq(list(s2))
print(anagram(d1,d2))
