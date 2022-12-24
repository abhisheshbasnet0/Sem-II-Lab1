//Convert Nepali Rupees to US Dollar, Japanese yen and Pound Sterling using given values
#include <iostream>

using namespace std;

int main()
{
    float usd, nrs, pound, yen, onenrs;

    cout << "Enter amount in Nepali Rupees: ";
    cin >> nrs;
    cout << endl;

    onenrs = 1/132.41;
    usd = onenrs*nrs;
    pound = onenrs*0.89*nrs;
    yen = onenrs*148.24*nrs;

    cout << nrs << " is " << usd << " US Dollars" << endl;
    cout << nrs << " is " << pound << " Pound Sterling" << endl;
    cout << nrs << " is " << yen << " Japanese yen" << endl;

    return 0;
}
