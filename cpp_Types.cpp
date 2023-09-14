#include <iostream>
using namespace std;

int main()
{
	short a1 = SHRT_MIN;
	short a2 = SHRT_MAX;
	int a3 = INT32_MIN;
	int a4 = INT32_MAX;
	long long a5 = LLONG_MIN;
	long long a6 = LLONG_MAX;
	unsigned short a7 = 0;
	unsigned short a8 = UCHAR_MAX;
	unsigned int a9 = 0;
	unsigned int a10 = UINT32_MAX;
	unsigned long long a11 = 0;
	unsigned long long a12 = ULLONG_MAX;
	float a13 = FLT_MIN;
	float a14 = FLT_MAX;
	double a15 = DBL_MIN;
	double a16 = DBL_MAX;
	bool a17 = 0;
	bool a18 = 1;
	char a19 = 0;
	char a20 = 255;
	cout << "type\t|byte\t|min\t\t\t|max" << endl;
	cout << "short\t|" << sizeof(a1) << "\t|" << a1 << "\t\t\t|" << a2 << endl;
	cout << "int\t|" << sizeof(a3) << "\t|" << a3 << "\t\t|" << a4 << endl;
	cout << "llong\t|" << sizeof(a5) << "\t|" << a5 << "\t|" << a6 << endl;
	cout << "USHORT\t|" << sizeof(a7) << "\t|" << a7 << "\t\t\t|" << a8 << endl;
	cout << "UINT\t|" << sizeof(a9) << "\t|" << a9 << "\t\t\t|" << a10 << endl;
	cout << "ULLONG\t|" << sizeof(a11) << "\t|" << a11 << "\t\t\t|" << a12 << endl;
	cout << "float\t|" << sizeof(a13) << "\t|" << a13 << "\t\t|" << a14 << endl;
	cout << "double\t|" << sizeof(a15) << "\t|" << a15 << "\t\t|" << a16 << endl;
	cout << "bool\t|" << sizeof(a17) << "\t|" << a17 << "\t\t\t|" << a18 << endl;
	cout << "char\t|" << sizeof(a19) << "\t|" << a19 << "\t\t\t|" << a20 << endl;








}