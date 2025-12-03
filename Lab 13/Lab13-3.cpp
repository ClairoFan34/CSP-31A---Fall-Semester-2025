// This program reads floating point data from a data file and places those
// values into the private data member called values (a floating point array)
// of the FloatList class. Those values are then printed to the screen.
// The input is done by a member function called GetList. The output
// is done by a member function called PrintList. The amount of data read in
// is stored in the private data member called length. The member function
// GetList is called first so that length can be initialized to zero.
// Angel Perez

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_LENGTH = 50;

class FloatList {
public:
    void getList(ifstream&);
    void printList() const;
    void printAverage() const;
    FloatList();
    ~FloatList();
private:
    int length;
    float values[MAX_LENGTH];
};

int main() {
    ifstream tempData;
    FloatList list;

    cout << fixed << showpoint;
    cout << setprecision(2);

    tempData.open("temperatures.txt");

    list.getList(tempData);
    list.printList();
    list.printAverage();

    return 0;
}

FloatList::FloatList() {
    length = 0;
}

FloatList::~FloatList() {
}

void FloatList::getList(ifstream& infile) {
    float num;
    length = 0;

    while (infile >> num && length < MAX_LENGTH) {
        values[length] = num;
        length++;
    }
}

void FloatList::printList() const {
    for (int i = 0; i < length; i++) {
        cout << values[i] << endl;
    }
}

void FloatList::printAverage() const {
    float sum = 0;
    for (int i = 0; i < length; i++)
        sum += values[i];

    float avg = sum / length;
    cout << "The average temperature is " << avg << endl;
}
