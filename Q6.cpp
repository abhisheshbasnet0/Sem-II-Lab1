//Calculate number of possible arrangements for any number of people and any number of chairs when number of chair is always less than number of people
#include <iostream>

using namespace std;

int main()
{
    int people, chair, fact=1;

    cout << "Enter number of people: ";
    cin >> people;
    cout << "Enter number of chair: ";
    cin >> chair;
    cout << endl;

    for(int i=people; i>people-chair; i--)
    {
        arrangement*=i;
    }

    cout << "Total number of possible arrangements is " << arrangement << endl;

    return 0;
}
