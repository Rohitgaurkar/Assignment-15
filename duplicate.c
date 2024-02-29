#include<stdio.h>
void sameNo(int [], int);
int main()
{
   int a[10]={4,1,4,8,5,9,1,2,3,10};
    sameNo(a,10);
    return 0;

}
void sameNo(int b[], int n)
{
    int i, j, count=0;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
            {
                if(b[i]==b[j])
                    count++;
            }
    }
    printf("%d ",count);
}
