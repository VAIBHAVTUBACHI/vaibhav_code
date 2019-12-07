/* program to swap two values using functions */
#include<stdio.h>
void swap(int *x ,int *y);
int main()
{
   int a=10,b=20;
   swap(&a,&b); //values passed by reference
   
 }
 /* swap fuction using pass by reference */
 void swap(int *x ,int *y)
 {
   int temp=0;
   temp=*x;
   *x=*y;
   *y=temp;
   printf("swapped values of a=%d and b=%d\n ",*x,*y);
 }
