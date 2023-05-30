#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int month;
	cout << "Type number of month:";
	cin >> month;
	switch (month){
		case 1:
			cout << "It is January. In January 31 days";
		break;
		case 2:
			cout << "It is February. In February 28 days";
		break;
		case 3:
			cout << "It is March. In March 31 days";
		break;
		case 4:
			cout << "It is April. In April 30 days";
		break;
		case 5:
			cout << "It is May. In May 31 days";	
		break;
		case 6:
			cout << "It is June. In June 30 days";
		break;
		case 7:
			cout << "It is July. In July 31 days";
		break;
		case 8:
			cout << "It is August. In August 31 days";
		break;
		case 9:
			cout << "It is September. In September 30 days";
		break;
		case 10:
			cout << "It is October. In October 31 days";
		break;
		case 11:
			cout << "It is November. In November 30 days";
		break;
		case 12:
			cout << "It is December. In December 31 days";
		default:
			cout << "That's all! Good bye";
	}
	return 0;
}
