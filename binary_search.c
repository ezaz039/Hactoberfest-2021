#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,data,upper_bound,lower_bound,middle;
    char choice='Y';

    printf("Enter number of elements to be filled in array : ");
    scanf("%d",&n);

    int *arr=(int*)malloc(n*sizeof(int));

    printf("Enter elements of array in ascending order\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    while(choice=='Y'||'y')
    {
        choice='N';
        printf("Enter element to search : ");
        scanf("%d",&data);

        upper_bound=n-1;
        lower_bound=0;
        middle=n/2;

        while(arr[middle]!=data&&lower_bound<=upper_bound)
        {
            if(data>arr[middle])
            {
                lower_bound=middle+1;
                middle=upper_bound+lower_bound;
            }
            else
            {
                upper_bound=middle-1;
                middle=upper_bound+lower_bound;
            }
        }
        if(arr[middle]==data)
        {
            printf("Element found at %d\n",middle);
        }
        else
        {
            printf("Element not found !\n");
        }

        fflush(stdin);

        printf("Press y to continue or press other keys to exit : ");
        scanf("%c",&choice);
    }

    return 0;
}
