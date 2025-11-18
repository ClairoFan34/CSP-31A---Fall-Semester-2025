#include <iostream>
using namespace std;

int main(){
    char letters[] = {'a','b','c'};
    char *ptr1 = letters;

    while (*ptr1 != '\0') {
        cout << *ptr1 << endl;
    }
}
