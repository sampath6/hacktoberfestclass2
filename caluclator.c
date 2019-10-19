#include<stdio.h>
int product(int a,int b)
{
return a*b;

}
int diff(int a,int b)
{
return (a-b);
}
int sum(int a,int b)
{
return a+b;
}
int main()
{
int  a=5;b=2;
printf("product is %d\ndifference is %d\n%d is sum",product(a,b),diff(a,b),sum(a,b));
return 0;

}
