//Check whether the triangle is right-angled or not
#include <iostream>

using namespace std;

int main()
{
    int a[3], choice, d=0;
    float s[3];

    cout << "Enter how you want to find out:" << endl;
    cout << "1. Through angles" << endl;
    cout << "2. Through sides" << endl << endl;

    cout << "choice :";
    cin >> choice;
    cout << endl;

    switch(choice)
    {
    case 1:
        for(int i=0; i<3; i++)
        {
            cout << "Enter angle " << i+1 << ": ";
            cin >> a[i];

            if(a[i]==90){
                cout << endl;
                cout << "Right-angled" << endl;
                d++;
                break;
            }
        }
        if(d==0){
            cout << "Not right-angled";
        }
        cout << endl;
        break;

    case 2:
        for(int i=0; i<3; i++)
        {
            cout << "Enter side " << i+1 << ": ";
            cin >> s[i];

            s[i]*=s[i];
        }

        if(s[0]==s[1]+s[2] || s[1]==s[0]+s[2] || s[2]==s[0]+s[1])
        {
            cout << "Right-angled" << endl;
        }
        else{
            cout << "Not right-angled" << endl;
        }
        break;
    }
    return 0;
}
