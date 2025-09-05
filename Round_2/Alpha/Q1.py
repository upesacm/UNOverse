def anagram(string1, string2):
    arr1 = []
    arr2 = []
    for i in string1:
        arr1.append(i)
    for j in string2:
        arr2.append(j)
    arr1 = sorted(arr1)
    arr2 = sorted(arr2)
    if (arr1 == arr2):
        return "It is an anagram"
    else:
        return "It is NOT an anagram"

def main():
    string1 = input()
    string2 = input()

    result = anagram(string1, string2)
    print(result)

if __name__ == "__main__":
    main()
