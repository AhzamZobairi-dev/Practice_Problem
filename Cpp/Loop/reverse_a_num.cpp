#include <iostream>

using namespace std;

void reverse_a_num(int num)
{
    cout << "From function" << endl;
    int rev = 0, last = 0;
    while (num > 0)
    {
        rev *= 10;
        last = num % 10;
        rev = rev + last;
        num /= 10;
    }
    cout << "Reverse a Number : " << rev << endl;
}

int main()
{
    int num = 751;
//    cin >> num;

    int rev =0, last = 0 ;
    while(num > 9)
    {
        last = num % 10;
        rev = rev + last;
        rev = rev * 10;
        num/=10;
    }
    rev = rev + num; // Add the last digit
    cout << "Reversed Number: " << rev << endl;


    int tk = 9876;
    reverse_a_num(tk);
    return 0;
}