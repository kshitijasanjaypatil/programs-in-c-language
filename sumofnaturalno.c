#include<stdio.h>

int sumof(int n);
int main()
{
     int num,sum;
     printf("enter a positive integer:");
     scanf("%d",&num);
     printf("\nSum=%d",sumof(num));
     return 0;
}
int sumof(int n)
{
     return n*(n+1)/2;
}
