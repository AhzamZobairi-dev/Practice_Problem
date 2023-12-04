/*
Write a program to find the second largest element of an array without 
changing it and also print the array.
*/

#include <stdio.h>
#define SIZE 6

int main()
{
    int arr[SIZE], max, sec_max;

//taking Input of array
    printf("Enter the element of Array : ");
    for(int i=0; i<SIZE; ++i )
    {
        scanf("%d", &arr[i]);
    }

// Logic to find Second Largest Element of Array
    max = sec_max = arr[0];

    for (int i=0; i< SIZE; ++i)
    {
         if (arr[i]>max)
         {
            sec_max = max;
            max = arr[i];
         }
         else if (arr[i]> sec_max && arr[i]<max)       
         {
            sec_max = arr[i];
         }
    }
/*
In the above else-if condition && a[i]< max is needed to prevent the case 
when largest element occurs twice. 
    For ex 
    -- if input is 86 74 88 92 31 92 and check is else if (arr[i]> sec_max)
    -- for last element if condition fails as (arr[i]>max) (92 > 92) is false 
       and else-if is executed
    -- In else if (a[i]>sec_max) (92>88) is true & it got assined making sec_max=92  

Without the check ( && arr[i]< max)this second instance will be assigned to sec_max
variable but it is not technically the second largest number it is second instance 
of largest number

And if we use this -- else if(arr[i]>sec && arr[i]< max)
    -- when last element is euqted with (arr[i]>sec && arr[i]< max)
                                    i.e ( 92   > 88 &&  92 < 92 ) == (1&&0) 
    -- in else-f we get (1&&0) which is false. Hence there is not next assignment to
       this sec_max variable and it remains as 88 which is actual second largest element. 
*/
         

//Printing the entered array
    printf("The Second Element is : %d\n", sec_max);

    printf("Original Array is : ");
    for(int i=0; i<SIZE; ++i)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}