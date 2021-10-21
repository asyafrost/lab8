

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите число:"<<endl;
    cin >> a;
    b = a % 10;
    a = a / 10;
    b = b * 10 + a;
    cout << "Ваше число наоборот:"<<endl<<b;
}
