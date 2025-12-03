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

const int MAX_LENGTH = 50; // MAX_LENGTH contains the maximum length of our list

class FloatList // Declares a class that contains an array of floating point numbers
{
public:
    void getList(ifstream& infile);        // Member function that gets data from a file
    void printList() const;         // Member function that prints data from that file to the screen.
    FloatList();                    // constructor that sets length to 0.
    ~FloatList();                   // destructor
private:
    int length;                     // Holds the number of elements in the arrays
    int itemNumbers[MAX_LENGTH];    // The array of item numbers
    int itemsInStock[MAX_LENGTH];   // The array of stock quantities
};

int main()
{
    ifstream tempData;              // Defines a data file
    // Fill in the code to define an object called list of the class FloatList
    FloatList list;
    cout << fixed << showpoint;
    cout << setprecision(2);
    tempData.open("temperatures.txt");
    // Fill in the code that calls the getList function.
    list.getList(tempData);
    // Fill in the code that calls the printList function.
    list.printList();
    return 0;
}

FloatList::FloatList() {
    // Fill in the code to complete this constructor that
    // sets the private data member length to 0
    length = 0;
}

FloatList::~FloatList() {
    // Simple destructor
}

// Fill in the entire code for the getList function
// The getList function reads the data values from a data file
// into the values array of the class FloatList
void FloatList::getList(ifstream& infile) {
    int itemNum, inStock;
    length = 0;

    while (infile >> itemNum >> inStock && length < MAX_LENGTH) {
        itemNumbers[length] = itemNum;
        itemsInStock[length] = inStock;
        length++;
    }
}

void FloatList::printList() const {
    for (int i = 0; i < length; i++) {
        cout << "Item number " << itemNumbers[i] << " has " << itemsInStock[i] << " items in stock" << endl;
    }
}
