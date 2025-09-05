def even(n):
    return (n&1)==0
n=int(input("An integer: "))
l=["Odd","Even"]
print(l[even(n)])
