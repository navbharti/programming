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

# Linear Data Structure
## Stack Data Structure

### Stack Implementation Basic

```python
# Stack implementation in python
# Creating a stack
def create_stack():
    stack = []
    return stack

# Creating an empty stack
def check_empty(stack):
    if len(stack)==0:
        return True
    else:
        return False

# Adding items into the stack
def push(stack, item):
    stack.append(item)
    print("pushed item: " + item)

# Removing an element from the stack
def pop(stack):
    if (check_empty(stack) == True):
        return "stack is empty"
    temp = stack.pop()
    return temp

#Driver Code
if __name__=="__main__":
    stack = create_stack()
    push(stack, str(1))
    push(stack, str(2))
    push(stack, str(3))
    push(stack, str(4))
    print("popped item: " + pop(stack))
    print("stack after popping an element: " + str(stack))

```
# Linear Data Structure
## Stack Data Structure

### Stack Implementation Basic
```python
class Stack:
    #constructor 
    def __init__(self, capacity):
        self.__capacity = capacity
        self.__data = [None] * capacity
        self.__top = None
        self.__size = 0
        print(f"Stack is created with capacity: {self.__capacity}!!!")

    #push operation  
    def push(self, data):
        #check for stack overflow case
        if self.isOverflow() == True:
            print("Stack Overflow!!!")
            print(f"{data} is not pushed!!!")
            return
        #check for underflow case
        elif self.isUnderflow() == True:
            self.__top = 0
            self.__data[self.__top] = data
            print(f"{data} is pushed!!!")
        #this is general case 
        else:
            self.__top += 1
            self.__data[self.__top] = data
            print(f"{data} is pushed!!!")

    #pop operation
    def pop(self):
        #check for underflow case
        if self.isUnderflow() == True:
            print("Stack Underflow!!!")
            print("No Data popped!!!")
            return None
        #check when only one element
        elif self.size() == 1:
            temp = self.__data[self.__top]
            self.__top = None
            print(f"{temp} is popped!!!")
            return temp
        #this is the general case
        else:
            temp = self.__data[self.__top]
            self.__top -= 1
            print(f"{temp} is popped!!!")
            return temp

    #method to check underflow cased
    def isUnderflow(self):
        if self.__top is None:
            return True
        else:
            return False
            
    #method to check overflow case
    def isOverflow(self):
        if self.__capacity -1 == self.__top:
            return True
        else:
            return False
        
    #method to display complete stack
    def display(self):
        print(f"Stack: {self.__data[0:self.__top+1]}")

    #method to return total number of elements in the stack
    def size(self):
        return self.__size

    #method to see the top element
    def peek(self):
        #check for underflow case
        if self.isUnderflow() == True:
            print("Stack Underflow!!!")
            print("No element to see")
            return None
        else:
            return self.__data[self.__top]

    #method to return total capacity of the stack
    def capacity(self):
        return self.__capacity
    

#test code
#create a new stack object
s1 = Stack(5)
print("How many elements?",s1.size())
print(f"stack s1 has capacity: {s1.capacity()}")
print(f"isUnderflow(): {s1.isUnderflow()}")
print(f"isOverflow(): {s1.isOverflow()}")
s1.push(12)
s1.display()
s1.push(100)
s1.push(105)
s1.push(120)
s1.push(130)
s1.display()
s1.pop()
s1.push(111)
s1.display()

```

#### Reverse the string using Stack Data Structure

