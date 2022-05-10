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



### 2. Binary Search Algorithm