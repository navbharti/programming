# Data Structure Through Python

## Session-1 Algorithm, Complexity Analysis

## Session-2 Searching Algorithms

### 1. Linear Search Algorithm

#### Linear Search - Traditional Method

```python
def linearSearch(arr, key):
    count = 0
    i = 0
    while i< len(arr):
        count += 1
        if arr[i] == key:
            return i, count
        i = i + 1
    return None, count

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = linearSearch(a, key)
    if ans[0] != None:
        print(f"{key} is found at index: {ans[0]} with iterations {ans[1]}")
    else:
        print(f"{key} is not found with iterations {ans[1]}")

```

#### Linear Search Optimized Method

```python

def linearSearchOptimized(arr, key):
    count = 0
    i = 0
    j = len(arr) - 1 
    while i<=j:
        count += 1
        if arr[i] == key:
            return i, count
        elif arr[j] == key:
            return j, count
        i = i + 1
        j = j - 1
    return None, count

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = linearSearchOptimized(a, key)
    if ans[0] != None:
        print(f"{key} is found at index: {ans[0]} with iterations {ans[1]}")
    else:
        print(f"{key} is not found with iterations {ans[1]}")

```

### Linear Search using OOPS concept

```python

class Searching:
    def __init__(self, arr=[]):
        self.__arr = arr
        

    def linearSearchOptimized(self, key):
        count = 0
        i = 0
        j = len(self.__arr) - 1 
        while i<=j:
            count += 1
            if self.__arr[i] == key:
                return i, count
            elif self.__arr[j] == key:
                return j, count
            i = i + 1
            j = j - 1
        return None, count

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    obj = Searching(a)
    ans = obj.linearSearchOptimized(key)
    if ans[0] != None:
        print(f"{key} is found at index: {ans[0]} with iterations {ans[1]}")
    else:
        print(f"{key} is not found with iterations {ans[1]}")

```
#### Linear Search - Recursive

```python
def linearSearch(arr, n, key):
    if n < 0:
        return None
    if arr[n] == key:
        return n
    n = n - 1
    return linearSearch(arr, n, key)

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = linearSearch(a, len(a)-1, key)
    if ans != None:
        print(f"{key} is found at index: {ans}")
    else:
        print(f"{key} is not found")

```


### 2. Binary Search Algorithm

#### Traditional Method

```python
def binarySearch(arr, key):
    left, right = 0, len(arr) - 1
    mid_index = 0
    while left <= right:
        mid_index = (left + right) // 2
        if arr[mid_index] == key:
            return mid_index
        elif key < arr[mid_index]:
            right = mid_index - 1
        elif key > arr[mid_index]:
            left = mid_index + 1
    return None
        

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = binarySearch(a, key)
    if ans != None:
        print(f"{key} is found at index: {ans}")
    else:
        print(f"{key} is not found")

```

#### Finding the First occurrence index of key value

```python
def binarySearchLeftmost(arr, key):
    left, right = 0, len(arr) - 1
    mid_index = 0
    while left <= right:
        mid_index = (left + right) // 2
        if arr[mid_index] == key:
            #return mid_index
            break
        elif key < arr[mid_index]:
            right = mid_index - 1
        elif key > arr[mid_index]:
            left = mid_index + 1

    #logit to trace left most key
    j = mid_index - 1
    while j >= 0:
        if arr[j] < key:
            return j + 1
        j = j - 1
        
    return None
        

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = binarySearchLeftmost(a, key)
    if ans != None:
        print(f"{key} is found at index: {ans}")
    else:
        print(f"{key} is not found")


```

#### Finding Right most key index

```python
def binarySearchRightmost(arr, key):
    left, right = 0, len(arr) - 1
    mid_index = 0
    while left <= right:
        mid_index = (left + right) // 2
        if arr[mid_index] == key:
            #return mid_index
            break
        elif key < arr[mid_index]:
            right = mid_index - 1
        elif key > arr[mid_index]:
            left = mid_index + 1

    #logit to trace right most key
    j = mid_index + 1
    while j <= len(arr)-1:
        if arr[j] > key:
            return j - 1
        j = j + 1
        
    return None
        

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = binarySearchRightmost(a, key)
    if ans != None:
        print(f"{key} is found at index: {ans}")
    else:
        print(f"{key} is not found")

```

#### Finding total Occurrences if key

