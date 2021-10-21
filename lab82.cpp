//это вторая лаба
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    double A, B, Sum = 0;
    cout << "Введите длину отрезка А:" << endl;
    cin >> A;
    cout << "Введите длину отрезка В:" << endl;
    cin >> B;
    if (A > B) {
        while (A > B)
        {
            A -= B;
            Sum += 1;
        }
    }
    else {
        cout << "Ошибка";
    }
    cout << "Количество отрезков В, размещенных на отрезке А равно " << int(Sum);
    return 0;
}

