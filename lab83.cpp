
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите длину отрезка А:" << endl;
    double A, B;
    cin >> A;
    cout << "Введите длину отрезка В: " << endl;
    cin >> B;
    if (A > B)
    {
        while (A > B) {
            A = A - B;
        }
        cout << "Незанятая часть равна " << A;
    }
    else {
        cout << "error";
    }
    return 0;
}
