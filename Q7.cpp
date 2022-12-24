//Sum of remainders of modular division of numbers from 1 to 9 by 2
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, mod;

    for(int i=1; i<10; i++)
    {
        mod = i%2;
        sum+=mod;
    }

    cout << "The sum is " << sum << endl;
    return 0;
}
