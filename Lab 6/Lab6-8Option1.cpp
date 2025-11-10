#include <iostream>
using namespace std;

int option;
double miles;
double kilometers;

double milesToKilometers(){
    cout << "Please input the miles to be converted: ";
    cin >> miles;
    kilometers = miles * 1.61;
    return kilometers;
}
double kilometersToMiles(){
    cout << "Please input the the kilometers to be converted: ";
    cin >> kilometers;
    miles = kilometers * 0.621;
    return miles;
}

int main() {
    while (option != 3) {
        cout << "Please input:" << endl;
        cout << "1 : Convert miles to kilometers" << endl;
        cout << "2 : Convert kilometers to miles " << endl;
        cout << "3 : Quit" << endl;
        cin >> option;
        switch (option) {
            case 1:
                kilometers = milesToKilometers();
                cout << miles << " miles = " << kilometers << " kilometers" << endl;
                break;
            case 2:
                miles = kilometersToMiles();
                cout << kilometers << " kilometers = " << miles << " miles" << endl;
                break;
        }
    }
    return 0;
}



