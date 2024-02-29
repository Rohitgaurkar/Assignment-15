#include<stdio.h>
void revers(int[],int);
int main()
{
    int a[10];
    revers(a,10);
    return 0;
}
void revers(int b[],int n)
{
    int i;
    printf("Enter a ten number:");
    for(i=0;i<10;i++)
        scanf("%d",&b[i]);
    printf("\t \t*************\n");
    for(i=9;i>=0;i--)
    printf("%d ",b[i]);
}
