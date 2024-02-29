#include<stdio.h>
int main()
{
    int a[15]={3,2,4,2,5,6,5,6,23,3,23,9,7,9,8};
    int freq[100]={0},i;

    for(i=0;i<15;i++)
    {
        freq[a[i]]++;
    }

    for(i=0;i<100;i++)
    {
        if(freq[i]!=0)
       printf("%d ==> %d\n",i,freq[i]);
    }
    return 0;








}