```python

def binarySearchOccurrences(arr, key):
    left, right = 0, len(arr) - 1
    mid_index = 0
    while left <= right:
        mid_index = (left + right) // 2
        if arr[mid_index] == key:
            #return mid_index
            break
        elif key < arr[mid_index]:
            right = mid_index - 1
        elif key > arr[mid_index]:
            left = mid_index + 1

    #logic to trace right most key
    rightmost = mid_index + 1
    while rightmost <= len(arr)-1:
        if arr[rightmost] != key:
            rightmost = rightmost - 1
            break
        rightmost = rightmost + 1

    #logic to trace left most key
    leftmost = mid_index - 1
    while leftmost >= 0:
        if arr[leftmost] != key:
            leftmost = leftmost + 1
            break
        leftmost = leftmost - 1
    print(f"rightmost: {rightmost} and leftmost: {leftmost}")
    return rightmost - leftmost + 1
        

#test code
if __name__=="__main__":
    a = list(map(int, input("Enter space seperated values: ").split()))
    key = int(input("Enter the search key: "))
    ans = binarySearchOccurrences(a, key)
    if ans != 0:
        print(f"{key} occurs : {ans} many times!!!")
    else:
        print(f"{key} is not found")

```

#### Finding Square Root using Binary Search Algorithm

```python
def BinarySearchSquareRoot(n):
    left = 1
    right = n
    mid = 0
    while left < right:
        #calculate mid
        mid = (left + right) // 2
        if mid * mid == n:
            return mid
        elif mid * mid > n:
            right = mid - 1
        elif mid * mid < n:
            left = mid + 1
    return left
    
if __name__ == '__main__':
    a = int(input("Enter a number: "))
    ans = BinarySearchSquareRoot(a)
    print(f"Square root of {a} is {ans}")
```

## Sorting Algorithms:

### Bubble Sort Algorithm Basics

```python
def bubbleSort(arr):
    n = len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                #swap the elements
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                #arr[j], arr[j+1] = arr[j+1], arr[j]
        print(f"Phase: {i+1} : {arr}")

#test code
if __name__=="__main__":
    #a = list(map(int, input("Enter space seperated values: ").split()))
    a = [5, 8, 90, 10, 2, 4]
    print("Data before sorting: ")
    print(a)
    bubbleSort(a)
    print("Data after sorting: ")
    print(a)

```

`Input and Output`

```console
Data before sorting: 
[5, 8, 90, 10, 2, 4]
Phase: 1 : [5, 8, 10, 2, 4, 90]
Phase: 2 : [5, 8, 2, 4, 10, 90]
Phase: 3 : [5, 2, 4, 8, 10, 90]
Phase: 4 : [2, 4, 5, 8, 10, 90]
Phase: 5 : [2, 4, 5, 8, 10, 90]
Data after sorting: 
[2, 4, 5, 8, 10, 90]
```

#### Bubble Sort Optimized Algoirthm
#### How to check elements are already sorted?

```python
def bubbleSort(arr):
    n = len(arr)
    flag = False
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                #swap the elements
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                flag = True
                #arr[j], arr[j+1] = arr[j+1], arr[j]
        if flag == False:
            #break
            return
        print(f"Phase: {i+1} : {arr}")

#test code
if __name__=="__main__":
    #a = list(map(int, input("Enter space seperated values: ").split()))
    a = [5, 8, 90, 10, 2, 4]
    print("Data before sorting: ")
    print(a)
    bubbleSort(a)
    print("Data after sorting: ")
    print(a)


```

#### Bubble Sort Optimized Algorithm

```python
def bubbleSortOptimized(arr):
    left = 0
    right = len(arr)-1
    phase=0
    while left <= right:
        phase = phase + 1
        for i in range(right):
            if arr[i] > arr[i+1]:
                #swap the elements
                temp = arr[i]
                arr[i] = arr[i+1]
                arr[i+1] = temp
                #flag = True
                #arr[i], arr[i+1] = arr[i+1], arr[i]
        right = right - 1
        for j in range(right-1, left, -1):
            if arr[j] > arr[j+1]:
                #swap the elements
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                #flag = True
                #arr[j], arr[j+1] = arr[j+1], arr[j]
        left = left + 1
        #if flag == False:
        #    #break
        #    return
        print(f"Phase: {phase} : {arr}")
        phase = phase + 1

#test code
if __name__=="__main__":
    #a = list(map(int, input("Enter space seperated values: ").split()))
    a = [5, 8, 90, 10, 2, 4]
    print("Data before sorting: ")
    print(a)
    bubbleSortOptimized(a)
    print("Data after sorting: ")
    print(a)

```

#### Selection Sort Algorithm Basic

