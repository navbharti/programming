#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
   printf("%d %d %d %d\n", x[0], x[1], x[2], x[3]);
   x[0] = 1; 
   x[1] = 2; 
   printf("%d %d %d %d\n", x[0], x[1], x[2], x[3]);
   printf("%p %p %p\n",x, &x[0], &x[1]);
   printf("%d\n",a);   
   printf("Size of int : %ld\n", sizeof(a));
   return 0; 
}
