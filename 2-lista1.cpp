#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
    string name;
	float n1,n2,average;
	cin >> name >> n1 >> n2;
	average=(n1*2+n2*3)/5;
	cout << "O aluno " << name <<" obteve média " << fixed << setprecision(1) << average << "." << endl;
	
	
	
    return 0;
}
