#include <iostream>
using namespace std;

class SavingsAccount {
public:
    void openAccount(int initDollars, int initCents) {
        dollars = initDollars;
        cents = initCents;
        normalize();
    }

    void deposit(int depositDollars, int depositCents) {
        dollars += depositDollars;
        cents += depositCents;
        normalize();
    }

    void withdraw(int withdrawDollars, int withdrawCents) {
        int totalCents = dollars * 100 + cents;
        int withdrawTotalCents = withdrawDollars * 100 + withdrawCents;

        if (withdrawTotalCents > totalCents) {
            cout << "Insufficient balance for withdrawal." << endl;
            return;
        }
        totalCents -= withdrawTotalCents;
        dollars = totalCents / 100;
        cents = totalCents % 100;
    }

    void showBalance() const {
        cout << "Current balance: $" << dollars << ".";
        if (cents < 10)
            cout << "0";
        cout << cents << endl;
    }

private:
    int dollars;
    int cents;

    void normalize() {
        if (cents >= 100) {
            dollars += cents / 100;
            cents = cents % 100;
        }
        if (cents < 0) {
            int dollarDecrease = (-cents + 99) / 100;
            dollars -= dollarDecrease;
            cents += dollarDecrease * 100;
        }
    }
};

int main() {
    SavingsAccount bank1;
    bank1.openAccount(200, 50);
    bank1.deposit(40, 50);
    bank1.withdraw(100, 98);
    bank1.showBalance();                

    return 0;
}
