# Session Twenty Seven: Exception Handling

## Nested try ... except blocks

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except:
        print("state7")
    finally:
        print("state8")
        print("state9")
except:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")
```
## 1. If there is no exception

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except:
        print("state7")
    finally:
        print("state8")
        print("state9")
except:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")
```

### Output

```console
state1
state2
state3
state4
state5
state6
state8
state9
state11
state12
state13
```
## 2. If an exception raised at stmt-2 and the corresponding except block matched

```python
try:
    print("state1")
    #print("state2")
    print(10/0)
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except :
        print("state7")
    finally:
        print("state8")
        print("state9")
except ZeroDivisionError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")


```
### Output

```console
state1
state10
state11
state12
state13
```
## 3. If an exceptiion raised at stmt-2 and the corresponding except block not matched

```python
try:
    print("state1")
    #print("state2")
    print(10/0)
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except :
        print("state7")
    finally:
        print("state8")
        print("state9")
except ValueError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state11
state12
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 4, in <module>
    print(10/0)
ZeroDivisionError: division by zero
```
## 4. If an exception raised at stmt-5 and inner except block matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        #print("state5")
        print(10 / 0)
        print("state6")
    except ZeroDivisionError:
        print("state7")
    finally:
        print("state8")
        print("state9")
except ValueError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state7
state8
state9
state11
state12
state13
```
## 5. If an exception raised at stmt-5 and inner except block not matched but outer except block matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        #print("state5")
        print(10 / 0)
        print("state6")
    except ValueError:
        print("state7")
    finally:
        print("state8")
        print("state9")
except ZeroDivisionError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state8
state9
state10
state11
state12
state13
```
## 6. If an exception raised at stmt-5 and both inner and outer except blocks are not matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        #print("state5")
        print(10 / 0)
        print("state6")
    except ValueError:
        print("state7")
    finally:
        print("state8")
        print("state9")
except FileNotFoundError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state8
state9
state11
state12
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 8, in <module>
    print(10 / 0)
ZeroDivisionError: division by zero

```
## 7. If an exception raised at stmt-7 and corresponding except block matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        #print("state6")
        print(10 / 0)
    except ZeroDivisionError:
        #print("state7")
        print(10 / 0)
    finally:
        print("state8")
        print("state9")
except ZeroDivisionError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state5
state8
state9
state10
state11
state12
state13
```
## 8. If an exception raised at stmt-7 and corresponding except block not matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        #print("state6")
        a = int("abc")
    except ValueError:
        #print("state7")
        print(10 / 0)
    finally:
        print("state8")
        print("state9")
except ValueError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 9, in <module>
    a = int("abc")
ValueError: invalid literal for int() with base 10: 'abc'

During handling of the above exception, another exception occurred:

Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 12, in <module>
    print(10 / 0)
ZeroDivisionError: division by zero
state1
state2
state3
state4
state5
state8
state9
state11
state12
```
## 9. If an exception raised at stmt-8 and corresponding except block matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except ValueError:
        print("state7")
    finally:
        #print("state8")
        print(10 / 0)
        print("state9")
except ZeroDivisionError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state5
state6
state10
state11
state12
state13
```
## 10. If an exception raised at stmt-8 and corresponding except block not matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except ValueError:
        print("state7")
    finally:
        #print("state8")
        print(10 / 0)
        print("state9")
except FileNotFoundError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 13, in <module>
    print(10 / 0)
ZeroDivisionError: division by zero
state1
state2
state3
state4
state5
state6
state11
state12
```
## 11. If an exception raised at stmt-9 and corresponding except block matche

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except ValueError:
        print("state7")
    finally:
        print("state8")
        #print("state9")
        print(10 / 0)
except ZeroDivisionError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state5
state6
state8
state10
state11
state12
state13
```
## 12. If an exception raised at stmt-9 and corresponding except block not matched

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except ValueError:
        print("state7")
    finally:
        print("state8")
        #print("state9")
        print(10 / 0)
except FileNotFoundError:
    print("state10")
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state5
state6
state8
state11
state12
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 14, in <module>
    print(10 / 0)
ZeroDivisionError: division by zero
```
## 13. If an exception raised at stmt-10 then it is always abonormal termination but before abnormal termination finally block(stmt-11) will be executed

```python
try:
    print("state1")
    print("state2")
    #print("state3")
    a = int("abc")
    try:
        print("state4")
        print("state5")
        print("state6")
    except ValueError:
        print("state7")
    finally:
        print("state8")
        print("state9")
except TypeError:
    #print("state10")
    print(10 / 0)
finally:
    print("state11")
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state11
state12
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 5, in <module>
    a = int("abc")
ValueError: invalid literal for int() with base 10: 'abc'
```
## 14. If an exception raised at stmt-11 or stmt-12 then it is always abnormal termination.

```python
try:
    print("state1")
    print("state2")
    print("state3")
    try:
        print("state4")
        print("state5")
        print("state6")
    except ValueError:
        print("state7")
    finally:
        print("state8")
        print("state9")
except TypeError:
    print("state10")
finally:
    #print("state11")
    print(10 / 0)
    print("state12")
print("state13")

```
### Output

```console
state1
state2
state3
state4
state5
state6
state8
state9
Traceback (most recent call last):
  File "/Users/navbharti/PycharmProjects/pythonwork/smaple/exceptionDemo/nestedtry.py", line 18, in <module>
    print(10 / 0)
ZeroDivisionError: division by zero
```

`Note: ` If the control entered into try block then compulsary finally block will be executed.
  If the control not entered into try block then finally block won't be executed.