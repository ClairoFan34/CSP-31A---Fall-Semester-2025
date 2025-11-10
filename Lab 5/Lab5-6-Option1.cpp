#include <iostream>
using namespace std;
int main() {
    int beverage;
    int count;
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int orangeJuice = 0;
    cout << "1. Coffee 2. Tea 3. Coke 4. Orange Juice" << endl;
    beverage = 0;
    for (count = 1; beverage != -1;) {
        cout << "Please input the favorite beverage of person #" << count << ". Choose 1, 2, 3, or 4 from the about menu or -1 to exit the program" << endl;
        cin >> beverage;
        switch (beverage) {
            case 1:
                coffee++;
                count++;
                break;
            case 2:
                tea++;
                count++;
                break;
            case 3:
                coke++;
                count++;
                break;
            case 4:
                orangeJuice++;
                count++;
                break;
            case -1:
                break; // Exit the loop
            default:
                cout << "Invalid Choice" << endl;
                break;
        }
    }
    cout << "Beverage           Number of votes" << endl;
    cout << "**********************************" << endl;
    cout << "Coffee             " << coffee << endl;
    cout << "Tea                " << tea << endl;
    cout << "Coke               " << coke << endl;
    cout << "Orange Juice       " << orangeJuice << endl;


    return 0;
}
