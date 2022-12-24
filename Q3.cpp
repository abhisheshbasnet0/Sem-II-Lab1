//Convert temperature from Fahrenheit to Celsius and vice-versa

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    int choice;

    cout << "Choose the conversion:" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl << endl;

    cout << "Choice: ";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
    case 1:
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;

        celsius = (fahrenheit - 32) * 5/9.0;

        cout << fahrenheit << " F in Celsius is "  << fixed << setprecision(2) << celsius << endl;
        break;

    case 2:
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        fahrenheit = (celsius * 9/5.0) + 32;

        cout << celsius << "degree Celsius in Fahrenheit is " << fixed << setprecision(2) << fahrenheit << endl;
        break;

    default:
        cout << "ERROR 404" << endl;
    }
    return 0;
}
