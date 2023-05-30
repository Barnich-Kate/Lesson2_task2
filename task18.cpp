#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int N;
    cout << "Type the number";
    cin>>N;
 
    switch (N / 100) {
    case 1:
        cout << "100 ";
        break;
    case 2:
        cout << "200";
        break;
    case 3:
        cout << "300";
        break;
    case 4:
        cout << "400";
        break;
    case 5:
        cout << "500";
        break;
    case 6:
        cout << "600";
        break;
    case 7:
        cout << "700";
        break;
    case 8:
        cout << "800";
        break;
    case 9:
        cout << "900 ";
        break;
    }
 
    if ((N % 100) / 10 == 1)
        switch (N % 100) {
        case 10:
            cout << "10";
            break;
        case 11:
            cout << "11";
            break;
        case 12:
            cout << "12";
            break;
        case 13:
            cout << "13";
            break;
        case 14:
            cout << "14";
            break;
        case 15:
            cout << "15";
            break;
        case 16:
            cout << "16";
            break;
        case 17:
            cout << "17";
            break;
        case 18:
            cout << "18";
            break;
        case 19:
            cout << "19";
            break;
        }
    else {
        switch ((N % 100) / 10) {
        case 2:
            cout << "20";
            break;
        case 3:
            cout << "30";
            break;
        case 4:
            cout << "40";
            break;
        case 5:
            cout << "50";
            break;
        case 6:
            cout << "60";
            break;
        case 7:
            cout << "70";
            break;
        case 8:
            cout << "80";
            break;
        case 9:
            cout << "90";
            break;
        }
 
        switch (N % 10) {
        case 1:
            cout << "1";
            break;
        case 2:
            cout << "2";
            break;
        case 3:
            cout << "3";
            break;
        case 4:
            cout << "4";
            break;
        case 5:
            cout << "5";
            break;
        case 6:
            cout << "6";
            break;
        case 7:
            cout << "7";
            break;
        case 8:
            cout << "8";
            break;
        case 9:
            cout<<"9";
            break;
        }
    }
    return 0;

	
}
