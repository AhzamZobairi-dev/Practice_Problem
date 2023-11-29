/*
Write a program to find the second largest element of an array without
changing it and also print the array.
*/

#include <iostream>
using namespace std;

#define SIZE 6
int main()
{
    int arr[SIZE], max, sec_max;

    cout << "Enter the Element of Array : ";
    for(int i=0; i<SIZE; ++i)
    {
        cin >> arr[i]; 
    }

    max = sec_max = arr[0];

    for(int i=0; i<SIZE; ++i)
    {
        if(arr[i]>max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if(arr[i]>sec_max && arr[i]<max)
        {
            sec_max = max;
        }
    }

    cout << "The Second Element of Array : " << sec_max <<endl;
    cout << "The Elements of Array is : ";
    for(int i=0; i<SIZE; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
