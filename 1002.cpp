#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	
	double area, r, n;
	n=3.14159;
	cout << "digite aqui o raio da circunferencia. ";
	cin >> r;
	area=n*r*r;
	cout << "A=" << fixed << setprecision(4) << area;
	return 0;
}

