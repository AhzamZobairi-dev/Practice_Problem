/*
Write a program to find leap year
*/

#include <iostream>
using namespace std;

int main()
{
    int year; 
    cout << "Enter Year : " ;
    cin >> year;

    if ( (year % 4 ==0 && year % 100 !=0) || (year % 400 == 0))
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not Leap Year" << endl;
    }

    return 0;
}



/*
NOTE -- just checking if year is divisible by 4 is not enough as

    Some criteria to follow for determining leap year is
    1. Divisible by 4 -- generally a year is divided evenly by 4 is leap year
    2. Divisible by 100 and Divisible by 400 -- This is applicable for only century year
       i.e 100, 200 , 300, .... , 1800, 1900, 2000, .. so on
       Any century year that is evenly divisible by 100 as well as evenly divisible by 400 only then
       it is a leap year
    So if a year is divisible by 100 but not 400 is not a leap year

    for ex -
    1224 -- since it is not a century year and checking its divisiblity by 4 would be enough -- LEAP YEAR
    1000 -- a century year; evenly divisible by 4; evenly divisible by 100 but not with 400  -- NOT LEAP YEAR
    2000 -- a century year; evenly divisible by 4; evenly divisible by 100 and 400  -- LEAP YEAR

 
DETAILED IF ELSE LOGIC
    if (year % 4 == 0) 
    {
        if (year % 100 == 0) 
        {
            // the year is a leap year if it is divisible by 400.
            if (year % 400 == 0)
                printf("%d is a leap year.", year);
            else
                printf("%d is not a leap year.", year);
        }
        else
            printf("%d is a leap year.", year);
    }
    else
        printf("%d is not a leap year.", year);
*/

