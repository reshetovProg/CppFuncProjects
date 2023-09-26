#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    float num, d1, d2;
    cout << "input number: ";
    cin >> num;
    cout << "input rabge: ";
    cin >> d1 >> d2;
    if (d1>d2) swap(d1, d2);
    //реализация определения принадлежности диапазону
    //с использованием дизъюнкции
    if (num > d2 || num < d1) 
        cout << num <<" is not in range ["<<d1<<";"<<d2<<"]";
    else 
        cout << num << " is in range [" << d1 << ";" << d2 << "]";
    cout << endl;
    //реализация определения принадлежности диапазону
    //с использованием конъюнкции
    if (num >= d1 && num <= d2)
        cout << num << " is not in range [" << d1 << ";" << d2 << "]";
    else
        cout << num << " is in range [" << d1 << ";" << d2 << "]";



}

