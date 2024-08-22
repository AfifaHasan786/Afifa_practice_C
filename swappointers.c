#include <stdio.h>
void swap(int*,int*);
int main() {
   int a,b;
   printf("Enter any two integers:");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("The two numbers are %d,%d",a,b);
  swap(&a,&b);
   printf("After swapping the numbers: %d,%d",a,b);
    return 0;
}
void swap(int*a,int*b){
 int n=*a;
   *a=*b;
   *b=n;
}
