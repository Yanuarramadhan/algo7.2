#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int bil1, bil2, bil3;
    cout << "Bilangan 1: ";
    cin >> bil1;
    cout << "Bilangan 2: ";
    cin>> bil2;
    cout<< "Bilangan 3: ";
    cin >> bil3;

    if(bil1<bil2)
    {
        if(bil1 < bil2 )
        {
            cout << bil1 << " adalah nilai terkecil.";
        }
        else{
            if( bil3 < bil2 )
            {
                cout << bil3 << " adalah nilai terkecil.";
            }
        }
    }
    else{
        if(bil2 < bil3)
        {
            cout << bil2 << " adalah nilai terkecil.";

        }
        else{
            cout << bil3 << " adalah nilai terkecil.";
        }
    }
}
