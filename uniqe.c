#include<stdio.h>
void uniqeNo(int [], int);
int main()
{
   int a[10]={4,5,6,8,5,4,1,2,3,9};
    uniqeNo(a,10);
    return 0;

}
void uniqeNo(int b[], int n)
{
    int i, j, count;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<10;j++)
        {
            if(i==j)
                continue;
            if(b[i]==b[j])
                count++;
        }
        if(count==0)
            printf("%d ",b[i]);
    }

}




