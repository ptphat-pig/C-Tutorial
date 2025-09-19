/*
Homework - 15/09/2025
Part: Basic
From: 1     To: 20
*/
#include <iostream>
using namespace std;

int main () {
    cout << "===================Example 1=====================\n";
    // Example 1: This example is Sum of two numbers
    string example1 = "This example is about Sum of two numbers"; // This example is about Sum of two numbers
    int a = 29, b = 30;
    int sum = a + b;
    
    cout << "Tong cua hai so:\n"; // print the sum of two numbers
    cout << "---------------------------------\n";
    cout << "Tong cua" << a << "va" << b << "la :" << sum << "\n";

    cout << "===================Example 2=====================\n";
    // Example 2: This example is Size of Fundamental Data Types
    string example2 = "This example is about Size of Fundamental Data Types"; // This example is about Size of Fundamental Data Types
    cout << "Find Size of fundamental data types" "\n"; // Find Size of fundamental data types
    cout << "--------------------------------------\n";
    cout << "The sizeof(char) is : " << sizeof(char) << " bytes" << endl;
    cout << "The sizeof(short) is : " << sizeof(short) << " bytes" << endl;
    cout << "The sizeof(int) is : " << sizeof(int) << " bytes" << endl;
    cout << "The sizeof(long) is : " << sizeof(long) << " bytes" << endl;
    cout << "The sizeof(long long) is : " << sizeof(long long) << " bytes" << endl;
    cout << "The sizeof(float) is : " << sizeof(float) << " bytes" << endl;
    cout << "The sizeof(double) is : " << sizeof(double) << " bytes" << endl;
    cout << "The sizeof(long double) is : " << sizeof(long double) << " bytes" << endl;
    cout << "The sizeof(bool) is : " << sizeof(bool) << " bytes" << endl;
    
    cout << "===================Example 3=====================\n";
    // Example 3: This example is Sum using variables
    string example3 = "This example is Sum using variables" "\n"; // This example is Sum variables
    // Declare variables
    int num1 = 29;
    int num2 = 30;
    int Tong = num1 + num2;

    // Print output
    cout << "Print the sum of two numbers : \n"; // Print the sum of two numbers
    cout << "------------------------------------------\n";
    cout << "The sum of" << num1 << "and" << num2 << "is :" << Tong<< "\n";
    



}