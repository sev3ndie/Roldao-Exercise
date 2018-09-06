#include <iostream>

using namespace std;

int main(){
    
	string name;
	double salary, increase;
	
	cin >> name >> salary;
	increase=salary*0.25;
	cout << "O funcionário " << name << " teve um aumento de R$ " << increase << " e passará a receber um salário de R$ " << salary+increase << "." << endl;
	
    
    
    return 0;
}
