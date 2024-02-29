#include<stdio.h>
int main()
{
    int a[5]={32, 29, 40, 12, 70};
     int i,tempt=0,j;
     for(j=0;j<2;j++)
     {
       tempt=a[0];
       for(i=0;i<4;i++)
       {
           a[i]=a[i+1];

       }
       a[4]=tempt;
     }
     for(i=0;i<5;i++)
        printf("%d ",a[i]);
     return 0;


}
