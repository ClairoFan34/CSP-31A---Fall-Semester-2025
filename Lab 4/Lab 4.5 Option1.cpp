// This program illustrates the use of the switch statement.
// Angel Perez
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float Quarter1, Quarter2, Quarter3, Quarter4;
    float AvgBill;
    cout << "Please enter your water bill for quarter 1:" << endl;
    cin >> Quarter1;
    cout << "Please enter your water bill for quarter 2:" << endl;
    cin >> Quarter2;
    cout << "Please enter your water bill for quarter 3:" << endl;
    cin >> Quarter3;
    cout << "Please enter your water bill for quarter 4:" << endl;
    cin >> Quarter4;
    AvgBill = (Quarter1 + Quarter2 + Quarter3 + Quarter4) / 4;
    if (AvgBill > 75)
        cout << "Your average monthly bill is $" << fixed << setprecision(2) << AvgBill << ". You are using excessive amounts of water" << endl;
    else if (AvgBill <= 75 && AvgBill >= 25)
        cout << "Your average monthly bill is $" << fixed << setprecision(2) << AvgBill << ". You are using a typical amount of water" << endl;
    else
        cout << "Your average monthly bill is $" << fixed << setprecision(2) << AvgBill << ". Good job on conserving water!" << endl;
}
