// lab81.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    double x;
    cout << "Введите количество байт, занимаемых файлом:"<<endl;
    cin >> x;
    cout << "Количество полных кб, которые занимает файл: " << int(x / 1024);

    return 0;
}
