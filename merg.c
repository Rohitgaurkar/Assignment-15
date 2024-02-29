#include<stdio.h>
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,6,8,11,12};
    int c[10],i=0,j=0,r=0;

    for(r=0;r<10;r++)
    {
        if(i>=5)
        {
            while(r<10)
            {
                c[r]=b[j];
                j++;
                r++;
                if(r==10)
                    break;
            }

        }else if(a[i]<b[j])
        {
            c[r]=a[i];
            i++;
        }
        else
        {
            c[r]=b[j];
            j++;
        }
    }
    for(r=0;r<10;r++)
    {
        printf("%d ",c[r]);
    }

return 0;




}
