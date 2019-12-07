/* sum of two numbers using functions */
#include<stdio.h>
int sum(int ,int );
int main()
{
  int res;
  int a,b;
  printf("enter the two numbers\n");
  scanf("%d%d",&a,&b);
  res=sum(a,b);                           //calling sum function to add two numbers
  printf("the sum is %d",res);
}
/*Function - sum of two number
  argument - int x and int y
  returns  - return sum of two numbers
*/
int sum(int x,int y)
{
  int z;
  z = x+y;
  return z;
}



