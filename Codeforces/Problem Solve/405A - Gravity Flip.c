#include<stdio.h>
int main()
{
    int t,i,j,temp;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