```python
class Stack:
    
    def __init__(self, capacity):
        self.__capacity = capacity
        self.__data = [None] * capacity
        self.__top = None
        self.__size = 0
        #print(f"Stack is created with capacity: {self.__capacity}!!!")
        
    def push(self, data):
        #check for stack overflow case
        if self.isOverflow() == True:
            #print("Stack Overflow!!!")
            #print(f"{data} is not pushed!!!")
            return
        elif self.isUnderflow() == True:
            self.__top = 0
            self.__data[self.__top] = data
            #print(f"{data} is pushed!!!")
        else:
            self.__top += 1
            self.__data[self.__top] = data
            #print(f"{data} is pushed!!!")

    def pop(self):
        if self.isUnderflow() == True:
            #print("Stack Underflow!!!")
            #print("No Data popped!!!")
            return None
        elif self.size() == 1:
            temp = self.__data[self.__top]
            self.__top = None
            #print(f"{temp} is popped!!!")
            return temp
        else:
            temp = self.__data[self.__top]
            self.__top -= 1
            #print(f"{temp} is popped!!!")
            return temp

    def isUnderflow(self):
        if self.__top is None:
            return True
        else:
            return False
            

    def isOverflow(self):
        if self.__capacity -1 == self.__top:
            return True
        else:
            return False
        
    def display(self):
        #print(f"Stack: {self.__data[0:self.__top+1]}")
        #check for underflow case
        if self.isUnderflow() == True:
            print( "")
        s = ""
        for ch in self.__data:
            s += ch
        print(s)
    
    def size(self):
        return self.__size

    def peek(self):
        return self.__data[self.__top]

    def capacity(self):
        return self.__capacity
    
#test code
#create a new stack object
string = input("Enter the string: ")
n = len(string)
s1 = Stack(n)
for ch in string:
    s1.push(ch)

s1.display()
s = ""
for i in range(n):
    s += str(s1.pop())

print(s)

```

#### Queue Data Structure

### Simple Queue 
```python
class Queue:
    def __init__(self, capacity):
        self.__capacity = capacity
        self.__data = [None] * self.__capacity
        self.__front = None
        self.__rear = None
        self.__size = 0
        print(f"New Queue is created with capacity: {self.__capacity}")

    def enqueue(self, new_data):
        #1. check for full case
        if self.isFull() == True:
            print("Queue is already full!!")
            return
        #2. check for empty case
        elif self.isEmpty() == True:
            self.__front = 0
            self.__rear = 0
            self.__data[self.__rear] = new_data
            self.__size += 1
        #3. general case
        else:
            self.__rear += 1
            self.__data[self.__rear] = new_data
            self.__size += 1
        print(f"{new_data} is added in the Queue rear")
    def dequeue(self):
        #1. check for empty case
        if self.isEmpty() == True:
            print("Queue is already!!!")
            return
        #2. check for only one element
        elif self.size() == 1:
            temp = self.__data[self.__front]
            self.__front = None
            self.__rear = None
            self.__size -= 1
            print(f"{temp} is deleted from front")

        #3. general case
        else:
            temp = self.__data[self.__front]
            self.__front += 1
            self.__size -= 1
            print(f"{temp} is deleted from front")
            
    def isFull(self):
        if self.__rear == self.__capacity - 1:
            return True
        else:
            return False

    def isEmpty(self):
        if self.__front == None and self.__rear == None:
            return True
        else:
            return False

    def size(self):
        return self.__size

    def front(self):
        #1. check for empty case
        if self.isEmpty() == True:
            print("Queue is Empty!!!")
            return None
        else:
            return self.__data[self.__front]

    def rear(self):
        #1. check for empty case
        if self.isEmpty() == True:
            print("Queue is Empty!!!")
            return
        else:
            return self.__data[self.__rear]

    def capacity(self):
        return self.__capacity

    def display(self):
        #1. check for empty case
        if self.isEmpty() == True:
            print("Queue is Empty!!!")
            return
        else:
            print(f"Queue: {self.__data[self.__front : self.__rear+1]}")
    
#test code
if __name__=="__main__":
    #create queue object with 5 capacity
    queue = Queue(5)
    print(f"is queue empty: {queue.isEmpty()}")
    queue.enqueue(12)
    queue.enqueue(100)
    queue.enqueue(12)
    queue.enqueue(130)
    queue.enqueue(120)
    queue.enqueue(10)
    ans = queue.dequeue()
    print(f"Front: {queue.front()}")
    print(f"Rear: {queue.rear()}")
    print(f"Capacity: {queue.capacity()}")
    queue.display()
    queue.dequeue()
    queue.display()


```

