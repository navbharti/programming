# Session Twenty Eight: Exception Handling (Continue)

## Various ways of writing try ... except ... else ... finally blocks

1. Whenever we are writing `try block`, compulsory we should write except or finally block.i.e without except or finally block we cannot write try block.

2. Wheneever we are writing except block, compulsory we should write try block. i.e
except without try is always invalid.

3. Whenever we are writing finally block, compulsory we should write try block. i.e
finally without try is always invalid.

We can write multiple except blocks for the same try, but we cannot write multiple 
finally blocks for the same try
Whenever we are writing else block compulsory except block should be there. i.e
without except we cannot write else block.
In try-except-else-finally order is important.
We can define try-except-else-finally inside try, except, else and finally blocks. i.e
nesting of try-except-else-finally is always possible.



| S.No. | Statement | Right/Wrong|
|----|----|----|
| 1 | ```python
try:
    stat1
```
     | Wrong |
| 1 | 2 | 3|
