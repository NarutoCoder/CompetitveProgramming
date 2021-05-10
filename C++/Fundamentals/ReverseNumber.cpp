#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int rev_num = 0;
    while (num)
    {

        int digit = num % 10;
        rev_num = rev_num * 10 + digit;

        num = num / 10;
    }

    cout << rev_num << endl;
}