#### Circular Queue Implementation
```python
class CircularQueue:
    def __init__(self, capacity):
        self.__capacity = capacity
        self.__data = [None] * self.__capacity
        self.__size = 0
        self.__front = None
        self.__rear = None

    def enqueue(self, data):
        if self.isEmpty():
            self.__front = self.__rear = 0
            self.__data[self.__rear] = data
            self.__size += 1
            print(f"{data} is Added to the Rear!!!")
        elif self.isFull() or self.__rear + 1 % self.capacity() == self.__front:
            print("Circular Queue is Full!!!")
            print(f"{data} is not Added!!!")
            return
        else:
            self.__rear = (self.__rear + 1) % self.capacity()
            self.__data[self.__rear] = data
            self.__size += 1
            print(f"{data} is Added to the Rear!!!")

    def dequeue(self):
        if self.isEmpty():
            print("Circular Queue is Empty!!!")
            print("No Data to Delete!!!")
            return
        elif self.size() == 1 and self.__front == self.__rear:
            temp = self.__data[self.__rear]
            self.__rear = self.__front = None
            self.__size -= 1
            print(f"{temp} is deleted from front!!!")
        else:
            temp = self.__data[self.__rear]
            self.__front += 1
            self.__size -= 1
            print(f"{temp} is deleted from front!!!")

    def isFull(self):
        if self.size() == self.capacity():
            return True
        else:
            return False

    def isEmpty(self):
        if self.__front is None and self.__rear is None:
            return True
        else:
            return False

    def size(self):
        return self.__size

    def capacity(self):
        return self.__capacity

    def show(self):
        if self.isEmpty():
            print("Circulra Queue is Empty!!!")
            print("No Data to Show!!!")
        elif self.__rear >= self.__front:
            for i in range(self.__front, self.__rear + 1):
                print(self.__data[i], end=" ")
            print()
        else:
            for i in range(self.__front, self.capacity()):
                print(self.__data[i], end=" ")
            for i in range(0, self.__rear + 1):
                print(self.__data[i], end=" ")
            print()

    def front(self):
        if self.isEmpty():
            print("Circular Queue is Empty!!!")
            print("No Data to Show!!!")
            return
        else:
            return self.__data[self.__front]

    def rear(self):
        if self.isEmpty():
            print("Circular Queue is Empty!!!")
            print("No Data to Show!!!")
            return
        else:
            return self.__data[self.__rear]

#test code
if __name__ == '__main__':
    circularQueue = CircularQueue(5)
    print(f"Capacity: {circularQueue.capacity()}")
    print(f"Size : {circularQueue.size()}")
    print(f"is Empty: {circularQueue.isEmpty()}")
    print(f"is Full: {circularQueue.isFull()}")
    circularQueue.enqueue(12)
    circularQueue.enqueue(13)
    circularQueue.enqueue(14)
    circularQueue.enqueue(15)
    circularQueue.enqueue(12)
    circularQueue.enqueue(12)
    circularQueue.dequeue()
    circularQueue.enqueue(120)
    circularQueue.show()

```

## Linked List 

### 1. Singly Linked List
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#class for Singly Linked List
class SinglyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("new singly linked list is created!!!")

    

#test code
if __name__=="__main__":
    node1 = Node(15)
    node2 = Node(30)
    node1.next = node2
    print(node1.data)
    print(node2.data)
    print(node1.next.data)

