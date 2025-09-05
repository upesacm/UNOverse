def anagram_check(str1, str2):
    check = True
    if len(str1) != len(str2):
        return False
    l1 = list(set(str1))
    l2 = list(set(str2))
    d1 = {}
    d2 = {}
    for i in range(len(l1)):
        d1[l1[i]] = str1.count(l1[i]) 
    for j in range(len(l2)):
        d2[l2[j]] = str2.count(l2[j]) 
    for i in d1:
        if i not in d2.keys():
            check = False
            break
        if d1[i] != d2[i]:
            check = False
            break
    return check



str1 = input("String1: ").lower().replace(" ", "")
str2 = input("String2: ").lower().replace(" ", "")

if anagram_check(str1, str2):
    print('true')
else:
    print('false')
