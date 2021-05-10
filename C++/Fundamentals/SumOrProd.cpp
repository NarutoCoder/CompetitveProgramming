#include <iostream>
using namespace std;

int main()
{
    int num, n;
    cin >> num >> n;

    if (n == 1)
    {

        int sum = 0;
        for (int i = 1; i <= num; i++)
        {
            sum += i;
        }

        cout << sum << endl;
    }
    else if (n == 2)
    {
        int prod = 1;
        for (int i = 1; i <= num; i++)
        {
            prod *= i;
        }

        cout << prod << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
