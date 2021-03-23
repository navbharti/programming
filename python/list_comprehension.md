# Some of the List Comprehension Sample Codes:
Example-1: We need to create a list of integers which specify the length of each word in a certain sentence, but only if the word is not as word "the".

A list comprehension typically has 3 components:

`The output` (which can be string, number, list or any object you want to put in the list.)
`For Statements`
`Conditional filtering` (optional).

A typical format of a list comprehension.
![](https://www.machinelearningplus.com/wp-content/uploads/2018/11/list_comprehension_general_format-865x117.png)

Without Comprehension:

```python
sentence = "the quick brown fox jumps over the lazy dog"
words = sentence.split()
word_lengths = []
for word in words:
      if word != "the":
          word_lengths.append(len(word))
print(words)
print(word_lengths)
```

Using List Comprehension

```python
sentence = "the quick brown fox jumps over the lazy dog"
words = sentence.split()
word_lengths = [len(word) for word in words if word != "the"]
print(words)
print(word_lengths)
```

Example-2: Using a list comprehension, create a new list called "newlist" out of the list "numbers", which contains only the positive numbers from the list, as integers.

Using List Comprehenstion:

```python
numbers = [34.6, -203.4, 44.9, 68.3, -12.2, 44.6, 12.7]
newlist = [] # write your statement in [] square bracket 
print(newlist)
```
Example-2: How to create a list of even numbers from 0 to 9 using list comprehension

```python
even_list = [i for i in range(10) if i%2 == 0]

print(even_list)
```
Same thing can be achieved withought list comprehension

```python
result = []
for i in range(10):
    if i%2 == 0:
        result.append(i)
```
## How to convert Simple for-loop to list comprehension

Exampele-3: Square each number in mylist and store the result as a list.

```python
#For Loop Version:

mylist = [1,2,3,4,5]

# For Loop Version
result = []
for i in mylist:
    result.append(i**2)

print(result)
#> [1, 4, 9, 16, 25]
```
Take the **output** in the same line as the for condition and enclose the whole thing in a pair of [ ... ].

```python
#List comprehension solution:

result = [i**2 for i in [1,2,3,4,5]]
print(result)
#> [1, 4, 9, 16, 25]
```
## How to convert for and if filter to list comprehension

What if you have an `if` condition in the for loop? Say, you want to square only the even numbers:

Exmaple-4: Square only the even numbers in mylist and store the result in a list.

```python
#For Loop Version:

mylist = [1,2,3,4,5]

# For Loop Version
result = []
for i in mylist:
    if i%2==0:
        result.append(i**2)

print(result)
#> [4, 16]
```
In list comprehension, we add the `if condition` after the `for-loop` if we want to filter the items.

```python
# List Comprehension Version
result = [i**2 for i in [1,2,3,4,5] if i%2==0]
print(result)
#> [4, 16]
```
## How to convert for-loop with ‘if’ and ‘else’ condition to list comprehension
In `mylist`, **square** the number if its **even**, else, **cube** it.

```python
#For Loop Version:

mylist = [1,2,3,4,5]
# For Loop Version
result = []
for i in mylist:
    if i%2==0:
        result.append(i**2)
    else:
        result.append(i**3)

print(result)
#> [1, 4, 27, 16, 125]
```
Here, we wanted to filter the even numbers. But in this case, there is no filtering. So put the if and else before the for-loop itself.

```python
#List Comprehension solution:
mylist = [1,2,3,4,5]
sqrt_cube = [i**2 if i%2==0 else i**3 for i in mylist]
print(sqrt_cube)
#> [1, 4, 27, 16, 125]

```

## How to convert a Multiple for-loops to list comprehension
Flatten (2-D to 1-D) the **matrix** `mat` (a list of lists) keeping only the even numbers.

```python
#For Loop Version:

# For Loop Version
mat = [[1,2,3,4], 
	[5,6,7,8], 
	[9,10,11,12], 
	[13,14,15,16]]
result = []
for row in mat:
    for i in row:
        if i%2 == 0:
            result.append(i)

print(result)
#> [2, 4, 6, 8, 10, 12, 14, 16]
```
Can you imagine what the equivalent list comprehension version would look like? It’s nearly the same as writing the lines of the for-loop one after the other.

```python
#List Comprehension solution=:

# List Comprehension version
[i for row in mat for i in row if i%2==0]
#> [2, 4, 6, 8, 10, 12, 14, 16]

```
## How to convert Paired outputs to list comprehension

```python
For each number in list_b, get the number and its position in mylist as a list of tuples.

For-Loop Version:

mylist = [9, 3, 6, 1, 5, 0, 8, 2, 4, 7]
list_b = [6, 4, 6, 1, 2, 2]

result = []
for i in list_b:
    result.append((i, mylist.index(i)))

print(result)
#> [(6, 2), (4, 8), (6, 2), (1, 3), (2, 7), (2, 7)]
```

```python
List Comprehension solution:

, In this case, the output has 2 items instead of one. So pair both of them as a tuple and place it before the for statement.

[(i, mylist.index(i)) for i in list_b]
#> [(6, 2), (4, 8), (6, 2), (1, 3), (2, 7), (2, 7)]
```

## How to apply Dictionary Comprehensions
Same problem as previous example but output is a dictionary instead of a list of tuples.

For each number in list_b, get the number and its position in mylist as a dict.

```python
#For Loop Version:

mylist = [9, 3, 6, 1, 5, 0, 8, 2, 4, 7]
list_b = [6, 4, 6, 1, 2, 2]

result = {}
for i in list_b:
    result[i]=mylist.index(i)

print(result)
#> {6: 2, 4: 8, 1: 3, 2: 7}
```

#List Comprehension solution:

To make a dictionary output, you just need to replace the square brackets with curly brackets. And use a : instead of a comma between the pairs.

```python
{i: mylist.index(i) for i in list_b}
#> {6: 2, 4: 8, 1: 3, 2: 7}

```
## Tokenizing sentences into list of words
The goal is to tokenize the following 5 sentences into words, excluding the stop words.

**Input:**

```python
sentences = ["a new world record was set", 
             "in the holy city of ayodhya", 
             "on the eve of diwali on tuesday", 
             "with over three lakh diya or earthen lamps", 
             "lit up simultaneously on the banks of the sarayu river"]

stopwords = ['for', 'a', 'of', 'the', 'and', 'to', 'in', 'on', 'with']
```
```python
# For Loop Version
results = []    
for sentence in sentences:
    sentence_tokens = []
    for word in sentence.split(' '):
        if word not in stopwords:
            sentence_tokens.append(word)
    results.append(sentence_tokens)

print(results)
#> [['new', 'world', 'record', 'was', 'set'], 
#> ['holy', 'city', 'ayodhya'], 
#> ['eve', 'diwali', 'tuesday'], 
#> ['over', 'three', 'lakh', 'diya', 'or', 'earthen', 'lamps'], 
#> ['lit', 'up', 'simultaneously', 'banks', 'sarayu', 'river']]
```

### List Comprehension solution:

If you wanted to flatten out the words in the sentences, then the solution would have been something like this:

```python
results = [word for sentence in sentences for word in sentence.split(' ') if word not in stopwords]
print(results)
#> ['new', 'world', 'record', 'was', 'set', 'holy', 'city', 'ayodhya', 'eve', 'diwali', 'tuesday', 'over', 'three', 'lakh', 'diya', 'or', 'earthen', 'lamps', 'lit', 'up', 'simultaneously', 'banks', 'sarayu', 'river']
```
But we want to distinguish which words belong to which sentence, that is the original grouping of sentences should remain intact as a list.

To achieve this, the entire second unit of for-loop, that is, the [word for word in sentence.split(' ') if word not in stopwords] part should be considered as an output and therefore will go at the beginning of the list comprehension.

```python
# List Comprehension Version
[[word for word in sentence.split(' ') if word not in stopwords] for sentence in sentences]
#> [['new', 'world', 'record', 'was', 'set'],
#>  ['holy', 'city', 'ayodhya'],
#>  ['eve', 'diwali', 'tuesday'],
#>  ['over', 'three', 'lakh', 'diya', 'or', 'earthen', 'lamps'],
#>  ['lit', 'up', 'simultaneously', 'banks', 'sarayu', 'river']]
```

## Increasing Level of Difficulty
Given a 1D list, negate all elements which are between 3 and 8, using list comprehensions

```python
# Input
mylist = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Desired Output
[1, 2, -3, -4, -5, -6, -7, -8, 9, 10]
```

```python
#Solution
mylist = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
[-i if  3 <= i <= 8 else i for i in mylist]
```

Make a dictionary of the 26 english alphabets mapping each with the corresponding integer.

```python
# Desired output
{'a': 1, 'b': 2, 'c': 3, 'd': 4, 'e': 5, 'f': 6,
 'g': 7, 'h': 8, 'i': 9, 'j': 10, 'k': 11, 'l': 12,
 'm': 13, 'n': 14, 'o': 15, 'p': 16, 'q': 17, 'r': 18,
 's': 19, 't': 20, 'u': 21, 'v': 22, 'w': 23, 'x': 24,
 'y': 25, 'z': 26}
```

```python
import string
{a:i+1 for a,i in zip(string.ascii_letters[:26], range(26))}
```

Replace all alphabets in the string ‘Lee Quan Yew’, by substituting the alphabet with the corresponding numbers, like 1 for ‘a’, 2 for ‘b’ and so on.

Desired Output:

```python
[12, 5, 5, ' ', 17, 21, 1, 14, ' ', 25, 5, 23]
```

```python
#Solution
import string
d = {a:i+1 for a,i in zip(string.ascii_lowercase, range(26))}
[d.get(a.lower(), ' ') for a in 'Lee Quan Yew']
```
Get the unique list of words from the following sentences, excluding any stopwords.

```python
sentences = ["The Hubble Space telescope has spotted", 
             "a formation of galaxies that resembles", 
             "a smiling face in the sky"]
```
```python
# Desired output:
{'face', 'formation', 'galaxies', 'has', 'hubble', 'resembles',
 'sky', 'smiling', 'space', 'spotted', 'telescope', 'that', 'the'}

```
```python
#Solution
{word.lower() for sentence in sentences for word in sentence.split(' ') if word not in stopwords}
```

Tokenize the following sentences excluding all stopwords and punctuations.

```python
sentences = ["The Hubble Space telescope has spotted", 
             "a formation of galaxies that resembles", 
             "a smiling face in the sky", 
             "The image taken with the Wide Field Camera", 
             "shows a patch of space filled with galaxies", 
             "of all shapes, colours and sizes"]

stopwords = ['for', 'a', 'of', 'the', 'and', 'to', 'in', 'on', 'with']
```

```python
# Desired Output
#> [['the', 'hubble', 'space', 'telescope', 'has', 'spotted'],
#>  ['formation', 'galaxies', 'that', 'resembles'],
#>  ['smiling', 'face', 'sky'],
#>  ['the', 'image', 'taken', 'wide', 'field', 'camera'],
#>  ['shows', 'patch', 'space', 'filled', 'galaxies'],
#>  ['all', 'shapes,', 'colours', 'sizes']]

```

```python
#Solution
[[word.lower() for word in sentence.split(' ') if word not in stopwords] for sentence in sentences]
```
Create a list of (word:id) pairs for all words in the following sentences, where id is the sentence index.

```python
# Input
sentences = ["The Hubble Space telescope has spotted", 
             "a formation of galaxies that resembles", 
             "a smiling face in the sky"]

# Desired output:
[('the', 0), ('hubble', 0), ('space', 0), ('telescope', 0), ('has', 0), ('spotted', 0),
 ('a', 1), ('formation', 1), ('of', 1), ('galaxies', 1), ('that', 1), ('resembles', 1),
 ('a', 2), ('smiling', 2), ('face', 2), ('in', 2), ('the', 2), ('sky', 2)]

```

```python
#Solution
[(word.lower(), i) for i, sentence in enumerate(sentences) for word in sentence.split(' ')]
```
Print the inner positions of the 64 squares in a chess board, replacing the boundary squares with the string ‘—-‘.

```python
# Desired Output:
[['----', '----', '----', '----', '----', '----', '----', '----'],
 ['----', (1, 1), (2, 1), (3, 1), (4, 1), (5, 1), (6, 1), '----'],
 ['----', (1, 2), (2, 2), (3, 2), (4, 2), (5, 2), (6, 2), '----'],
 ['----', (1, 3), (2, 3), (3, 3), (4, 3), (5, 3), (6, 3), '----'],
 ['----', (1, 4), (2, 4), (3, 4), (4, 4), (5, 4), (6, 4), '----'],
 ['----', (1, 5), (2, 5), (3, 5), (4, 5), (5, 5), (6, 5), '----'],
 ['----', (1, 6), (2, 6), (3, 6), (4, 6), (5, 6), (6, 6), '----'],
 ['----', '----', '----', '----', '----', '----', '----', '----']]

```

```python
#Solution
[[(i,j) if (i not in (0, 7)) and (j not in (0, 7)) else ('----') for i in range(8)] for j in range(8)]
```

