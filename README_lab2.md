<!--
NOTES:
This README is an example README for CS332/532 lab#2.-->

# Compilation Instructions

<!--Start of the code-->
#include<stdio.h>
<!--Main Function-->
int main()
{
    <!--Variable Declaration-->
    int inp[10]={};
    int temp,temp2;
    <!--It will ask user to enter input-->
    printf("Enter 10 array elements\n");
    <!--To read input-->
    for(int i=0;i<10;i++)
    {
        scanf("%d",&inp[i]);
    }
    <!--Insertion Sort Logic-->
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
<!--To print the output-->
    printf("Sorted Array:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",inp[i]);
    }
    return 0;
}
<!--End of the code-->

Compile the code and it will ask you for 10 array elements as input.
Provide 10 integers and press enter button.
Based on the input given, it will sort the array using insertion sort algorithm and prints the Sorted Array as output.

# My Files
## Lab2.c

# Output screenshots
![Alt text](image-3.png)

Githun Repository Link:
