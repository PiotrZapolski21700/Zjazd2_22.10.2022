
#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj liczby a i b" << endl;
    int a;
    int b;
    cin >> a;
    cin >> b;

    cout << "Pobrano liczby a == " << a << " oraz b == " << b << endl;

    cout << "Wiersz o d³ugoœci a:" << endl;

    for (int i = 0; i < a; i++)
    {
        cout << "*";
    }

    cout << endl;

    cout << "Kolumna o d³ugoœci b:" << endl;

    for (int i = 0; i < b; i++)
    {
        cout << "*" << endl;
    }

    cout << endl;

    cout << "Prostokat gwiazdek o wymiarach 'a' na 'b':" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int y = 0; y < b; y++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Obwod prostokatu o wymiarach 'a' na 'b':" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int y = 0; y < b; y++)
        {
            if (i == 0 || i == a-1)
            {
                cout << "*";
            }
            else
            {
                if (y == 0 || y == b-1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    cout << endl;

    cout << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu:" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int y = 0; y < i+1; y++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:" << endl;

    for (int i = a; i > 0; i--)
    {
        for (int y = a; y > 0; y--) {
            if (y > i) 
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