```python
def SelectionSort(arr):
    n = len(arr)-1
    for i in range(n):
        #assumed min_val and min_index
        min_val = arr[i]
        min_index = i
        #find actual min_val
        for j in range(i+1, n+1):
            if min_val > arr[j]:
                min_val = arr[j]
                min_index = j
            
        #temp = arr[i]
        #arr[i] = arr[min_index]
        #arr[min_index] = temp
        arr[i], arr[min_index] = arr[min_index], arr[i]
        print(f"Phase-{i+1} : {arr}")
        
if __name__ == '__main__':
    a = list(map(int, input("Enter space seperated Integers: ").split()))
    print("Element Before Sorting: ")
    print(a)
    SelectionSort(a)
    print("Element After Sorting: ")
    print(a)
```

`Input and Ouput:`

```console
Input: 12 9 -56 -34 100 5 2 8 10 9

Enter space seperated Integers: Element Before Sorting: 
[12, 9, -56, -34, 100, 5, 2, 8, 10, 9]
Phase-1 : [-56, 9, 12, -34, 100, 5, 2, 8, 10, 9]
Phase-2 : [-56, -34, 12, 9, 100, 5, 2, 8, 10, 9]
Phase-3 : [-56, -34, 2, 9, 100, 5, 12, 8, 10, 9]
Phase-4 : [-56, -34, 2, 5, 100, 9, 12, 8, 10, 9]
Phase-5 : [-56, -34, 2, 5, 8, 9, 12, 100, 10, 9]
Phase-6 : [-56, -34, 2, 5, 8, 9, 12, 100, 10, 9]
Phase-7 : [-56, -34, 2, 5, 8, 9, 9, 100, 10, 12]
Phase-8 : [-56, -34, 2, 5, 8, 9, 9, 10, 100, 12]
Phase-9 : [-56, -34, 2, 5, 8, 9, 9, 10, 12, 100]
Element After Sorting: 
[-56, -34, 2, 5, 8, 9, 9, 10, 12, 100]
```

#### Selection Sort Optimized 
```python
def selectionSrotOptimized(arr):
    i = 0
    j = len(arr) - 1
    phase_count = 0
    while i < j:
        phase_count += 1
        min_val = arr[i]
        min_index = i
        
        max_val = arr[i]
        max_index = j
        
        for idx in range(i+1, j+1):
            if arr[idx] < min_val:
                min_val = arr[idx]
                min_index = idx
                
            elif arr[idx] > max_val:
                max_val = arr[idx]
                max_index = idx
        arr[i], arr[min_index] = arr[min_index], arr[i]
        
        if arr[min_index] == max_val:
            arr[min_index], arr[j] = arr[j], arr[min_index]
        else:
            arr[max_index], arr[j] = arr[j], arr[max_index]
            
        i += 1
        j -= 1
        print(f"min_val: {min_val} and max_val: {max_val}")
        print(f"Phase-{phase_count} : {arr}")
        
        
if __name__ == '__main__':
    a = [5, 3, 4, 1]
    selectionSrotOptimized(a)
    print(a)


```
`Input and Output:`
```console
Phase-1 : [2, 8, 4, 10, 5, 90]
Phase-2 : [2, 4, 8, 5, 10, 90]
Phase-3 : [2, 4, 5, 8, 10, 90]
[2, 4, 5, 8, 10, 90]
```
#### Insertion Sort Algorithm - Basic

```python
def insertionSort(arr):
    count = 0
    for i in range(1, len(arr)):

        key = arr[i]

    
        j = i - 1
        #shifting right side 
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
            count = count + 1
            
        #swapping
        arr[j + 1] = key
        print(f"Phase-{i} : {arr} selected key: {key}")
    print(f"Total shifts of elements {count}")


# Test Code
if __name__ == "__main__":

    #a = list(map(int, input("Enter Integers with space seperated: ").split()))
    #a = [5, 8, 90, 10, 2, 4]
    a = [12, 9, -56, -34, 100, 5, 2, 8, 10, 9]
    print("Integers before sorting: ", a)
    insertionSort(a) 
    print("Integers after sorting: ", a)


```
`Input and Output:`

