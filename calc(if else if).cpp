#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a;
    cin >> a;
    if (a == 0) {
        cout << "0";
    }
    else if (a > 0) {
        a = 89;
    }
    else {
        a = 98;
    }
    

}

