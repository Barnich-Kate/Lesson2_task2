#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int R, D, L, S, number;
	double const Pi = 3.14;
	cout << "Type an action number from 1 to 4:";
	cin >> number;
	cout << "Type the circle radius:";
	cin >> R;
	D = 2*R;
	L = 2*Pi*R;
	S = Pi*pow(R,2);
	switch (number) {
		case 1:
			cout << "The circle radius is equal:"<< R << endl;
		break;
		case 2:
			cout << "The circle diametr is equal:" << D << endl;
		break;
		case 3:
			cout << "The circle length is equal: " << L <<endl;
		break;
		case 4: 
			cout << "The circle square is equal:" << S <<endl;
		break;
		default:
			cout << "Good bye";
	}
	cout << "The circle radius is equal:"<< R << endl;
	cout << "The circle diametr is equal:" << D << endl;
	cout << "The circle length is equal: " << L << endl;
	cout << "The circle square is equal:" << S;
	return 0;
}