```
### Operations in Singley Linked List
1. Insert a new Node 
1.1 Insert a new Node At Beginning
1.2 Insert a new Node At the End
1.3 Insert a new Node At Given Position
1.4 Insert a new Node after a given Data Value

2. Delete an existing Node
2.1 Delete an existing node from Beginning
2.2 Delete an existing node from End
2.3 Delete  an existing node of a given position
2.4 Delete an existing node of a given Data Value 

3. Update an existing Node data part
3.1 Update data part of the node at beginning
3.2 Update data part of the node at the end
3.3 Update data part of the node of a given position
3.4 Update data part of the node of a given data part

4. Traverse or Display

5. Traverse or Display in Reverse Order

6. Merging Two Singly Linked Lists

7. Polynomial Implementation using SLL

#### Insert At Beginning
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#class for Singly Linked List
class SinglyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("new singly linked list is created!!!")

    #method to insert a node at beginning
    def insertAtBegin(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 list is not empty
        else:
            #create a new node
            newNode = Node(data)
            #then update link
            newNode.next = self.__head
            self.__head = newNode
            print(f"{data} is inserted at begin!!!")

        

#test code
if __name__=="__main__":
    node1 = Node(15)
    sll = SinglyLinkedList(node1)
    sll.insertAtBegin(100)

```

