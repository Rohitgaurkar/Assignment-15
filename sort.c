#include<stdio.h>
void sort(int [],int);
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,10};

    sort(a,10);
    return 0;
}
void sort(int b[], int size)
{
    int i,j,swap;
    for(i=0; i<9; i++)
    {
      for(j=i+1;j<10;j++)
      {
          if(b[i]>b[j])
          {
              swap=b[i];
              b[i]=b[j];
              b[j]=swap;
          }
      }
    }
    for(i=0;i<10;i++)
        printf("%d ",b[i]);
}
