n = int(input("Total Elements: "))
arr = []
arr_list = input("Enter value in one line Space seperated: ")
arr_list_splited = arr_list.split()
for a in arr_list_splited:
    arr.append(int(a))

#printing arr list before Bubble Soring
for a in arr:
    print(a, end=" ")

#bubble sorting
for i in range(n-1):
    for j in range(n-1):
        if arr[j] > arr[j+1]:
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp
    for a in arr:
        print(a, end=" ")
    print()

#printing list after sorting
print()
for a in arr:
    print(a, end=" ")