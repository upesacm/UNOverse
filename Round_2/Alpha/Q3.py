def odd_even(num):
    dic = {True : "Even", False : "Odd"}
    result = dic[not(bool(num%2))]
    return result
def main():

    num = int(input())
    result = odd_even(num)
    print(result)

if __name__ == "__main__":
    main()
