#include<stdio.h>
int min(int[], int);
int main()
{
    int a[10];

    printf("%d ",min(a,10));

    return 0;
}
int min(int b[],int n)
{
    int i,x=b[0];
    printf("Enter a 10 number:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(x>b[i])
        {
            x=b[i];

        }


    }
    return x;
}
