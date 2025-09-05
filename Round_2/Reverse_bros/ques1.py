string1 = input("enter the first string : ").lower()
string2 = input("enter the second string : ").lower()

string2_list = list(string2)

temp = True

for i in string1 :
    if i in string2_list :
        pass
    else:
        temp = False

print (temp)
