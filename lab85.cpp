// lab85.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите число:"<<endl;
    cin >> a;
    b = a % 100;
    b *= 10;
    a /= 100;
    b += a;
    cout << "Ваше число наоборот:" << endl << b;
}