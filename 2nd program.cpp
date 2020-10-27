#include <iostream>
using namespace std;

int main()
{
    double firstNumber , secondNumber , productOfTwoNumbers;
    cout << "Enter two numbers: ";
    
    // stores two floating point numbers in variable firstNumber and secondNumber respectively 
    cin >> firstNumber >> secondNumber;
    
    //Perform multication and stores the result in variable productOfTwoNumbers
    productOfTwoNumbers = firstNumber * secondNumber ;
    
    cout << "product = " << productOfTwoNumbers;
    
    return 0;
}