#### Insert At End

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#class for Singly Linked List
class SinglyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("new singly linked list is created!!!")

    #method to insert a node at beginning
    def insertAtBegin(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 list is not empty
        else:
            #create a new node
            newNode = Node(data)
            #then update link
            newNode.next = self.__head
            self.__head = newNode
            print(f"{data} is inserted at begin!!!")

    def insertAtEnd(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 else case
        else:
            #create temp node to traverse to last node
            temp = self.__head
            #iterate till last node
            while temp.next is not None:
                temp = temp.next
            newNode = Node(data)
            temp.next = newNode
            print(f"{data} is inserted at the end!!!")

    #method to display singly linked list
    def display(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        else:
            temp = self.__head
            while temp is not None:
                print(temp.data, end=" -> ")
                temp = temp.next
#test code
if __name__=="__main__":
    node1 = Node(15)
    sll = SinglyLinkedList(node1)
    sll.insertAtBegin(100)
    sll.insertAtBegin(50)
    sll.insertAtBegin(30)
    sll.insertAtEnd(150)
    sll.display()


```

#### Insert New Node At the given position
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#class for Singly Linked List
class SinglyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("new singly linked list is created!!!")

    #method to insert a node at beginning
    def insertAtBegin(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 list is not empty
        else:
            #create a new node
            newNode = Node(data)
            #then update link
            newNode.next = self.__head
            self.__head = newNode
            print(f"{data} is inserted at begin!!!")

    def insertAtEnd(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 else case
        else:
            #create temp node to traverse to last node
            temp = self.__head
            #iterate till last node
            while temp.next is not None:
                temp = temp.next
            newNode = Node(data)
            temp.next = newNode
            print(f"{data} is inserted at the end!!!")

    #method to insert a new node at given position
    def insertAtPosition(self, data, pos):
        #case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is insert as first node!!!")
            return
        i = 0
        temp = self.__head
        while temp.next is not Node:
            i = i + 1
            if i == pos -1:
                break
            temp = temp.next
        #update the link
        newNode = Node(data)
        newNode.next = temp.next
        temp.next = newNode
        print(f"{data} is insert at {pos}")



        
    #method to display singly linked list
    def display(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        else:
            temp = self.__head
            while temp is not None:
                print(temp.data, end=" -> ")
                temp = temp.next

        
#test code
if __name__=="__main__":
    node1 = Node(15)
    sll = SinglyLinkedList(node1)
    sll.insertAtBegin(100)
    sll.insertAtBegin(50)
    sll.insertAtBegin(30)
    sll.insertAtEnd(150)
    sll.insertAtPosition(25, 4)
    sll.display()


```

#### Delete the First Node 
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#class for Singly Linked List
class SinglyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("new singly linked list is created!!!")

    #method to insert a node at beginning
    def insertAtBegin(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 list is not empty
        else:
            #create a new node
            newNode = Node(data)
            #then update link
            newNode.next = self.__head
            self.__head = newNode
            print(f"{data} is inserted at begin!!!")

    def insertAtEnd(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 else case
        else:
            #create temp node to traverse to last node
            temp = self.__head
            #iterate till last node
            while temp.next is not None:
                temp = temp.next
            newNode = Node(data)
            temp.next = newNode
            print(f"{data} is inserted at the end!!!")

    #method to insert a new node at given position
    def insertAtPosition(self, data, pos):
        #case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is insert as first node!!!")
            return
        i = 0
        temp = self.__head
        while temp.next is not Node:
            i = i + 1
            if i == pos -1:
                break
            temp = temp.next
        #update the link
        newNode = Node(data)
        newNode.next = temp.next
        temp.next = newNode
        print(f"{data} is insert at {pos}")

    #method to delete first node
    def deleteFromBegin(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        #case-2 else case
        else:
            temp = self.__head
            self.__head = self.__head.next
            temp.next = None
            print(f"\n{temp.data} is being deleted!!!")
            del temp

        
    #method to display singly linked list
    def display(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        else:
            temp = self.__head
            while temp is not None:
                print(temp.data, end=" -> ")
                temp = temp.next

        
#test code
if __name__=="__main__":
    node1 = Node(15)
    sll = SinglyLinkedList(node1)
    sll.insertAtBegin(100)
    sll.insertAtBegin(50)
    sll.insertAtBegin(30)
    sll.insertAtEnd(150)
    sll.insertAtPosition(25, 4)
    sll.display()
    sll.deleteFromBegin()
    sll.display()


```
#### Delete the Last Node
```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


#class for Singly Linked List
class SinglyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("new singly linked list is created!!!")

    #method to insert a node at beginning
    def insertAtBegin(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 list is not empty
        else:
            #create a new node
            newNode = Node(data)
            #then update link
            newNode.next = self.__head
            self.__head = newNode
            print(f"{data} is inserted at begin!!!")

    def insertAtEnd(self, data):
        #case-1 list is empty
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node!!!")
            return
        #case-2 else case
        else:
            #create temp node to traverse to last node
            temp = self.__head
            #iterate till last node
            while temp.next is not None:
                temp = temp.next
            newNode = Node(data)
            temp.next = newNode
            print(f"{data} is inserted at the end!!!")

    #method to insert a new node at given position
    def insertAtPosition(self, data, pos):
        #case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is insert as first node!!!")
            return
        i = 0
        temp = self.__head
        while temp.next is not Node:
            i = i + 1
            if i == pos -1:
                break
            temp = temp.next
        #update the link
        newNode = Node(data)
        newNode.next = temp.next
        temp.next = newNode
        print(f"{data} is insert at {pos}")

    #method to delete first node
    def deleteFromBegin(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        #case-2 else case
        else:
            temp = self.__head
            self.__head = self.__head.next
            temp.next = None
            print(f"\n{temp.data} is being deleted!!!")
            del temp

    #method to delete the last node
    def deleteFromEnd(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        #case-2 non empty case
        else:
            temp1 = temp2 = self.__head
            while temp2.next is not None:
                temp1 = temp2
                temp2 = temp2.next
            temp1.next = None
            print(f"\n{temp2.data} is being deleted!!!")
            del temp2
            
        
    #method to display singly linked list
    def display(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is Empty!!!")
            return
        else:
            temp = self.__head
            while temp is not None:
                print(temp.data, end=" -> ")
                temp = temp.next

        
#test code
if __name__=="__main__":
    node1 = Node(15)
    sll = SinglyLinkedList(node1)
    sll.insertAtBegin(100)
    sll.insertAtBegin(50)
    sll.insertAtBegin(30)
    sll.insertAtEnd(150)
    sll.insertAtPosition(25, 4)
    sll.display()
    sll.deleteFromBegin()
    sll.display()
    sll.deleteFromEnd()
    sll.display()


```

#### Delete an existing node from given position

```python
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        print(f"\nNode created with value: {data}")

    def __del__(self):
        print(f"\n{self.data} is deleted!!!")
        
#class for Singly Linked List
class SinglyLinkedList:
    #constructur
    def __init__(self, node=None):
        self.__head = node
        print("\nSingly Linked List is Created!!!")
    #method to insert
    #1. method to insert at begin
    def insertAtBegin(self, data):
        #case-1 list is empty
        if self.__head is None:
            newNode = Node(data)
            self.__head = newNode
            print(f"\n{data} is inserted as the first node!!!")
        #case-2 list is not empty
        else:
            newNode = Node(data)
            newNode.next = self.__head
            self.__head = newNode
            print(f"\n{data} is inserted at beginning!!!")

    #1. method to insert at end
    def insertAtEnd(self, data):
        pass

    #method to traverse the linked list
    def display(self):
        #case-1 empty case
        if self.__head is None:
            print("Singly Linked List is empty!!!")
            print("\nNo data to display!!!")
            return
        #case-2 non empty case
        else:
            temp = self.__head
            while temp is not None:
                print(f"{temp.data}", end=" -> ")
                temp = temp.next

    #method to delete a node at given position
    def deleteFromPosition(self, position):
        #case-1 empty case
        if self.__head is None:
            print("\nSingly Linked List is Empty!!!")
            return
        #case-2 non empty case
        else:
            temp2 = self.__head
            i = 0
            while temp2.next is not None:
                i = i + 1
                if i == position - 1:
                    break
                temp2 = temp2.next
            temp1 = temp2
            temp2 = temp2.next
            temp1.next = temp2.next
            temp2.next = None
            print(f"\n{temp2.data} is deleted!!!")
        
#test code
if __name__=="__main__":
    node = Node(12)
    node1 = Node(15)
    node2 = Node(30)
    node.next = node1
    node1.next = node2
    #print(f"node: {node.data}\nnode address: {node}\nnext: {node.next}")
    #print(f"node1: {node1.data}\nnode1 address: {node1}\nnext: {node1.next}")
    #print(f"node2: {node2.data}\nnode2 address: {node2}\nnext: {node2.next}")
    
    sll = SinglyLinkedList(node)
    sll.display()
    sll.insertAtBegin(5)
    sll.display()
    sll.deleteFromPosition(3)
    sll.display()
    node1.next = None
    del node2

```

## Doubly Linked List - Linear Data Structure
### Introductory code

```python
#class for node doubly linked list
class Node:
    #constructor
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
        print(f"new Node is created with value: {data}")

#test code
if __name__ == '__main__':
    node1 = Node(10)
    node2 = Node(20)
    node3 = Node(30)
    print(node1.prev, node1, node1.next)
    print(node2.prev, node2, node2.next)
    print(node3.prev, node3, node3.next)
    #establish the connection among these nodes
    node1.next = node2
    node2.prev = node1
    node2.next = node3
    node3.prev = node2
    print(node1.prev, node1, node1.next)
    print(node2.prev, node2, node2.next)
    print(node3.prev, node3, node3.next)
    print(node1.data, node1.next.data, node1.next.next.data)
```

### Complete Skeleton of Doubly Linked List
```python
#class for node doubly linked list
class Node:
    #constructor
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
        print(f"new Node is created with value: {data}")

#class for Doubly Linked List
class DoublyLinkedList:
    #constructor
    def __init__(self, node):
        self.__head = node
        print("new Doubly Linked List is created!!!")

    #insert operations
    #1. insert at begin method
    def insertAtBegin(self, data):
        pass

    #2. insert at end method
    def insertAtEnd(self, data):
        pass

    #3. insert at given position method
    def insertAtPosition(self, data, pos):
        pass

    #4. insert after given data value method
    def insertAfterData(self, data, keyData):
        pass

    # delete operations
    #1. delete from begin method
    def deleteFromBegin(self):
        pass

    #2. delete from end method
    def deleteFromEnd(self):
        pass

    #3. delete from given position method
    def deleteFromPosition(self, pos):
        pass

    #4. delete by given keyData
    def deleteData(self, keyData):
        pass

    #update operations
    #1. update at begin method
    def updateAtBegin(self, newData):
        pass

    #2. update at end method
    def updateAtEnd(self, newData):
        pass

    #3. update at given position
    def updateAtPosition(self, newData, pos):
        pass

    #4. update given key data
    def updateKeyData(self, newData, keyData):
        pass

    #display method
    def display(self):
        pass

    #display reverser order method
    def displayReverse(self):
        pass

    #count nodes
    def countNodes(self):
        pass


#test code
if __name__ == '__main__':
    #create new Doubly Linked List object
    node = Node(10)
    dll = DoublyLinkedList(node)
```

#### insert at begin method
```python
#insert operations
    #1. insert at begin method
    def insertAtBegin(self, data):
        #case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node")
        #case-2 non-empty case
        else:
            newNode = Node(data)
            newNode.next=self.__head
            self.__head.prev = newNode
            self.__head=newNode
            print(f"{data} is inserted as first node")
```

#### Insert at end method

```python
# method to insert new node at the end
    def insertAtEnd(self, data):
        # case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first")
        # case-2 non empty case
        else:
            newNode = Node(data)
            temp = self.__head
            while temp.next is not None:
                temp = temp.next
            newNode.prev = temp
            temp.next = newNode
            print(f"{data} is insert at the end")
```

#### Insert at given position

```python
    # insert new node at given position
    def insertAtPosition(self, data, pos):
        # case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node")
        # case-2 non-empty case
        else:
            newNode = Node(data)
            temp = self.__head
            i = 0
            while temp.next is not None:
                i += 1
                if i == pos - 1:
                    break
                temp = temp.next
            newNode.next = temp.next
            newNode.prev = temp
            temp.next.prev = newNode
            temp.next = newNode
            print(f"{data} is inserted at {pos}")

```

#### delete from Begin, End, and Position
```python
    # method to delete node from begin
    def deleteFromBegin(self):
        #case-1 empty case
        if self.__head is None:
            print("Doubly Linked List is empty")
            return
        #case-2 non-empty case
        else:
            temp = self.__head
            self.__head = self.__head.next
            temp.next.prev = None
            temp.next = None
            print(f"{temp.data} is being deleted")
            del temp

    # method to delete node from end
    def deleteFromEnd(self):
        #case-1 empty case
        if self.__head is None:
            print("\nDoubly Linked List is empty")
            return
        #case-2 non-empty case
        else:
            temp2 = self.__head
            while temp2.next is not None:
                temp2 = temp2.next
            temp1 = temp2.prev
            temp1.next = None
            temp2.prev = None
            print(f"\n{temp2.data} is being deleted")
            del temp2

    # method to delete node from given position
    def deleteFromPosition(self, pos):
        #case-1 empty case
        if self.__head is None:
            print("Doubly Linked List is empty")
            return
        #case-2 non-empty case
        else:
            i = 0
            temp2 = self.__head
            while temp2.next is not None:
                i = i + 1
                if i == pos:
                    break
                temp2 = temp2.next
            temp1 = temp2.prev
            temp1.next = temp2.next
            temp2.next.prev = temp1
            temp2.next = temp2.prev = None
            print(f"{temp2.data} is being deleted from {pos} position")
            del temp2

```
#### Complete Code sor far

```python
#### Delete from Begin, End, and from given pos
### Delete From Begin

# class for creating a node
class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
        print(f"node created with value {data}")


# class for Double Linked List
class DoublyLinkedList:
    def __init__(self, node=None):
        self.__head = node
        print("Doubly Linked List is Created!!!")

    # method to insert a new node at beginning
    def insertAtBegin(self, data):
        # case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node")
        # case-2 else case
        else:
            newNode = Node(data)
            newNode.next = self.__head
            self.__head.prev = newNode
            self.__head = newNode
            print(f"{data} is inserted as first node")

    # method to insert new node at the end
    def insertAtEnd(self, data):
        # case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first")
        # case-2 non empty case
        else:
            newNode = Node(data)
            temp = self.__head
            while temp.next is not None:
                temp = temp.next
            newNode.prev = temp
            temp.next = newNode
            print(f"{data} is insert at the end")

    # insert new node at given position
    def insertAtPosition(self, data, pos):
        # case-1 empty case
        if self.__head is None:
            self.__head = Node(data)
            print(f"{data} is inserted as first node")
        # case-2 non-empty case
        else:
            newNode = Node(data)
            temp = self.__head
            i = 0
            while temp.next is not None:
                i += 1
                if i == pos - 1:
                    break
                temp = temp.next
            newNode.next = temp.next
            newNode.prev = temp
            temp.next.prev = newNode
            temp.next = newNode
            print(f"{data} is inserted at {pos}")

    # method to count total nodes in list
    def nodeCount(self):
        pass

    # method to delete node from begin
    def deleteFromBegin(self):
        #case-1 empty case
        if self.__head is None:
            print("Doubly Linked List is empty")
            return
        #case-2 non-empty case
        else:
            temp = self.__head
            self.__head = self.__head.next
            temp.next.prev = None
            temp.next = None
            print(f"{temp.data} is being deleted")
            del temp

    # method to delete node from end
    def deleteFromEnd(self):
        #case-1 empty case
        if self.__head is None:
            print("\nDoubly Linked List is empty")
            return
        #case-2 non-empty case
        else:
            temp2 = self.__head
            while temp2.next is not None:
                temp2 = temp2.next
            temp1 = temp2.prev
            temp1.next = None
            temp2.prev = None
            print(f"\n{temp2.data} is being deleted")
            del temp2

    # method to delete node from given position
    def deleteFromPosition(self, pos):
        #case-1 empty case
        if self.__head is None:
            print("Doubly Linked List is empty")
            return
        #case-2 non-empty case
        else:
            i = 0
            temp2 = self.__head
            while temp2.next is not None:
                i = i + 1
                if i == pos:
                    break
                temp2 = temp2.next
            temp1 = temp2.prev
            temp1.next = temp2.next
            temp2.next.prev = temp1
            temp2.next = temp2.prev = None
            print(f"{temp2.data} is being deleted from {pos} position")
            del temp2

    # method to update data value at begin
    def updateAtBegin(self, newData):
        pass

    # method to update data value at end
    def updateAtEnd(self, newData):
        pass

    # method to update data value at given position
    def updateAtPosition(self, newData, pos):
        pass

    # method to update data value of given data of node
    def updateAtData(self, newData, oldData):
        pass

    # method to display or traverse
    def display(self):
        # case-1 empty case
        if self.__head is None:
            print("Doubly Linked List is empty!!!")
        # case-2 non-empty case
        else:
            temp = self.__head
            while temp is not None:
                print(f"{temp.data}", end=" -> ")
                temp = temp.next

    # method to display the list in reverse order
    def displayReverse(self):
        pass


# test code
if __name__ == '__main__':
    node = Node(10)  # creates a node with value 10
    dll = DoublyLinkedList(node)
    dll.insertAtBegin(5)
    dll.insertAtBegin(3)
    dll.insertAtEnd(20)
    dll.insertAtEnd(30)
    dll.insertAtPosition(9, 3)
    dll.display()
    dll.deleteFromBegin()
    dll.display()
    dll.deleteFromEnd()
    dll.display()
    dll.deleteFromPosition(3)
    dll.display()
```