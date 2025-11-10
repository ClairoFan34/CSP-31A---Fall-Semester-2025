#include <fstream>
#include <iostream>
using namespace std;
// Angel Perez
const int MAXNAME = 20;

int main()
{
    ifstream inData;
    inData.open("grades.txt");

    char name[MAXNAME + 1]; // holds student name
    float average; // holds student average

    inData.get(name, MAXNAME + 1);
    while (inData)
    {
        inData >> average;
        // Fill in the code to print out name and
        // student average
        cout << name << " has a(n) " << average << " average" << endl;
        // Fill in the code to complete the while
        // loop so that the rest of the student
        // names and average are read in properly
        inData.ignore(100, '\n');
        inData.get(name, MAXNAME + 1);
    }
    return 0;
}
