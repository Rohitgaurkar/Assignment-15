#include<stdio.h>
int max(int[], int);
int main()
{
    int a[10];

    printf("%d ",max(a,10));

    return 0;
}
int max(int b[],int n)
{
    int x=-1,i;
    printf("Enter a 10 number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
        if(x<b[i])
            x=b[i];

    }
    return x;
}
