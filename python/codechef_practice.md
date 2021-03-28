# List of Codechef Problems and Solution in Python
## [TEST](https://www.codechef.com/problems/TEST) [Solution](https://onlinegdb.com/HUXxmKgEw) 
## [CIELAB](https://www.codechef.com/problems/CIELAB) [Solution](https://onlinegdb.com/HyA8x6BQO)
## [HS08TEST](https://www.codechef.com/problems/HS08TEST)
```python
a = input().split(" ")
withdraw = float(a[0])
total = float(a[1])
if withdraw % 5 == 0 and withdraw <= total-0.5:
	print(total-withdraw-0.5)
else:
	print(total)
```
## [GAME2048](https://www.codechef.com/problems/GAME2048)
```python
t = int(input())
for i in range(t):
	x = int(input())
	print(x-1)
```
## [FACTEASY](https://www.codechef.com/problems/FACTEASY)
```python
from math import factorial
t = int(input())
for i in range(t):
	x = int(input())
	print(factorial(x))
```
## [HOLES](https://www.codechef.com/problems/HOLES)
```python
t = int(input())
x = ["A","D","O","P","R","Q"]
for i in range(t):
	c = 0
	n = input()
	for j in range(len(n)):
		if n[j] == "B":
			c = c+2
		elif n[j] in x:
			c = c+1
	print (c)	
```
## [DOUBLE](https://www.codechef.com/problems/DOUBLE)
```python
t = int(input())
for i in range(t):
	n = int(input())
	if n%2 == 0:
    		print(n)
	else:
    		print(n-1)	 
```
## [NUMGAME](https://www.codechef.com/problems/NUMGAME)
```python
t = int(input())
for i in range(t):
	n = int(input())
	if n%2 == 0:
		print("ALICE")
	else: 
    		print("BOB")	 
```
## [PRCNSR5](https://www.codechef.com/problems/PRCNSR5)
```python
n = int(input())
if n%2 == 0:
	print("YES")
else:
	print("NO")	
```
## [PRCN16A](https://www.codechef.com/problems/PRCN16A)
```python
import math
t = int(input())
for i in range(t):
	n = int(input())
	total = 0
	for j in range(1,int(math.sqrt(n)+1)):
        	if (n%j == 0 and j*j == n):
        	    	total = total + j
        	if (n%j == 0 and j*j != n):
            		total = total + j + (n/j)
	print(int(total))
```
## [PRCN16C](https://www.codechef.com/problems/PRCN16C)
```python
from math import factorial                                                                  
t = int(input())
for i in range(t):
	n = int(input())
	numbers = input().split(" ")
	r0 = []
	r1 = []
	r2 = []
	for j in range(len(numbers)):
		numbers[j]=int(numbers[j])
	for j in numbers:
		if j%3 == 0:
			r0.append(j)
		elif j%3 ==1:
			r1.append(j)
		else:
			r2.append(j)
	if len(r0) < 3:
		a = 0
	else:
		a = (len(r0)*(len(r0)-1)*(len(r0)-2))/factorial(3)
	if len(r1) < 3:
		b = 0
	else:
		b = (len(r1)*(len(r1)-1)*(len(r1)-2))/factorial(3)
	if len(r2) < 3:
		c = 0
	else:
		c = (len(r2)*(len(r2)-1)*(len(r2)-2))/factorial(3)
	d = len(r0)*len(r1)*len(r2)
	print(int(a)+int(b)+int(c)+int(d))
```
## [NSIT13](https://www.codechef.com/problems/NSIT13)
```python
for i in range(10):
	List = []
	sum = 0
	for j in range(10) :
		m = int(input())
		a = m%42 
		if a not in List :
			List.append(a)
			sum = sum+1
	print(sum) 
```
## [NBSUM](https://www.codechef.com/problems/NBSUM)
```python
#Enter your code here
t = int(input())
for i in range(t):
	n = int(input())
	if n%2 == 0:
		print(int(-n/2))
	else:
		print(int(n/2+0.5))	 
```
## [STKENC](https://www.codechef.com/problems/STKENC)
```python
#Enter your code here
from math import ceil
t = int(input())
for i in range(t):
	n = int(input())
	print(ceil(n/26))
```
## [ABSNUM](https://www.codechef.com/problems/ABSNUM)
```python
t = int(input())
for i in range(t):
	n = int(input())
	print(abs(n))
```
## [NCC3](https://www.codechef.com/problems/NCC3)
```python
t = int(input())
for i in range(t):
	n = int(input())
	m = int(input())
	k = int(input())
	print(pow(n,m,k))
```
## [SUMMATH](https://www.codechef.com/problems/SUMMATH)
```python
from math import floor
t = int(input())
for i in range(t):
	n = int(input())
	a = floor(n/10)
	b = (a**2+a)*5
	print(b)
```
## [CDVA1502](https://www.codechef.com/problems/CDVA1502)
```python
from math import factorial
for i in range(int(input())):
	n,k = map(int,input().split())
	ks = map(int,input().split())
	a = max(ks)
	b = factorial(n)
	print(b%a)
```
## [INTEST](https://www.codechef.com/problems/INTEST)
```python
n,k = map(int,input().split())
count = 0
for i in range(n):
	x = int(input())
	if x%k == 0:
		count += 1
print(count)		
```
## [ODDEVENX](https://www.codechef.com/problems/ODDEVENX)
```python
t = int(input())
n = map(int,input().split())
odd = []
even = []
for i in n:
	if i%2 == 0:
		even.append(i)
	else:
		odd.append(i)
print(abs(int(len(odd)-len(even))))			
```
## [TECH07](https://www.codechef.com/problems/TECH07)
```python
import math
f = math.factorial
t = int(input())
for i in range(t):
	n = int(input())
	tp = 4*n
	total = (tp * (tp-1) * (tp-2))/f(3)
	ecp = 4*((n*(n-1)*(n-2))/f(3))
	print(int(total-ecp)) 
```
## [ALGFACT](https://www.codechef.com/problems/ALGFACT)
```python
from math import factorial
for i in range(int(input())):
	n = int(input())
	print(factorial(n))
```
## [NOPC1](https://www.codechef.com/problems/NOPC1)
```python
a = input()
b = input()
if b not in a:
	print("N")
else:
	print("Y")
			
```
## [CODQ2](https://www.codechef.com/problems/CODQ2)
```python
from math import floor
n = int(input())
print (int(floor(n/5)))
n = n%5
print (int(floor(n/3)))
n = n%3
print (int(floor(n/2)))
n = n%2
print (int(floor(n/1)))
n = n%1
```
## [AD2](https://www.codechef.com/problems/AD2)
```python
from math import *
t = int(input())
for i in range(t):
	n = int(input())
	print(int(n/3))
```
## [MRIU4](https://www.codechef.com/problems/MRIU4)
```python
for i in range(int(input())):
	n = int(input())
	li = input().split()
	for k in range(len(li)):
		li[k] = int(li[k])
	li.sort()    
	for j in li:
		print (j,end=" ")
```
## [FCTRL2](https://www.codechef.com/problems/FCTRL2)
```python
from math import factorial
for i in range(int(input())):
	print(factorial(int(input())))
```
## [FLOW002](https://www.codechef.com/problems/FLOW002)
```python
for i in range(int(input())):
	a , b = map(int,input().split())
	print (a%b)  
```
## [FLOW018](https://www.codechef.com/problems/FLOW018)
```python
from math import factorial
for i in range(int(input())):
	print(factorial(int(input())))
```
## [FSQRT](https://www.codechef.com/problems/FSQRT)
```python
from math import sqrt
for i in range(int(input())):
	print(int(sqrt(int(input()))))
```
## [TDIV](https://www.codechef.com/status/TDIV)
```python
from fractions import gcd
for i in range(int(input())):
	n = int(input())
	a = input().split(" ")
	for j in range(n):
		a[j] = int(a[j])
	for k in range(n-1):
		a[k+1] = gcd(a[k],a[k+1])
	print (a[n-1])		
```
## [TSORT](https://www.codechef.com/status/TSORT)
```python
a = []
for i in range(int(input())):
	a.append(int(input()))
a.sort()
for j in a:
	print(j)	
```
## [FLOW001](https://www.codechef.com/problems/FLOW001)
```python
for i in range(int(input())):
	a = map(int,input().split(" "))
	print(sum(a))
```
## [FLOW013](https://www.codechef.com/problems/FLOW013)
```python
for i in range(int(input())):
	a,b,c = map(int,input().split(" "))
	if a+b+c == 180:
		print ("YES")
	else:
		print ("NO")	
```
## [FLOW017](https://www.codechef.com/problems/FLOW017)
```python
for i in range(int(input())):
	a,b,c = map(int,input().split(" "))
	d = []
	d.append(a)
	d.append(c)
	d.append(b)
	d.sort()
	print (d[1]) 
```
## [FLOW005](https://www.codechef.com/problems/FLOW005)
```python
from math import floor
100,50,10,5,2,1
for i in range(int(input())):
	n = int(input())
	count = 0
	a = n%100
	count += floor(n/100)
	count += floor(a/50)
	a = a%50
	count += floor(a/10)
	a = a%10
	count += floor(a/5)
	a = a%5
	count += floor(a/2)
	a = a%2
	count += a
	print(int(count))
```
## [FLOW004](https://www.codechef.com/problems/FLOW004)
```python
for i in range(int(input())):
	n = input()
	a = []
	for j in n:
		a.append(int(j))
	print(int(a[0]+a[len(a)-1]))
```
## [FLOW006](https://www.codechef.com/problems/FLOW006)
```python
for i in range(int(input())):
	n = input()
	a = []
	for j in n:
		a.append(int(j))
	print(sum(a))
```
## [FLOW007](https://www.codechef.com/problems/FLOW007)
```python
for i in range(int(input())):
	n = input()
	a = []
	for j in n:
		a.append(int(j))
	a.reverse()	
	a = map(str,a)
	b = "".join(a)
	print(int(b))  
```
## [FLOW008](https://www.codechef.com/status/FLOW008)
```python
for i in range(int(input())):
	n = int(input())
	if n < 10:
		print("What an obedient servant you are!")
	else:
		print(-1)	
```
## [FLOW009](https://www.codechef.com/problems/FLOW009)
```python
for i in range(int(input())):
	q , p = map(float,input().split())
	if q < 1000:
		print("%.6f"%(q*p))
	else:
		print("%.6f"%(q*p*0.9))	
```
## [FLOW010](https://www.codechef.com/problems/FLOW010)
```python
dic = {
	"B" : "BattleShip",
	"C" : "Cruiser",
	"D" : "Destroyer",
	"F" : "Frigate"
}
for i in range(int(input())):
	print(dic[input().upper()])
```
## [FLOW011](https://www.codechef.com/problems/FLOW011)
```python
for i in range(int(input())):
	n = int(input())
	if n < 1500:
		print(2*n)
	else:
		print("%g"%(n+500+n*0.98))	
```
## [FLOW014](https://www.codechef.com/problems/FLOW014)
```python
for i in range(int(input())):
	n = input().split()
	hard = float(n[0])
	cc = float(n[1])
	stren = float(n[2])
	c1 = False
	c2 = False
	c3 = False
	grade = 0
	if hard > 50.0:
		c1 = True
	if cc < 0.7:
		c2 = True
	if stren > 5600:
		c3 = True
	if c1 == True and c2 == True and c3 == True:
		grade = 10
	elif c1 == True and c2 == True:
		grade = 9
	elif c2 == True and c3 == True:
		grade = 8
	elif c1 == True and c3 == True:
		grade = 7
	elif c1 == True or c2 == True or c3 == True:
		grade = 6		
	else:
		grade = 5	
	print(grade)
```
## [MNMX](https://www.codechef.com/problems/MNMX)
```python
for i in range(int(input())):
	n = int(input())
	a = [int(i) for i in input().split()]
	print(min(a)*(n-1))
```
## [CHEFCBA](https://www.codechef.com/problems/CHEFCBA)
```python
a = [int(i) for i in input().split()]
a.sort()
if (a[1])/(a[0]) == (a[3])/(a[2]):
	print ("Possible")
else:
	print("Impossible")	
```
## [PLGRM](https://www.codechef.com/problems/PLGRM)
```python
from math import floor
def pangram(string):
    lis = "qwertyuiopasdfghjklnmbvcxz"
    a = []
    for j in lis:
        a.append(j)
    for i in a:
        if i not in string:
            return False
    return True
def palindrome(text):
    a = len(text)
    for i in range(floor(a/2)):
        if text[i] != text[-i-1]:
            return False
    return True
for j in range(int(input())):
    s = input()
    if pangram(s) == True and palindrome(s) == True:
        print("palingram")
    elif pangram(s) == True:
        print("pangram")
    elif palindrome(s) == True:
        print("palindrome")
    else:
        print("none")
```
## [CHEFFED](https://www.codechef.com/problems/CHEFFED)
```python
n = int(input())
ans = 0
def S(x):
    t = str(x)
    return sum([int(i) for i in t])
for j in range(n-100,n+1):
    if j<0:
        continue
    elif j + S(j) + S(S(j)) == n:
        ans += 1        
print(ans)    

```
## [POWER2](https://www.codechef.com/problems/POWER2)
```python
for i in range(input()):
	n = input()
	if n != 0 and n%2 == 0:
		print "Yes"
	else:
		print ("No")	
```
## [CSUB](https://www.codechef.com/problems/CSUB)
```python
for _ in range(int(input())):
	n = input()
	s = input().count("1")
	print(s*(s+1)//2 )
```
## [SIMPSTAT](https://www.codechef.com/problems/SIMPSTAT)
```python
for i in range(int(input())):
	n,k = map(int,input().split())
	a = [int(j) for j in input().split()]
	a.sort(reverse = True)
	for k in range(k):
		a.pop(0)
		a.pop()
	x = int(sum(a))/int(len(a))	
	print("%.6f"%x)	
```
## [LEVENSUB](https://www.codechef.com/problems/LEVENSUB)
```python
for i in range(int(input())):
	n = int(input())
	a = [int(j) for j in input().split()]
	odd = [k for k in a if k%2 == 1] 
	even = [l for l in a if l%2 == 0]
	if len(odd)%2 == 0:
		print(n)
	else:
		for x in range(n//2+1):
			if a[x]%2 == 1 or a[-x-1]%2 == 1:
				print(n-x-1)
				break
```
## [TICKETS5](https://www.codechef.com/problems/TICKETS5)
```python
for i in range(int(input())):
	s = input()
	a = s[0]
	b = s[1]
	if a != b and ((s.count(a) == s.count(b) == s.count(a+b) == len(s)/2) or (s.count(a) == s.count(b)+1 and s.count(a)+s.count(b) == len(s))):
		print("YES")
	else:
		print("NO")	
```
## [EGRANDR](https://www.codechef.com/problems/EGRANDR)
```python
for i in range(int(input())):
	n = int(input())
	a = [int(j) for j in input().split()]
	if 2 not in a and 5 in a and sum(a)/n >= 4:
		print("Yes")	
	else:
		print("No")			
```
## [MAXCOUNT](https://www.codechef.com/problems/MAXCOUNT)
```python
for i in range(int(input())):
	n = int(input())
	a = [int(j) for j in input().split()]
	a.sort()
	coun = 0
	num = 0
	for k in range(len(a)):
		if a.count(a[k]) > coun:
			coun = a.count(a[k])
			num = a[k]
	print(num,coun)		
	
```
## [COOLING](https://www.codechef.com/problems/COOLING)
```python
for i in range(int(input())):
	n = int(input())
	a = [int(j) for j in input().split()]
	b = [int(k) for k in input().split()]
	a.sort(reverse=True)
	b.sort(reverse=True)
	coun = 0
	while len(a)>0:
		if a[0] > b[0]:
			del a[0]
		else:
			del a[0]
			del b[0]
			coun += 1
	print(coun)			
	
```
## [DCE05](https://www.codechef.com/problems/DCE05)
```python
for i in range(int(input())):
	n = int(input())
	coun = 0
	while n > 1:
		n //= 2
		coun += 1
	print(2**coun)	
```
## [LECANDY](https://www.codechef.com/problems/LECANDY)
```python
for i in range(int(input())):
	n,c = map(int,input().split())
	a = sum([int(j) for j in input().split()])
	print("Yes" if a <= c else "No")
```
## [ACBALL](https://www.codechef.com/problems/ACBALL)
```python
for i in range(int(input())):
	x = input()
	y = input()
	z = ""
	for j in range(len(x)):
		if x[j] == y[j] == "B":
			z += "W"
		else:
			z += "B"
	print(z)			
```
## [OMWG](https://www.codechef.com/problems/OMWG)
```python
for _ in range(int(input())):
	n,m = map(int,input().split())
	print (n*(m-1) + m * (n-1))
```
## [TALAZY](https://www.codechef.com/problems/TALAZY)
```python
from math import ceil
for i in range(int(input())):
	n,b,m = map(int,input().split())
	coun = 0
	while n > 0:
		coun += ceil(n/2)*m + b
		n //= 2
		m *= 2
	print(coun-b)	
```
## [DEVARRAY](https://www.codechef.com/problems/DEVARRAY)
```python
n,q = map(int,input().split())
a = [int(i) for i in input().split()]
mi = min(a)
ma = max(a)
for _ in range(q):
	x = int(input())
	if x <= ma and x >= mi:
		print("Yes")
	else:
		print("No")	
```
## [CHCOINSG](https://www.codechef.com/problems/CHCOINSG)
```python
for _ in range(int(input())):
	print("Misha" if int(input()) % 6 == 0 else "Chef")
```
## [LCOLLIS](https://www.codechef.com/problems/LCOLLIS)
```python
for i in range(int(input())):
	n,m = map(int,input().split())
	atotal = [0,0,0,0,0,0,0,0,0,0]
	for j in range(n):
		a = [int(k) for k in input()]
		for l in range(m):
			 if a[l] == 1:
			 	atotal[l] += 1
	coun = 0
	for o in atotal:
		coun += o*(o-1)//2
	print(coun)			 	
```
## [INTROSRM](https://www.codechef.com/problems/INTROSRM)
```python
for i in range(int(input())):
	a = [j for j in input()]
	a.reverse()
	print(int("".join(a)))
```
## [DRCTNSRM](https://www.codechef.com/problems/DRCTNSRM)
```python
for _ in range(int(input())):
	s = input()
	counNS = 0
	counEW = 0
	for j in s:
		if j == "N":
			counNS += 1
		elif j == "S":
			counNS -= 1
		elif j == "E":
			counEW += 1
		else:
			counEW -= 1
	if counNS >= 1 and counEW > 0:
		print("NORTHEAST")	
	if counNS >= 1 and counEW == 0:
		print("NORTH")
	if counNS >= 1 and counEW <= -1:
		print("NORTHWEST")
	if counNS == 0 and counEW >= 1:
		print("EAST")
	if counNS == 0 and counEW <= -1:
		print("WEST")
	if counNS <= -1 and counEW >= 1:
		print("SOUTHEAST")
	if counNS <= -1 and counEW == 0:
		print("SOUTH")
	if counNS <= -1 and counEW <= -1:
		print("SOUTHWEST")
```
## [MULTISRM](https://www.codechef.com/problems/MULTISRM)
```python
print(int(input()) * int(input()))
```
## [FCTRL](https://www.codechef.com/problems/FCTRL)
```python
from math import log,floor
for _ in range(int(input())):
	n = int(input())
	coun = 0
	x = floor(log(n,5))
	for i in range(1,x+1):
		coun += (n//(5**i)) 
	print(coun)	
```
## [TLG](https://www.codechef.com/problems/TLG)
```python
n = int(input())
coun = 0
coun2 = 0
A = []
B = []
for _ in range(n):
	a,b = map(int,input().split())
	coun += a
	coun2 += b
	if coun > coun2:
		A.append(coun - coun2)
	elif coun2 > coun:
		B.append(coun2 - coun)	
x = sum(A)-sum(B)		
if x < 0:
	print(2,max(B))
else:
	print(1,max(A))
```
## [MUFFINS3](https://www.codechef.com/problems/MUFFINS3)
```python
for _ in range(input()):
	print (input()/2) + 1
```
## [LUCKFOUR](https://www.codechef.com/problems/LUCKFOUR)
```python
for _ in range(int(input())):
	n = input()
	coun = 0
	for i in n:
		if i == "4":
			coun += 1
	print(coun)		 
```
## [LCH15JAB](https://www.codechef.com/problems/LCH15JAB)
```python
for _ in range(int(input())):
	s = input()
	coun = 0
	for i in s:
		if s.count(i) > coun:
			coun = s.count(i)
	if coun * 2 == len(s):
		print("YES")
	else:
		print("NO")				
```
## [HEADBOB](https://www.codechef.com/problems/HEADBOB)
```python
for _ in range(int(input())):
	n = int(input())
	s = input()
	if "Y" not in s and "I" not in s:
		print("NOT SURE")
	else:
		if "Y" not in s:
			print("INDIAN")
		elif "I" not in s:
			print("NOT INDIAN")
		else:
			print("NOT SURE")	 		
```
## [SPALNUM](https://www.codechef.com/problems/SPALNUM)
```python
def pal(s):
	if len(s) == 0 or len(s) == 1:
		return True
	return s[0] == s[-1] and pal(s[1:-1])
for i in range(int(input())):
	a,b = map(int,input().split())
	coun = 0
	for j in range(a,b+1):
		if pal(str(j)) == True:
			coun += j
	print(coun)			
```
## [SMPAIR](https://www.codechef.com/problems/SMPAIR)
```python
for i in range(int(input())):
	n = input()
	a = [int(j) for j in input().split()]
	b = min(a)
	a.remove(b)
	c = min(a)
	print(b+c)
```
## [TRISQ](https://www.codechef.com/problems/TRISQ)
```python
for _ in range(int(input())):
	n = int(input())
	x = (n//2)-1
	print(x*(x+1)//2)
```
## [PRB01](https://www.codechef.com/problems/PRB01)
```python
from math import floor,sqrt
def is_prime(n):
	if n < 2:
		return False
	if n == 2:
		return True
	for i in range(2,floor(sqrt(n))+2):
		if n%i == 0:
			return False
	return True
for _ in range(int(input())):
	if is_prime(int(input())) == True:
		print("yes")
	else:
		print("no")					
```
## [STUDVOTE](https://www.codechef.com/problems/STUDVOTE)
```python
for _ in range(int(input())):
	n,k = map(int,input().split())
	a = [int(j) for j in input().split()]
	coun = 0
	for i in range(len(a)):
		if a[i] != i+1 and a.count(i+1) >= k:
			coun += 1
	print(coun) 
```
## [CFRTEST](https://www.codechef.com/problems/CFRTEST)
```python
for _ in range(int(input())):
	n = input()
	a = [int(i) for i in input().split()]
	print(len(set(a)))
```
## [REMISS](https://www.codechef.com/problems/REMISS)
```python
for _ in range(int(input())):
	a,b = map(int,input().split())
	print(max(a,b),a+b)
```
## [MXZERO](https://www.codechef.com/problems/MXZERO)
```python
for _ in range(int(input())):
	n = int(input())
	a = [int(i) for i in input().split()]
	x = a.count(1)
	if x%2 == 0:
		print(n-x)
	else:
		print(x)
```
## [ALTARAY](https://www.codechef.com/problems/ALTARAY)
```python
for _ in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = []
    for j in a:
        if j < 0:
            b.append(0)
        else:
            b.append(1)
    c = [1]
    for k in range(n-2,-1,-1):
        if b[k+1] == b[k]:
            c.append(1)
        else:
            c.append(c[-1]+1)
    c.reverse()
    for x in c:
        print(x,end=" ")
    print("")
```
## [RECIPE](https://www.codechef.com/problems/RECIPE)
```python
from fractions import gcd
def lg(a):
    b = a[::]
    for i in range(len(a)-1):
        b[i+1] = gcd(b[i],b[i+1])
    return b[-1]
for _ in range(int(input())):
    x = list(map(int,input().split()))	
    x.remove(x[0])
    y = lg(x)
    z = [(j//y) for j in x]
    for k in z:
        print (k,end= " ")
    print("")				
```
## [START01](https://www.codechef.com/problems/START01)
```python
print(input())
```
## [ENTEXAM](https://www.codechef.com/problems/ENTEXAM)
```python
for _ in range(int(input())):
	n,k,e,m = map(int,input().split())
	b = []
	for _ in range(1,n):
		a = [int(i) for i in input().split()]
		b.append(sum(a))
	b.sort(reverse=True)
	a = sum([int(i) for i in input().split()])
	if b[k-1]-a > 0:
		if b[k-1]-a > m:
			print("Impossible") 		
		else:
			print ((b[k-1]-a)+1)
	else:
		print(0)		
```
## [CHOPRT](https://www.codechef.com/problems/CHOPRT)
```python
for i in range(int(input())):
	a,b = map(int,input().split())
	if a == b:
		print("=")
	elif a<b:
		print("<")
	else:
		print(">")		
```
## [FRGTNLNG](https://www.codechef.com/problems/FRGTNLNG)
```python
for _ in range(int(input())):
	n,k = map(int,input().split())
	words = input().split()
	phrases = []
	for _ in range(k):
		phrases.append(input()[2:])
	a = []
	for i in words:
		for j in phrases:
			if i in j:
				a.append("YES")
				break
		else:
			a.append("NO")
	for x in a:
		print(x,end= " ")
	print("")						
```
## [WALK](https://www.codechef.com/problems/WALK)
```python
for i in range(int(input())):
	n = int(input())
	a = input().split()
	b = []
	for j in range(n):
		b.append(int(a[j])+j)
	print(max(b))	
```
## [PROSUM](https://www.codechef.com/problems/PROSUM)
```python
def f(x):
	return x * (x-1)//2	
t = int(input())
for _ in range(t):
	n = int(input())
	a = input().split()
	n -= a.count("0")+a.count("1")
	print(f(n)-f(a.count("2")))
```
## [CIELRCPT](https://www.codechef.com/problems/CIELRCPT)
```python
for _ in range(int(input())):
	n = int(input())
	x = 2048
	coun = 0
	while n>0:
		while n-x >= 0:
			n -= x
			coun += 1
		x //= 2
	print(coun)
```
## [STRPALIN](https://www.codechef.com/problems/STRPALIN)
```python
for _ in range(int(input())):
	a = input()
	b = input()
	for i in a:
		if i in b:
			print("Yes")
			break
	else:
		print("No")		
```
## [WDTBAM](https://www.codechef.com/problems/WDTBAM)
```python
for _ in range(int(input())):
	n = int(input())
	x = input()
	y = input()
	a = list(map(int,input().split()))
	coun = 0
	for i in range(n):
		if x[i] == y[i]:
			coun += 1
	if coun == n:
		print(a[-1])
		continue		
	print(max(a[:coun+1]))		
```
## [SNAPE](https://www.codechef.com/problems/SNAPE)
```python
from math import sqrt 
for _ in range(int(input())):
	a,b = map(int,input().split())
	print(sqrt((b**2)-(a**2)),sqrt((b**2)+(a**2)))
```
## [FRUITS](https://www.codechef.com/problems/FRUITS)
```python
for _ in range(int(input())):
	a,b,c = map(int,input().split())
	ma = max(a,b)
	mi = min(a,b) 		
	if ma >= (mi + c):
		print(ma-(mi+c))
	else:
		print(0)	
```
## [TWOSTR](https://www.codechef.com/problems/TWOSTR)
```python
for _ in range(int(input())):
	a = input()
	b = input()
	for i in range(len(a)):
		if not(a[i] == b[i] or a[i] == "?" or b[i] == "?"):
			print("No")
			break
	else:
		print("Yes")
				
```
## [CHEFSTLT](https://www.codechef.com/problems/CHEFSTLT)
```python
def mi(a,b):
	coun = 0
	for i in range(len(a)):
		if not(a[i] == "?" or b[i] == "?" or a[i] == b[i]):
			coun += 1
	return coun
def ma(a,b):
	coun = 0
	for i in range(len(a)):
		if a[i] != b[i] or a[i] == "?":
			coun += 1
	return coun
for i in range(int(input())):
	a = input()
	b = input()
	print(mi(a,b),ma(a,b)) 						
```
## [AMR15A](https://www.codechef.com/problems/AMR15A)
```python
n = int(input())
a = [int(i) for i in input().split() if int(i)%2 == 0]
print("READY FOR BATTLE" if len(a) > n/2 else "NOT READY")
```
## [TRICOIN](https://www.codechef.com/problems/TRICOIN)
```python
for i in range(int(input())): print(int((((8*int(input())+1)**0.5)-1)/2))
```
## [MISSP](https://www.codechef.com/problems/MISSP)
```python
for _ in range(int(input())):
	n = int(input())
	a = [int(input()) for _ in range(n)]
	b = list(set(a))
	for i in b:
		if a.count(i)%2 == 1:
			print(i)
			break
```
## [ANUMLA](https://www.codechef.com/problems/ANUMLA)
```python
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    del a[0]
    del a[pow(2,n-1):-1]
    if n == 1:
        print(a[0])
    elif n == 2:
        print(a[0],a[1])
    else:
        sol = []
        b = [0]
        while True:
            x = a[0]
            sol.append(x)
            if len(sol) >= n-1:
                break
            for i in b[::]:
                y = i+x
                if y <= a[-2]:
                    b.append(y)
                    a.remove(y)
        sol.append(a[-1]-sum(sol))      
        for ii in sol:
            print(ii,end=' ')
        print("")               

```
## [UTMOPR](https://www.codechef.com/problems/UTMOPR)
```python
for _ in range(int(input())): 
	n,k = map(int,input().split())
	a = list(map(int,input().split()))
	print("odd" if sum(a)%2 == 0 and k == 1 else "even")
	
```
## [PALL01](https://www.codechef.com/problems/PALL01)
```python
for _ in range(int(input())):
	a = input()
	b = a[::-1]
	if int(a) == int(b):
		print("wins")
	else:
		print("losses")
```
## [CHEFDETE](https://www.codechef.com/problems/CHEFDETE)
```python
n = int(input())
a = []
for _ in range(n+1):
	a.append(0)		
b = input().split()
for i in b:
	a[int(i)] = 1
for j in range(len(a)):
	if a[j] == 0:
		print(j,end= ' ')	
```
## [PRJR16A](https://www.codechef.com/problems/PRJR16A)
```python
from fractions import gcd
def lcm(a,b):
	return (a*b)//gcd(a,b)
def list_lcm(a):
	b = len(a)-1
	for i in range(b):
		a[i+1] = lcm(a[i],a[i+1])
	return a[b]		
for i in range(int(input())):
	n = [int(i) for i in input().split()]
	print(list_lcm(n))
```
## [PRCN16H](https://www.codechef.com/problems/PRCN16H)
```python
first = int(input())
second = int(input())
third = int(input())
if first >= second+third or second >= first+third or third >= first+second:
    print("NO")
else:
    print("YES")
```
## [PRCN16B](https://www.codechef.com/problems/PRCN16B)
```python
for i in range(int(input())):
	n = int(input())
	print(int(((n+(n%2))/2)**2))
```
## [PRCN16D](https://www.codechef.com/problems/PRCN16D)
```python
t = int(input())
for i in range(t):
    n = input().split(" ")
    r = int(n[0])
    b = int(n[1])
    bag_balls = input().split(" ")
    bag = bag_balls[0].upper()
    balls = int(bag_balls[1])
    for j in range(1):
        if bag == "R":
            r = r-balls
        elif bag == "B":
            b = b-balls
        
    if r == b:
        print("Oj")
    else:
        print("Bhrigudov")
```
## [PRCN16F](https://www.codechef.com/problems/PRCN16F)
```python
from math import *
def funct4(n):
    c = False
    for a in range(2,ceil(sqrt(n-3))):
        if (n-4)%a == 0:
            c = True 
            break
    if c == False:
        return False
    else:
        return True
def funct6(n):
    d = False
    for a in range(2,ceil(sqrt(n-5))):
        if (n-6)%a == 0:
            d = True 
            break 
    if d == False:
        return False
    else:
        return True
def funct8(n):
    e = False
    for a in range(2,ceil(sqrt(n-7))):
        if (n-8)%a == 0:
            e = True 
            break 
    if e == False:
        return False
    else:
        return True    
    
t = int(input())
for i in range(t):
    n = int(input())
    if funct4(n) == True:
        print("4 "+str(n-4))
    elif funct6(n) == True:
        print("6 "+str(n-6))
    elif funct8(n) == True:
        print("8 "+str(n-8))
    else:
        print("9 "+str(n-9))
```
## [BSQUARE](https://www.codechef.com/problems/BSQUARE)
```python
from fractions import gcd
for i in range(int(input())):
    n = int(input())
    per = 4*n
    m = n+1
    print(per//gcd(m,per))
```
## [MINMO](https://www.codechef.com/problems/MINMO)
```python
n,bombs = map(int,input().split())
a = []
coun = 0
qwerty = 0
x_axis = [int(x) for x in input().split()]
y_axis = [int(y) for y in input().split()]
for i in range(bombs):
    if (x_axis[i] == 1 and y_axis[i] == n) or (x_axis[i] == 1 and y_axis[i] == 1) or (x_axis[i] == n and y_axis[i] == n) or (x_axis[i] == n and y_axis[i] == 1):
        qwerty += 1    
    else:
        z = [x_axis[i],y_axis[i]]
        a.append(z)
for j in a:
    for k in j:
        if n-k <= k-1:
            coun += n-k
        else:
            coun += k-1
print(coun)            
```
## [CHEFCHSS](https://www.codechef.com/problems/CHEFCHSS)
```python
for i in range(int(input())):
    cost1,cost2,prize1,runner_prize1,runner_prize2,prize2 = map(int,input().split())
    prob1,prob2,prob3,prob4 = map(float,input().split())
    prize2 += runner_prize2 
    profit1 = -cost1
    profit2 = -cost2
    profit1 += prob1*prob2*prize1
    profit2 += prob3*prob4*prize2
    profit1 += prob1*(1-prob2)*runner_prize1
    profit2 += prob3*(1-prob4)*runner_prize2
    if profit1 == profit2:
        print("BOTH")
    elif profit1 > profit2:
        print("FIRST")
    else:
        print("SECOND")
```
## [CTSTR](https://www.codechef.com/problems/CTSTR)
```python
from collections import Counter
def same(a):
	ans = 1
	for i in range(len(a)-1):
		if a[i] == a[i+1]:
			ans += 1
		else:
			break
	return ans    
for _ in range(int(input())):
	n,k = map(int,input().split())
	s = Counter(input())
	d = {}
	a = list(s.keys())
	b = [i for i in a if s[i] > k]
	for i in b:
		try:
			d[s[i]] += i
		except:
			d[s[i]] = i
	a = list(d.values())
	a.sort(reverse=True)
	c = []
	y = len(a)
	j = 0
	while j < y:
		x = same(a[j:])
		c.append("".join(sorted(a[j:j+x])))
		j += x
	print("".join(c)) 
```
## [LUCKY5](https://www.codechef.com/problems/LUCKY5)
```python
for _ in range(int(input())):
	s = input().strip()
	n = len(s)
	n -= s.count('4')
	n -= s.count('7')
	print(n)
```
## [THREEDIF](https://www.codechef.com/problems/THREEDIF)
```python
for _ in range(int(input())):
	a = [int(i) for i in input().split()]
	a.sort()
	a[1] -= 1
	a[2] -= 2
	x = 1
	x *= a[0]
	x *= a[1]
	x *= a[2]
	print(x%(1000000007))
```
## [SUBGCD](https://www.codechef.com/problems/SUBGCD)
```python
from fractions import gcd
def list_gcd(a,n):
	x = gcd(a[0],a[1])
	for i in range(2,n):
		x = gcd(x,a[i])
	return x	
for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	y = list_gcd(a,n)
	if y == 1:
		print(n)
	else:
		print(-1)	
```
## [SUBINC](https://www.codechef.com/problems/SUBINC)
```python
for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	b = []
	for i in range(n-1):
		if a[i] <= a[i+1]:
			b.append(1)
		else:
			b.append(0)
	b.append(0)		
	ans =  n
	coun = 0
	for i in b:
		if i == 1:
			coun += 1
		else:
			ans += coun*(coun+1)//2
			coun = 0
	print(ans) 			
```
## [COLOR](https://www.codechef.com/problems/COLOR)
```python
for _ in range(int(input())):
	n = int(input())
	s = input().lower()
	r = g = b = 0
	for i in s:
		if i == 'r':
			r += 1
		elif i == 'g':
			g += 1
		else:
			b += 1
	print(n-max([r,b,g]))			
```
## [CHRL1](https://www.codechef.com/problems/CHRL1)
```python
from itertools import combinations
for _ in range(int(input())):
    n,k = map(int,input().split())
    a = []
    b = []
    c = list(range(n))
    for _ in range(n):
        d,e = map(int,input().split())
        a.append(d)
        b.append(e)
    ans = 0    
    for r in range(1,n+1):
        x = combinations(c,r)
        for i in x:
            cost = 0
            weight = 0
            for j in i:
                cost += a[j]
                weight += b[j]
            if cost <= k and weight > ans:
                ans = weight
    print(ans)            
```
## [SUMTRIAN](https://www.codechef.com/problems/SUMTRIAN)
```python
for _ in range(int(input())):
    n = int(input())
    a = []
    for _ in range(n):
        a.append(list(map(int,input().split())))
    for i in range(n-1,0,-1):
        for j in range(i):
            a[i-1][j] += max(a[i][j],a[i][j+1])
    print(a[0][0])	    
```
## [COINS](https://www.codechef.com/problems/COINS)
```python
d = {}
def coins(n):
    if n <= 11:
        return n
    elif n in d:
        return d[n]
    x =  max(coins(n//2)+coins(n//3)+coins(n//4),n)
    d[n] = x
    return x
while True:
    try:
        print(coins(int(input())))
    except:
        break
```
## [PERMEXIS](https://www.codechef.com/problems/PERMEXIS)
```python
for _ in range(int(input())):
    n = int(input())
    a = sorted(list(map(int,input().split())))
    for i in range(n-1):
        if a[i+1]-a[i] > 1:
            print('NO')
            break
    else:
        print('YES')
```
## [TTENIS](https://www.codechef.com/problems/TTENIS)
```python
for _ in range(int(input())):
    s = list(input())
    s = [int(j) for j in s]
    a = 0
    b = 0
    for i in s:
        if i == 1:
            a += 1
        else:
            b += 1
        if max(a,b) >= 11 and abs(a - b) >= 2:
            break
    if a>b:
        print('WIN')
    else:
        print('LOSE')         
```
## [STICKS](https://www.codechef.com/problems/STICKS)
```python
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort(reverse=True)
    ans1 = 0
    ans2 = 0
    i = 0
    while i < n-1:
        if ans1 == 0:
            if a[i] == a[i+1]:
                ans1 = a[i]
                i += 1
        else:
            if a[i] == a[i+1]:
                ans2 = a[i]
                break
        i += 1    
    else:
        print(-1)
        continue
    print(ans1*ans2)
```
## [PPSUM](https://www.codechef.com/problems/PPSUM)
```python
for _ in range(int(input())):
    d,n = map(int,input().split())
    ans = n
    for _ in range(d):
        ans = sum(list(range(ans+1)))
    print(ans)    
```
## [KTTABLE](https://www.codechef.com/problems/KTTABLE)
```python
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    ans = 0
    if a[0] >= b[0]:
        ans += 1
    for i in range(1,n):
        if a[i]-a[i-1] >= b[i]:
            ans += 1
    print(ans)        
```
## [MSTEP](https://www.codechef.com/problems/MSTEP)
```python
for _ in range(int(input())):
    n = int(input())
    d = {}
    for i in range(n):
        a = list(map(int,input().split()))
        for j in range(n):
            d[a[j]] = [i,j]
    ans = 0
    for i in range(2,n*n+1):
        a = d[i-1]
        b = d[i]
        ans += abs(a[0]-b[0])+abs(a[1]-b[1])
    print(ans)
```
## [ONP](https://www.codechef.com/problems/ONP)
```python
oper = '+-*^/'
alph = 'abcdefghijklmnopqrstuvwxyz'
for _ in range(int(input())):
    s = input()
    a,b = [],[]
    for i in s:
        if i in oper:
            b.append(i)
        elif i in alph:
            a.append(i)
        elif i == ')':
            a.append(b.pop())
    print("".join(a))        
```
## [VCS](https://www.codechef.com/problems/VCS)
```python
for _ in range(int(input())):
    n,m,k = map(int,input().split())
    a = set(map(int,input().split()))
    b = set(map(int,input().split()))
    x = len(a&b)
    y = n-len(a|b)
    print(x,y)
    
```
## [CHRL2](https://www.codechef.com/problems/CHRL2)
```python
a = [0,0,0,0]
s = input().lower()
for i in s:
        if i == 'c': a[0] += 1
        elif i == 'h': a[1] = min(a[0], a[1]+1)
        elif i == 'e': a[2] = min(a[1], a[2]+1)
        else: a[3] = min(a[2], a[3]+1)
print(a[-1]) 
```
## [BPTGH](https://www.codechef.com/problems/BPTGH)
```python
def bipartite(adj_list,color,c,s):
	color[s] = c
	for i in adj_list[s]:
		if color[i] == c:
			return False
		elif color[i] == -1:
			if not bipartite(adj_list,color,(c+1)%2,i):
				return False		
	return True	
n,m = map(int,input().split())
a = []	
for _ in range(n):
	a.append([])
for _ in range(m):
	x,y = map(int,input().split())
	x -= 1
	y -= 1
	a[x].append(y)
	a[y].append(x)	
col = [-1]*n
for i in range(n):
	if col[i] == -1:
		if not bipartite(a,col,0,i):
			print("NO")
			break
else:
	print("YES")			
		
```
## [BRACKETS](https://www.codechef.com/problems/BRACKETS)
```python
for _ in range(int(input())):
	s = input()
	max_b = 0
	b = 0
	for i in s:
		if i == '(':
			b += 1
		else:
			b -= 1
		max_b = max(max_b,b)
	print(("("*max_b)+(")"*max_b))			
```
## [FLOW015](https://www.codechef.com/problems/FLOW015)
```python
w = {
	3:'monday',4:'tuesday',5:'wednesday',6:'thursday',0:'friday',1:'saturday',2:'sunday'
}
leap = [0]*26000
for i in range(1904,26000,4):
    if i%100 != 0 or i%400 == 0: 
	    leap[i] = 1
for _ in range(int(input())):
	n = int(input())
	y = n
	for i in range(1904,y,4):
		if leap[i]:
			n += 1
	print(w[n%7])	
```
## [RRJOKE](https://www.codechef.com/problems/RRJOKE)
```python
for _ in range(int(input())):
	n = int(input())
	ans = 0
	for i in range(1,n+1):
		input()
		ans ^= i
	print(ans)	
		
```
## [TWEED](https://www.codechef.com/problems/TWEED)
```python
for i in range(int(input())):
	x = input().split()
	n = int(x[0])
	first = x[1]
	a = [int(i) for i in input().split()]
	if n == 1 and first == "Dee" and (a[0])%2 == 0:
		print("Dee")
	else:
		print("Dum")	
```
## [CHEFSETC](https://www.codechef.com/problems/CHEFSETC)
```python
from itertools import combinations
for _ in range(int(input())):
	a = list(map(int,input().split()))
	x = []
	x.extend(list(combinations(a,2)))
	x.extend(list(combinations(a,3)))
	f = False
	for i in x:
		if not sum(i):
			f = True
	if 0 in a or sum(a) == 0 or f:
		print("Yes")
	else:
		print("No")	
```
## [SUMALPHA](https://www.codechef.com/problems/SUMALPHA)
```python
for _ in range(int(input())):
	s = input().lower()
	ans  = 0
	for i in s:
		ans += (ord(i)-97)%5
	print(ans)   
```
## [SUMALPHA](https://www.codechef.com/problems/SUMALPHA)
```python
for _ in range(int(input())):
	s = input().lower()
	ans  = 0
	for i in s:
		ans += (ord(i)-97)%5
	print(ans)   
```
## [DISTINCT](https://www.codechef.com/problems/DISTINCT)
```python
for _ in range(int(input())):
	n = int(input())
	a = []
	for _ in range(n):
		a.append(input())
	print(len(list(set(a))))    
	for i in sorted(list(set(a))):
		print(i) 
```
## [GGSQR](https://www.codechef.com/problems/GGSQR)
```python
for _ in range(int(input())):
	n = int(input())
	print(n*n)
```
## [GGBUNNY](https://www.codechef.com/problems/GGBUNNY)
```python
def valid(n,k):
    x = n
    while x > 1:
        if x%k:
            return False
        x //= k    
    return x == 1
for _ in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    ans = 0
    for i in a:
        if valid(i,k):
            ans += 1
    print(ans)        
```
## [GGBHAI](https://www.codechef.com/problems/GGBHAI)
```python
from collections import deque
for _ in range(int(input())):
    n,m = map(int,input().split())
    adj = []
    dist = []
    vis = []
    for i in range(n+1):
        adj.append([])
        dist.append(1000000)
        vis.append(False)
    for _ in range(n-1):
        x,y = map(int,input().split())
        adj[x].append(y)
    a = list(map(int,input().split()))   
    q = deque([])    
    q.append(1)
    dist[1] = 0
    vis[1] = True
    while q:
        u = q.popleft()
        for i in adj[u]:
            if not vis[i]:
                dist[i] = 1+dist[u]
                vis[i] = True
                q.append(i)
    ans = 0
    for i in a:
        ans += dist[i]
    ans *= 2
    ans /= m
    print("%.6f"%ans)
```
## [GGCURR](https://www.codechef.com/problems/GGCURR)
```python
for _ in range(int(input())):
    pos = []
    n,a,b = map(int,input().split())
    s = list(map(int,input().split()))
    ans = 0
    m = max(s)
    for i in range(m+1):
        pos.append(0)
    pos[0] = 1
    for i in range(a,m+1,a):
        pos[i] = 1
    for i in range(0,m+1):
        if i+b > m:
            break
        if pos[i]:
            pos[i+b] = 1
    for i in s:
        if pos[i]:
            ans += 1
    print(ans,n-ans)        
```
## [CHOCOLAT](https://www.codechef.com/problems/CHOCOLAT)
```python
for _ in range(int(input())):
	n,m = map(int,input().split())
	if n > m:
		print("Bipin",n-m)
	elif m > n:
		print("Balaji",m-n)
	else:
		print("No Winner")		
```
## [DWNLD](https://www.codechef.com/problems/DWNLD)
```python
for _ in range(int(input())):
    n,k = map(int,input().split())
    ans = 0
    for _ in range(n):
        x,y = map(int,input().split())
        if k >= x:
            k -= x
        elif k > 0:
            x -= k
            k = 0
            ans += x*y
        else:
            ans += x*y
    print(ans)        
```
## [COOKGAME](https://www.codechef.com/problems/COOKGAME)
```python
def fast_exp(k):
    if k == 0:
        return 1
    elif k == 1:
        return 2
    elif k%2 == 0:
        x = fast_exp(k//2)%1000000007
        return (x*x)%1000000007
    else:
        x = fast_exp(k//2)%1000000007
        return (2*x*x)%1000000007
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    f = True
    k = 0
    # if -1 not in a:
    #     print(0)
    #     continue
    if a[0] == -1:
        a[0] = 1
    elif a[0] > 1:
        f = False
    for i in range(n-1,0,-1):
        if a[i] <= 1:
            continue
        elif a[i] != 1:
            if a[i-1] != a[i]-1 and a[i-1] != -1:
                f = False
                continue
            elif a[i-1] == -1:
                a[i-1] = a[i] - 1
    if a[0] > 1:
        f = False
    if not f:
        print(0)
    else:
        print(fast_exp(a.count(-1)))
```
## [RNUM](https://www.codechef.com/problems/RNUM)
```python
from math import ceil 

for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = []
    a.sort()
    l = a[0]
    r = a[0]
    for i in range(1,len(a)):
        if a[i] == 1+a[i-1]:
            r = a[i]
        else:
            b.append(r-l+1)
            l = a[i]
            r = a[i]
    b.append(r-l+1)
    mn = 0
    mx = 0
    for i in b:
        mn += ceil(i/3)
        mx += ceil(i/2)
    print(mn,mx)    
```
## [DIVNINE](https://www.codechef.com/problems/DIVNINE)
```python
for _ in range(int(input())):
    s = input()
    ans = 0
    for i in s:
        ans += int(i)
    if ans < 9 and len(s) > 1:
        print(9-ans)
    else:
        ans %= 9
        print(min(9-ans,ans))
    
```
## [KGOOD](https://www.codechef.com/problems/KGOOD)
```python
for _ in range(int(input())):
    s = input().split()
    s,k = s
    n = len(s)
    k = int(k)
    a = [0]*26
    ans = n
    for i in s:
        a[ord(i)-97] += 1
    for j in a:
        m = j
        cur = 0
        for i in a:
            if i < m:
                cur += i
            elif i > (m+k):
                cur += i - (m+k)
        ans = min(ans,cur)
    print(ans)    
```
## [MMSUM](https://www.codechef.com/problems/MMSUM)
```python
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    s = [0]*n
    e = [0]*n
    e[0] = a[0]
    for i in range(1,n):
        e[i] = max(e[i-1]+a[i],a[i])
    s[-1] = a[-1]
    for i in range(n-2,-1,-1):
        s[i] = max(s[i+1]+a[i],a[i])
    ans = max(e)
    ans = max(ans,max(s))
    for i in range(1,n-1):
        ans = max(ans,e[i-1]+s[i+1])
    print(ans)    
```
## [MAKEART](https://www.codechef.com/problems/MAKEART)
```python
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    for i in range(n-2):
        if a[i] == a[i+1] == a[i+2]:
            print('Yes')
            break
    else:
        print('No')
```
## [NDIFFPAL](https://www.codechef.com/problems/NDIFFPAL)
```python
for _ in range(int(input())):
    n = int(input())
    a = 'abc'
    for i in range(n):
        print(a[i%3],end='')
    print('')    
```
## [GIVCANDY](https://www.codechef.com/problems/GIVCANDY)
```python
from fractions import gcd

for _ in range(int(input())):
    a,b,c,d = map(int,input().split())
    g = gcd(c,d)
    x = abs(a-b)
    print(min(x%g,g-(x%g)))
```
## [OVERPNT](https://www.codechef.com/problems/OVERPNT)
```python
p = 2**16
a = [[0,0],[0,1],[1,0],[1,1],[3,2],[4,2],[2,3],[2,4],[3,9],[9,3]]
n = int(input())
for i in range(n):
    print(a[i][0]*p,a[i][1]*p)
```
## [NUMBERS](https://www.codechef.com/problems/NUMBERS)
```python
for _ in range(int(input())):
    n = int(input())
    a = {}
    b = {}
    c = {}
    for _ in range(n):
        x,y = input().split()
        y = int(y)
        a[x] = y
        b[y] = x
        try:
            c[y] += 1
        except:
            c[y] = 1
    ans = 1000000000000000000
    for i in c:
        if c[i] == 1:
            ans = min(ans,i)
    if ans == 1000000000000000000:
        print("Nobody wins.")
    else:
        print(b[ans])
    
```
## [XORPRO](https://www.codechef.com/problems/XORPRO)
```python
from math import ceil,floor

for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    a.sort()
    sum = 0
    for i in a:
        sum ^= i
    ans = 10000000000000
    for i in a:
        ans = min(ans,abs(i-(sum^i)))
    print(ans)    
```
## [VCAKE](https://www.codechef.com/problems/VCAKE)
```python
def solve(n,m,a,b,c):
    if a+b+c != n*m:
        return False
    if (a%n == b%n == c%n == 0) or (a%m == b%m == c%m == 0):
        return True
    
    if a%m == 0 and b%(n-(a//m)) == 0:
        return True
    if b%m == 0 and a%(n-(b//m)) == 0:
        return True    
    if c%m == 0 and b%(n-(c//m)) == 0:
        return True    
    
    m,n = n,m
    
    if a%m == 0 and b%(n-(a//m)) == 0:
        return True
    if b%m == 0 and a%(n-(b//m)) == 0:
        return True    
    if c%m == 0 and b%(n-(c//m)) == 0:
        return True
    
    return False    

for _ in range(int(input())):
    a1,a2,a3,a4,a5 = map(int,input().split())
    if solve(a1,a2,a3,a4,a5):
        print("Yes")
    else:
        print("No")

```
## [RESN04](https://www.codechef.com/problems/RESN04)
```python
for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    ans = 0
    for i in range(n):
        ans += a[i]//(i+1)
    if ans%2 == 0:
        print("BOB")
    else:
        print("ALICE")
```
## [MMPROD](https://www.codechef.com/problems/MMPROD)
```python
MOD = 1000000007

def sigma(x):
    if x == 0:
        return 0
    if x < 0:
        return -1
    return 1    

for _ in range(int(input())):
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    a.sort(key = lambda x: abs(x))
    
    neg = 0
    zer = False
    for i in range(n-k,n):
        if a[i] < 0:
            neg += 1
        if a[i] == 0:
            zer  = True
    
    if zer or neg%2 == 0:
        ans = 1
        for i in range(n-k,n):
            ans *= a[i]
            ans %= MOD
        print(ans)
    else:
        i1 = i2 = j1 = j2 = 'abc'
        for i in range(n-k,n):
            if a[i] >= 0:
                i1 = i
                break
        for i in range(n-k,n):
            if a[i] < 0:
                j1 = i
                break  
        for i in range(n-k-1,-1,-1):
            if a[i] < 0:
                i2 = i
                break  
        for i in range(n-k-1,-1,-1):
            if a[i] >= 0:
                j2 = i
                break      
        ans = []
        if i2 != 'abc' and i1 != 'abc':
            cur = 1
            for i in range(n-k,n):
                if i != i1:
                    cur *= a[i]
                    cur %= MOD
            cur *= a[i2]        
            ans.append(cur%MOD)
        if j2 != 'abc' and j1 != 'abc':
            cur = 1
            for i in range(n-k,n):
                if i != j1:
                    cur *= a[i]
                    cur %= MOD
            cur *= a[j2]        
            ans.append(cur%MOD)
        if ans:
            if len(ans) == 1:
                print(ans[0])
            else:
                if a[i2]/a[i1] < a[j2]/a[j1]:
                    print(ans[0])
                else:
                    print(ans[1])
        else:
            ans = 1
            for i in range(k):
                ans *= a[i]
                ans %= MOD
            print(ans)    
```
## [ARITHM](https://www.codechef.com/problems/ARITHM)
```python
def cond1(n,c):
    c -= (n*(n-1))//2
    return (c > 0 and c%n == 0)
def cond2(n,c):
    c -= (n*(n-1))
    return (c > 0 and c%n == 0)    

for _ in range(int(input())):
    n,c = map(int,input().split())
    if cond1(n,c) or cond2(n,c):
        print("Yes")
    else:
        print("No")
```
## [TEAMFORM](https://www.codechef.com/problems/TEAMFORM)
```python
for _ in range(int(input())):
    n,m = map(int,input().split())
    for _ in range(m):
        input()
    if n%2 == 0:
        print("yes")
    else:
        print("no")
```
## [SAMESNAK](https://www.codechef.com/problems/SAMESNAK)
```python
def intersection(a,b,c,d):
    a,b = min(a,b),max(a,b)
    c,d = min(c,d),max(c,d)
    if a >= c and a <= d:
        return True
    if b >= c and b <= d:
        return True
    if c >= a and c <= b:
        return True
    return False    
 
for _ in range(int(input())):
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    if (a[0] == b[0] and a[1] == b[1]) or (a[2] == b[2] and a[3] == b[3]):
        print("yes")
    elif (a[0] == b[0] and a[2] == b[2]) and intersection(a[1],a[3],b[1],b[3]):
        print("yes")
    elif (a[1] == b[1] and a[3] == b[3]) and intersection(a[0],a[2],b[0],b[2]):
        print("yes")
    else:
        a = [a[2],a[3],a[0],a[1]]
        if (a[0] == b[0] and a[1] == b[1]) or (a[2] == b[2] and a[3] == b[3]):
            print("yes")
        elif (a[0] == b[0] and a[2] == b[2]) and intersection(a[1],a[3],b[1],b[3]):
            print("yes")
        elif (a[1] == b[1] and a[3] == b[3]) and intersection(a[0],a[2],b[0],b[2]):
            print("yes")
        else:
            print("no")
```
## [TACHSTCK](https://www.codechef.com/problems/TACHSTCK)
```python
n,d = map(int,input().split())

a = [int(input()) for _ in range(n)]

a.sort()

i = 0
ans = 0

while i < n-1:
    if a[i+1]-a[i] <= d:
        ans += 1
        i += 2
    else:
        i += 1
print(ans)        
```
## [VOGOZO](https://www.codechef.com/problems/VOGOZO)
```python
n,k = map(int,input().split())
a = list(map(int,input().split()))
a.sort()
ans = 1
cur = a[0]
for i in range(1,n):
	if a[i] >= cur+k:
		ans += 1
		cur = a[i]
print(ans)		
```
## [ADACRA](https://www.codechef.com/problems/ADACRA)
```python
def list_input():
    return list(map(int,input().split()))
def map_input():
    return map(int,input().split())
def map_string():
    return input().split()
    
for i in range(int(input())):
    s = input()
    n = len(s)
    ans1 = 0
    ans2 = 0
    total = 1
    for i in range(1,n):
        if s[i] != s[i-1]:
            total += 1
    print(total//2)        
```
## [SNACKUP](https://www.codechef.com/problems/SNACKUP)
```python
for i in range(int(input())):
    n = int(input())
    print(n)
    for i in range(n):
        print(n)
        start = i
        for j in range(1,n+1):
            print(j,(start%n)+1,end=' ')
            start += 1
            print((start%n)+1)
```
## [CHNGOR](https://www.codechef.com/problems/CHNGOR)
```python
def list_input():
    return list(map(int,input().split()))
def map_input():
    return map(int,input().split())
def map_string():
    return input().split()
    
for _ in range(int(input())):    
    n = int(input())    
    a = list_input()
    ans = 0
    for i in a:
        ans |= i
    print(ans)    
```
## [CHNGFUNC](https://www.codechef.com/problems/CHNGFUNC)
```python
def list_input():
    return list(map(int,input().split()))
def map_input():
    return map(int,input().split())
def map_string():
    return input().split()
    
x,y = map_input()
ans = 0
for i in range(1,x+1):
    j = i+1
    while True:
        if (j*j)-(i*i) > y:
            break
        else:
            j += 1
            ans += 1
print(ans)            
```
## [WEIRD](https://www.codechef.com/problems/WEIRD)
```python
for _ in range(int(input())):
	a,b = map(int,input().split())
	if (a == b or (a%2 == 0 and b%2 == 0 and abs(a-b) == 2)):
		print('Hodor')
	else:
		print('Bran')	
```
## [PRJR16B](https://www.codechef.com/problems/PRJR16B)
```python
for _ in range(int(input())):    
    s = int(input())    
    ans1 = 0
    low = 0
    high = 1000000000000
    while low <= high:
        mid = (low+high)//2
        if (mid)*(mid+1)//2 >= s+1:
            high = mid-1
            ans1 = mid
        else:
            low = mid+1
            
    ans2 = 0
    low = 0
    high = 1000000000000
    while low <= high:
        mid = (low+high)//2
        if (mid)*(mid+1)//2 <= s-1+2*mid:
            low = mid+1
            ans2 = mid
        else:
            high = mid-1
    ans = int(1e13)        
    for i in range(ans1,ans2+1):
        cur = (i)*(i+1)//2 - s
        if cur == 1:
            ans = min(ans,1)
        elif cur%2 == 1:
            ans = min(ans,cur//2)   
        elif cur == i:
            ans = min(ans,i)
    if ans == int(1e13):
        print(-1)
    else:
        print(ans)
```
## [AOU](https://www.codechef.com/problems/AOU)
```python
def s(n):
    c=0
    i=3
    while n%2==0:
        n//=2
        c+=1
    while i*i<=n:
        while n%i==0:
            n/=i
            c+=1
        i+=1
    return c+int(n!=1)    
for _ in range(int(input())):print(s(int(input())))
```
## [WOLVXR](https://www.codechef.com/problems/WOLVXR)
```python
def s(n):return int(n==1)    
for _ in range(int(input())):print(s(int(input())))
```
## [CHEFPOT](https://www.codechef.com/problems/CHEFPOT)
```python
for _ in range(int(input())):
	n,k = map(int,input().split())
	a = list(map(int,input().split()))
	ans = 42*(n-1)
	ans += k*(max(a)-min(a))
	print(ans)
```
## [PEWPEW](https://www.codechef.com/problems/PEWPEW)
```python
for _ in range(int(input())): print(1)
```
## [ICPC16B](https://www.codechef.com/problems/ICPC16B)
```python
for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	b = [int(i) for i in a if int(i) != 0 and int(i) != 1]
	if len(b) <= 1 or (a.count(1) and a.count(0)+a.count(1)+a.count(-1) == n): print("yes")
	else: print("no")    
```
## [ICPC16C](https://www.codechef.com/problems/ICPC16C)
```python
for _ in range(int(input())):
	n = int(input())
	print((n%9)+1) 
```
## [KGP16H](https://www.codechef.com/problems/KGP16H)
```python
def list_input():
    return list(map(int,input().split()))
def map_input():
    return map(int,input().split())
def map_string():
    return input().split()
    
for _ in range(int(input())):    
    n = int(input())    
    cost = list_input()
    tax = list_input()
    pol = list_input()
    ans = cost[0]
    cur = ans
    for i in range(n-1):
        cur += cost[i+1]
        cur -= tax[i]*pol[i]
        ans = max(ans,cur)
    print(ans)    
```
## [MATDYS](https://www.codechef.com/problems/MATDYS)
```python
for _ in range(int(input())):
  n,k = map(int,input().split())
  ans = 0
  for i in range(n):
    if(k&(1<<(n-i-1))): ans |= (1<<i)
  print(ans)  
```













