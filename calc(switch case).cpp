#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double num1, num2;
    char op;
    cout << "input numbers: ";
    cin >> num1 >> num2;
    cout << "input operation: ";
    cin >> op;
    switch (op) {
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1 * num2;
        break;
    case '/':
        if (num2 == 0) cout << "division by zero";
        else
            cout << num1 << "/" << num2 << "=" << num1 / num2;
        break;
    default:
        cout << "unnable operation";
    }


}

