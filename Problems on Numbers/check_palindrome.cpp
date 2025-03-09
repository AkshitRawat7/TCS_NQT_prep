#include <iostream>

using namespace std;

bool checkPalindrome(int num)
{
    int reverse = 0;
    int n = num;

    while (num > 0)
    {
        int ld = num % 10; // last digit of the number

        reverse = (reverse * 10) + ld;

        num = num / 10;

    }
    if (n == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num = 121;

    if (checkPalindrome(num))
    {
        cout << "The number is Palindrome " << endl;
    }
    else
    {
        cout << "The number is not a Palindrome" << endl;
    }

    return 0;
}