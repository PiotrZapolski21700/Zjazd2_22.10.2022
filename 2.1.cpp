#include <iostream>

using namespace std;

int main()
{
    int a;
    int total = 0;

    cout << "Podaj liczbe: ";
    cin >> a;

    for(int i = 1; i <= a; i++) {
        for(int n = 1; n <= i; n++){
            total += n;
        }
    }

    cout << "Suma szeregu: " << total;

    return 0;
}