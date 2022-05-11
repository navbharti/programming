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