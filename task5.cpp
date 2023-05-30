#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B, N;
	cout << "Type an action number in the range from 1 to 4:";
	cin >> N;
	cout << "Type number A";
	cin >> A;
	cout << "Type number B";
	cin >> B;
	if (B = 0) {
		cout << "It is wrong number. Please, type new number not equal to 0";
		cin >> B;
	}
	
	switch (N){
		case 1:
			cout << "Adittion numbers A and B is equal: " << A+B;
		break;
		case 2:
			cout << "Substraction numbers A and B is equal: " << A-B;	
		break;
		case 3:
			cout << "Multiplication numbers A and B is equal: " << A*B;
		break;
		case 4:
			cout << "Division numbers A and B is equal:" << A/B;
		break;
		default:
			cout << "Good bye";
	}
	return 0;


}
