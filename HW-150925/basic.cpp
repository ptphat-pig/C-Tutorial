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
    cout << "===================Example 3=====================\n";
    // Example 4: This example is Limits of Integer Data Types
    string example4 = "This example is Limits of Integer Data Types" "\n"; // This exmaple is Limits of Tnteger Data Types

    cout << "Check the upper and lower limits of integers :" "\n"; // Print Check the upper and lower limits of integer :
    cout << "-------------------------------------------------\n";

    cout << "The maximum limit of int data type is :" << INT32_MAX << "\n"; // print The maximum limit of int data type is : +2147483647
    cout << "The minimum limit of int data type is :" << INT32_MIN << "\n"; // print The minimum limit of int data type is : -2147483647
    cout << "The maximum limit of unsigned int data type is :" << UINT32_MAX << "\n"; // print The minimum limit of unsigned int data type is : 4294967295
    cout << "The maximum limit of long long data type is :" << INT64_MAX << "\n"; // print The maximum of long long data type is :  9223372036854775807
    cout << "The minimum limit of long long data type is :" << INT64_MIN << "\n"; // print The minimum of long long data type is : -9223372036854775807
    cout << "The maximum limit of unsigned long long data type is :" << 1+2*INT64_MAX << "\n"; // print The maximum of unsigned long long data is type :  18446744073709551615
    cout << "The Bits contain in char data type is :" << sizeof(char) << "byte" << endl; // print The Bits contain in char data type is : 8
    cout << "The maximum limit of char data type is :" << INT8_MAX << "\n"; // print The maximum limit of char data type is : 127 
    cout << "The minimum limit of char data type is :" << INT8_MIN << "\n"; // print The minimum limit of char data type is : -128
    cout << "The maximum limit of signed char is :" << INT8_MAX << "\n"; // print The minimum limit of signed char data type is : 127
    cout << "The minimum limit of signed char is :" << INT8_MIN << "\n"; // print The maximum limit of signed char data type is : -128
    cout << "The maximum limit of unsigned char is :" <<  1+2*INT8_MAX << "\n"; // print The maximum limit of unsigned char is data type is : 255 
    cout << "The minimum limit of short data type is :" << INT16_MIN << "\n"; // print The minimum limit of short data type is : -32768
    cout << "The maximum limit of short data type is :" << INT16_MAX << "\n"; // print The maximum limit of short data type is :  32768
    cout << "The maximum limit of unsigned short data type is :" << 1+2*INT16_MAX << "\n"; // print The maximum limit of unsigned short data type is : 65535
}
