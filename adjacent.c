#include<stdio.h>
int duplicate(int[],int);
int main()
{
    int a[5]={1,2,34,34,56};
    duplicate(a,5);
    printf("%d ",duplicate(a,5));
    return 0;
}
int duplicate(int b[],int n)
{

    int i;

    for(i=0;i<5;i++)
    {
        if(b[i]==b[i+1])
        {
               return b[i];
        }

    }

}

