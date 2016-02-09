
#include<stdio.h>
 
int main()
{
   int a, b, c;
 
   printf("Enter two numbers to division\n");
   scanf("%d%d",&a,&b);
 
   c = a % b;
 
   printf("Sum of entered numbers = %d\n",c);
 
   return 0;
}
