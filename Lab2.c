#include<stdio.h>
int main()
{
    int inp[10]={};
    int temp,temp2;
    printf("Enter 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&inp[i]);
    }
    for(int i=1;i<10;i++)
    {
        int j=i-1;
        temp=inp[i];
        while(j>=0)
        {
           if(temp<inp[j])
            {
                temp2=inp[j+1];
                inp[j+1]=inp[j];
                inp[j]=temp2;
           }
           j=j-1;
        }
    }
    printf("Sorted Array:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",inp[i]);
    }
    return 0;
}
