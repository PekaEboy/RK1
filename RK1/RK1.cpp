#include <iostream>
#include <Windows.h>
#include <locale>
// Вариант 5
using namespace std;

int main()
{

    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите число: ";
    cin >> n;
    int LEN = 1;
    while (pow(10, LEN) <= n) {
        LEN++;
    }
    if (LEN % 2 != 0) {
        for (int i = 1; i <= LEN; i++) {

            if (i % 2 == 0) {
                cout << (n / (int)pow(10, LEN - i)) % 10;
            }
            else {
                cout << (n / (int)pow(10, i - 1)) % 10;
            }
        }
    }
    else {
        for (int i = 1; i <= LEN/2; i++) {

            if (i % 2 == 0) {
                cout << (n / (int)pow(10, LEN - i)) % 10;
            }
            else {
                cout << (n / (int)pow(10, i - 1)) % 10;
            }
        }
        for (int i = LEN / 2 +1; i <= LEN; i++) {

            if (i % 2 == 0) {
                cout << (n / (int)pow(10, i - 1)) % 10;
            }
            else {
                cout << (n / (int)pow(10, LEN - i)) % 10;
            }
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