```console
Integers before sorting:  [12, 9, -56, -34, 100, 5, 2, 8, 10, 9]
Phase-1 : [9, 12, -56, -34, 100, 5, 2, 8, 10, 9] selected key: 9
Phase-2 : [-56, 9, 12, -34, 100, 5, 2, 8, 10, 9] selected key: -56
Phase-3 : [-56, -34, 9, 12, 100, 5, 2, 8, 10, 9] selected key: -34
Phase-4 : [-56, -34, 9, 12, 100, 5, 2, 8, 10, 9] selected key: 100
Phase-5 : [-56, -34, 5, 9, 12, 100, 2, 8, 10, 9] selected key: 5
Phase-6 : [-56, -34, 2, 5, 9, 12, 100, 8, 10, 9] selected key: 2
Phase-7 : [-56, -34, 2, 5, 8, 9, 12, 100, 10, 9] selected key: 8
Phase-8 : [-56, -34, 2, 5, 8, 9, 10, 12, 100, 9] selected key: 10
Phase-9 : [-56, -34, 2, 5, 8, 9, 9, 10, 12, 100] selected key: 9
Total shifts of elements 20
Integers after sorting:  [-56, -34, 2, 5, 8, 9, 9, 10, 12, 100]
```

#### Quick Sort Algorithm

```python
def partition(arr, left, right):
   pivot = arr[right]
   i = left
   j = right - 1

   while True:
      while arr[i] < pivot:
         i += 1            

      while j > 0 and arr[j] > pivot:
         j -= 1

      if i >= j:
         break
      else:                
         #swap ith,rightPointer
         arr[i],arr[j] = arr[j], arr[i]


   arr[i], arr[right] = arr[right], arr[i]
   print(arr)
   return i
	
def quickSort(arr, left, right):
    if left < right:
        p = partition(arr, left, right)
        quickSort(arr, left, p-1)
        quickSort(arr, p+1, right)
        
if __name__ == '__main__':
    a = [10, 7, 8, 9, 1, 5]
    quickSort(a, 0, 5)
    print(a)
        
```

#### Merge Sort Algorithm 
```python
def merge_sort(unsorted_list):
   if len(unsorted_list) <= 1:
      return unsorted_list
# Find the middle point and devide it
   middle = len(unsorted_list) // 2
   left_list = unsorted_list[:middle]
   right_list = unsorted_list[middle:]

   left_list = merge_sort(left_list)
   right_list = merge_sort(right_list)
   return list(merge(left_list, right_list))

# Merge the sorted halves
def merge(left_half,right_half):
   res = []
   while len(left_half) != 0 and len(right_half) != 0:
      if left_half[0] < right_half[0]:
         res.append(left_half[0])
         left_half.remove(left_half[0])
      else:
         res.append(right_half[0])
         right_half.remove(right_half[0])
   if len(left_half) == 0:
      res = res + right_half
   else:
      res = res + left_half
   return res

if __name__=="__main__":
    #unsorted_list = list(map(int,input().split()))
    unsorted_list = [12, 9, -56, -34, 100, 5, 2, 8, 10, 9]
    print("Data before sorting: ")
    print(unsorted_list)
    print("Data after sorting: ")
    print(merge_sort(unsorted_list))
```

`Input and Output: `
```console
Data before sorting: 
[12, 9, -56, -34, 100, 5, 2, 8, 10, 9]
Data after sorting: 
[-56, -34, 2, 5, 8, 9, 9, 10, 12, 100]
```



### Practice Problems:

Assignment on Binary Search: [Assignment on Binary Search](https://jovian.ai/aakashns/python-binary-search-assignment)
Binary Search Problems on LeetCode: [Binary Search Problems on LeetCode](https://leetcode.com/problems/binary-search/)
Binary Search Problems on GeeksForGeeks: [Binary Search Problems on GeeksForGeeks](https://www.geeksforgeeks.org/binary-search/)
Binary Search Problems on Codeforces: [Binary Search Problems on Codeforces](https://codeforces.com/problemset?tags=binary+search)

[Two Sum](https://techiedelight.com/practice/?problem=TwoSum#)
```python
'''
Given an unsorted integer array, find a pair with the given sum in it.

• Each input can have multiple solutions. The output should match with either one of them.

Input : nums[] = [8, 7, 2, 5, 3, 1], target = 10
Output: (8, 2) or (7, 3)

• The solution can return pair in any order. If no pair with the given sum exists, the solution should return an empty tuple.

Input : nums[] = [5, 2, 6, 8, 1, 9], target = 12
Output: ()

'''

class Solution:
	def findPair(self, nums: List[int], target: int) -> Tuple[int]:
		# Write your code here...
		return
```
[Sort Binary Array](https://techiedelight.com/practice/?problem=SortBinaryArray)

```python
'''
Given a binary array, in-place sort it in linear time and constant space. The output should contain all zeroes, followed by all ones.

Input : [1, 0, 1, 0, 1, 0, 0, 1]
Output: [0, 0, 0, 0, 1, 1, 1, 1]

Input : [1, 1]
Output: [1, 1]

'''

class Solution:
	def sortArray(self, nums: List[int]) -> None:
		# Write your code here...
		return


```


