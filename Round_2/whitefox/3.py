def merge_sort(arr):
    arr.sort() # Inbuilt python list sorting uses Tim sort which is a derived version of merge sort
arr = input("Enter array elements with space: ").split()
for i in range(len(arr)):
    arr[i] = int(arr[i])
print(f"Given array: {arr}")
merge_sort(arr)
print(f"Sorted array: {arr}")
