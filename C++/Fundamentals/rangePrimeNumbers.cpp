#include <iostream>
using namespace std;
// 9 ===> 2 3 5 7
void printPrimeNumbers(int range)
{

    for (int i = 2; i <= range; i++)
    {
        if (i == 2)
        {
            cout << i << endl;
            continue;
        }

        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{

    int range;
    cin >> range;
    printPrimeNumbers(range);
