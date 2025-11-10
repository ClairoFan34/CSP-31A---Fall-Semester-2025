#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency
// Angel Perez

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);
const float euro = 1.06;
const float peso = 9.73;
const float OneYen = 124.35;

int main()
{
    float dollars;
    float euros;
    float pesos;
    float yen;
    
    cout << fixed << showpoint << setprecision(2);
    
    // Test 1: Convert dollars to euros and pesos
    cout << "Please input the amount of American Dollars you want converted ";
    cout << "to euros and pesos" << endl;
    cin >> dollars;
    
    convertMulti(dollars, euros, pesos);
    cout << "$" << dollars << " converts to " << euros << " euros and " 
         << pesos << " pesos" << endl << endl;
    
    // Test 2: Convert dollars to euros, pesos, and yen
    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;
    
    convertMulti(dollars, euros, pesos, yen);
    cout << "$" << dollars << " converts to " << euros << " euros, " 
         << pesos << " pesos, and " << yen << " yen" << endl << endl;
    
    // Test 3: Convert dollars to yen only
    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to yen" << endl;
    cin >> dollars;
    
    float yenAmount = convertToYen(dollars);
    cout << "$" << dollars << " converts to " << yenAmount << " yen" << endl << endl;
    
    // Test 4: Convert dollars to euros only
    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros" << endl;
    cin >> dollars;
    
    float euroAmount = convertToEuros(dollars);
    cout << "$" << dollars << " converts to " << euroAmount << " euros" << endl << endl;
    
    // Test 5: Convert dollars to pesos only
    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to pesos" << endl;
    cin >> dollars;
    
    float pesoAmount = convertToPesos(dollars);
    cout << "$" << dollars << " converts to " << pesoAmount << " pesos" << endl << endl;
    
    return 0;
}
// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly
// **************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
// and pesos
// data in: dollars
// data out: euros and pesos
//
// *************************************************************************
void convertMulti(float dollars, float& euros, float& pesos)
{
     euros = dollars * 1.06;
     pesos = dollars * 9.73;
    cout << "The function convertMulti with dollars, euros and pesos "
         << endl << " was called with " << dollars << " dollars" << endl
         << endl;
}
// ************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
// pesos and yen
// data in: dollars
// data out: euros pesos yen
//
// ***********************************************************************
void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
     euros = dollars * 1.06;
     pesos = dollars * 9.73;
     yen = dollars * 124.35;
     cout << "The function convertMulti with dollars, euros, pesos and yen"
         << endl << " was called with " << dollars << " dollars" << endl
         << endl;
}
// ****************************************************************************
// convertToYen
//
// task: This function takes a dollar value and converts it to yen
// data in: dollars
// data returned: yen
//
// ***************************************************************************
float convertToYen(float dollars)
{
     float yen = dollars * 124.35;     
     cout << "The function convertToYen was called with " << dollars << " dollars"
         << endl << endl;
    return yen;
}
// ****************************************************************************
// convertToEuros
//
// task: This function takes a dollar value and converts it to euros
// data in: dollars
// data returned: euros
//
// ****************************************************************************
float convertToEuros(float dollars)
{
     float euros = dollars * 1.06;
    cout << "The function convertToEuros was called with " << dollars
         << " dollars" << endl << endl;
    return euros;
}
// *****************************************************************************
// convertToPesos
//
// task: This function takes a dollar value and converts it to pesos
// data in: dollars
// data returned: pesos
//
// ****************************************************************************
float convertToPesos(float dollars)
{
     float pesos = dollars * 9.73;
    cout << "The function convertToPesos was called with " << dollars
         << " dollars" << endl;
    return pesos;
}