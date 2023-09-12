#include <iostream>
using namespace std;

int main()
{
    int a1 = INT32_MAX;
    int a2 = INT32_MIN;
    short a3 = SHRT_MAX;
    short a4 = SHRT_MIN;
    long long a5 = LLONG_MAX;
    long long a6 = LLONG_MIN;
    unsigned int a7 = 0;
    unsigned int a8 = UINT32_MAX;
    unsigned short a9 = USHRT_MAX;
    unsigned long long a10 = ULLONG_MAX;
    float a11 = FLT_MAX;
    float a12 = FLT_MIN;
    double a13 = DBL_MAX;
    double a14 = DBL_MIN;
    char a15 = 0;
    char a16 = 255;
    bool a17 = 0;
    bool a18 = 1;
    cout << "type\t\t|byte\t|min\t\t\t|max\n";
    cout << "int\t\t|"<<sizeof(a1)<<"\t|"<<a1<<"\t\t|"<<a2<<"\n";
    cout << "long\t\t|" << sizeof(a5) << "\t|" << a5 << "\t|" << a6 << "\n";
    cout << "short\t\t|" << sizeof(a3) << "\t|" << a3 << "\t\t\t|" << a4 << "\n";
    cout << "unsigned int\t|" << sizeof(a7) << "\t|" << a7 << "\t\t\t|" << a8 << "\n";
    cout << "unsigned short\t|" << sizeof(a9) << "\t|" << a7 << "\t\t\t|" << a9 << "\n";
    cout << "unsigned ll\t|" << sizeof(a10) << "\t|" << a7 << "\t\t\t|" << a10 << "\n";
    cout << "float\t\t|" << sizeof(a11) << "\t|" << a12 << "\t\t|" << a11 << "\n";
    cout << "double\t\t|" << sizeof(a13) << "\t|" << a14 << "\t\t|" << a13 << "\n";
    cout << "char\t\t|" << sizeof(a15) << "\t|" << a15 << "\t\t\t|" << a16 << "\n";
    cout << "bool\t\t|" << sizeof(a17) << "\t|" << a17 << "\t\t\t|" << a18 << "\n";
    
}
