#include <iostream>
#include <Windows.h>

using namespace std;

string a;
int b = 100;
bool x = false;
int c = 100;
int d = 100;
int e = 100;

int main()
{
	cout << endl << "Please enter the key" << endl;
    cin >> a;
    if (a == "416734")
        cout << "You entered true key" << endl << "The code is: K" << b - 0 << endl;
    else
        cout << "You entered wrong key" << endl;
    system("pause");
    
    while (x == false) {
        Sleep(5000);
        c = rand() % 100;
        d = rand() % 100;
        e = rand() % 100;
        Sleep(100);
        system("cls");
        cout << "Numbers must be same." << endl;
        cout << "     " << c << " " << d << " " << e;
        cout << endl << "Please don't wait...";
        if (c == d && d == e) {	
            x = true;
        }
    }

}
