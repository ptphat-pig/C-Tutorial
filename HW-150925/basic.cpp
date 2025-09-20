/*
Homework - 15/09/2025
Part: Basic
From: 1     To: 20
*/
#include <iostream>
#include <cmath>   // for M_PI and pow()
#include <iomanip> // For std::setw

using namespace std;

int main()
{
        cout << "===================Example 1=====================\n";
        // Example 1: This example is Welcome Text on Separate Line
        string example1 = "This example is Welcome Text on Separate Line"
                          "\n"; // This example is Welcome Text on Separate Line
        cout << "Welcome to C/C++ programming!"
                "\n"; // print Welcome to C/C++ programming!

        cout << "===================Example 2=====================\n";
        // Example 2: This example is Sum of two numbers
        string example2 = "This example is about Sum of two numbers"; // This example is about Sum of two numbers
        int a = 29, b = 30;
        int sum = a + b;
        cout << "Tong cua hai so:\n"; // print the sum of two numbers
        cout << "---------------------------------\n";
        cout << "Tong cua" << a << "va" << b << "la :" << sum << "\n";

        cout << "===================Example 3=====================\n";
        // Example 3: This example is Size of Fundamental Data Types
        string example3 = "This example is about Size of Fundamental Data Types"; // This example is about Size of Fundamental Data Types
        cout << "Find Size of fundamental data types"
                "\n"; // Find Size of fundamental data types
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

        cout << "===================Example 4=====================\n";
        // Example 4: This example is Sum using variables
        string example4 = "This example is Sum using variables"
                          "\n"; // This example is Sum variables
        // Declare variables
        int num1 = 29;
        int num2 = 30;
        int Tong = num1 + num2;

        // Print output
        cout << "Print the sum of two numbers : \n"; // Print the sum of two numbers
        cout << "------------------------------------------\n";
        cout << "The sum of" << num1 << "and" << num2 << "is :" << Tong << "\n";
        cout << "===================Example 5=====================\n";
        // Example 5: This example is Limits of Integer Data Types
        string example5 = "This example is Limits of Integer Data Types"
                          "\n"; // This exmaple is Limits of Tnteger Data Types

        cout << "Check the upper and lower limits of integers :"
                "\n"; // Print Check the upper and lower limits of integer :
        cout << "-------------------------------------------------\n";

        cout << "The maximum limit of int data type is :" << INT32_MAX << "\n";                        // print The maximum limit of int data type is : +2147483647
        cout << "The minimum limit of int data type is :" << INT32_MIN << "\n";                        // print The minimum limit of int data type is : -2147483647
        cout << "The maximum limit of unsigned int data type is :" << UINT32_MAX << "\n";              // print The minimum limit of unsigned int data type is : 4294967295
        cout << "The maximum limit of long long data type is :" << INT64_MAX << "\n";                  // print The maximum of long long data type is :  9223372036854775807
        cout << "The minimum limit of long long data type is :" << INT64_MIN << "\n";                  // print The minimum of long long data type is : -9223372036854775807
        cout << "The maximum limit of unsigned long long data type is :" << 1 + 2 * INT64_MAX << "\n"; // print The maximum of unsigned long long data is type :  18446744073709551615
        cout << "The Bits contain in char data type is :" << sizeof(char) << "byte" << endl;           // print The Bits contain in char data type is : 8
        cout << "The maximum limit of char data type is :" << INT8_MAX << "\n";                        // print The maximum limit of char data type is : 127
        cout << "The minimum limit of char data type is :" << INT8_MIN << "\n";                        // print The minimum limit of char data type is : -128
        cout << "The maximum limit of signed char is :" << INT8_MAX << "\n";                           // print The minimum limit of signed char data type is : 127
        cout << "The minimum limit of signed char is :" << INT8_MIN << "\n";                           // print The maximum limit of signed char data type is : -128
        cout << "The maximum limit of unsigned char is :" << 1 + 2 * INT8_MAX << "\n";                 // print The maximum limit of unsigned char is data type is : 255
        cout << "The minimum limit of short data type is :" << INT16_MIN << "\n";                      // print The minimum limit of short data type is : -32768
        cout << "The maximum limit of short data type is :" << INT16_MAX << "\n";                      // print The maximum limit of short data type is :  32768
        cout << "The maximum limit of unsigned short data type is :" << 1 + 2 * INT16_MAX << "\n";     // print The maximum limit of unsigned short data type is : 65535

        cout << "===================Example 6=====================\n";
        // Example 6: This example is Check Primitive Value Limits
        string example6 = "This example is Check Primitive Value Limits"
                          "\n";            // This example is Check Primitive Value Limits
        string theGender = "F";            // the gender is F
        int herMarried = 1;                // she was married one time
        int herSons = 2;                   // she have two sons
        int herAppointment = 2009;         // she was appointmented for 2009
        int herSalary = 1500000;           // she earn 1500000$ every year
        double herHeight = 79.48;          // her heigt is 79.48 kg
        double herGPA = 4.69;              // her GPA is 4.96
        int herSalaryDrawnUpto = 12047235; // she can draw up to 12047235
        int herBalanceTill = 995324987;    // hẻ balance is 995324987
        cout << "Check whether the primitive values crossing the limits or not :"
                "\n"; // print Check whether the primitive values crossing the limits or not :
        cout << "-------------------------------------------------\n";
        cout << "The Gender is :" << theGender << "\n";                               // print The gender is : F
        cout << "Is she married? :" << herMarried << "\n";                            // print Is she married? : 1
        cout << "Number of sons she her :" << herSons << "\n";                        // print Number of sons she her : 2
        cout << "Year of her appointment :" << herAppointment << "\n";                // print Year of her appointment : 2009
        cout << "Salary for a year :" << herSalary << "$" << "\n";                    // print Salary for a year : 1500000
        cout << "Height is :" << herHeight << "\n";                                   // print Height is : 79.48
        cout << "GPA is :" << herGPA << "\n";                                         // print GPA is 4.69
        cout << "Salary drawn up to :" << herSalaryDrawnUpto << "trieu dong" << "\n"; // print Salary drawn up to : 12047235
        cout << "Balance till :" << herBalanceTill << "\n";                           // print balance till : 995324987

        cout << "===================Example 7=====================\n";
        // Example 7: This example is Mixed Data Types and Arithmetic
        string example7 = "This example is Mixed Data Types and Arithmetic"
                          "\n"; // This example is Mixed Data Types and Arithmetic
        int m1 = 5, m2 = 7;
        double m3 = 3.7, m4 = 8.0;
        cout << "Display arithmetic operations with mixed data type :"
                "\n"; // print Display arithmetic operations with mixed data type
        cout << "-------------------------------------------------\n";
        cout << "5 + 7 =" << m1 + m2 << "\n";     // print 5 + 7 = 12
        cout << "3.7 + 8.0 =" << m3 + m4 << "\n"; // print 3.7 + 8.0 = 11.7
        cout << "5 + 8.0 =" << m1 + m4 << "\n";   // print 5 + 8.0 = 13.0
        cout << "5 - 7 =" << m1 - m2 << "\n";     // print 5 - 7 = -2
        cout << "3.7 - 8.0 =" << m3 - m4 << "\n"; // print 3.7 - 8.0 = -4.3
        cout << "5 - 8.0 =" << m1 - m4 << "\n";   // print 5 - 8.0 = -3.0
        cout << "5 * 7 =" << m1 * m2 << "\n";     // print 5 * 7 = 35
        cout << "3.7 * 8.0 =" << m3 * m4 << "\n"; // print 3.7 * 8.0 = 29.6
        cout << "5 * 8.0 =" << m1 * m4 << "\n";   // print 5 * 8.0 = 40.0
        cout << "5 / 7 =" << m1 / m2 << "\n";     // print 5 / 7 = 0
        cout << "3.7 / 8.0 =" << m3 / m4 << "\n"; // print 3.7 / 8.0 = 0.5
        cout << "5 / 8.0 =" << m1 / m4 << "\n";   // print 5 / 8.0 = 0.6

        cout << "===================Example 8=====================\n";
        // Example 8: This example is Overflow and Underflow in Arithmetic
        string example8 = "This example is Overflow and Underflow in Arithmetic"
                          "\n";                // This example is Check overflow/underflow during various arithmetical operation :
        int n1 = -2147483648, n2 = 2147483648; // n1 = -2147483648, n2 = 2147483648
        cout << "Check overflow/underflow during various arithmetical operation :"
                "\n"; // print Check overflow/underflow during various arithmetical operation :
        cout << "Range of int is [-2147483648, 2147483647]"
                "\n"; // print Range of int is [-2147483648, 2147483647]
        cout << "-------------------------------------------------\n";
        cout << "Overflow the integer range and set in minimum range :" << n1 << "\n"; // print Overflow the integer range and set in minimum range
        cout << "Increasing from its minimum range :" << n1 + 1 << "\n";               // print Increasing from its minimum range : -2147483647
        cout << "Product is :" << n1 * n1 << "\n";                                     // print Product is : 1
        cout << "Underflow the range and set in maximum range :" << n2 << "\n";        // print Underflow the range and set in maximum range : 2147483647
        cout << "Decreasing from its maximum range :" << n2 - 1 << "\n";               // print Decreasing from its maximum range : 2147483646
        cout << "Product is :" << n2 * n2 << "\n";                                     // print Product is : 0

        cout << "===================Example 9=====================\n";
        // Example 9: This example is Pre and Post Increment/Decrement
        int num = 57;
        string example9 = "This example is Pre and Post Increment/Decrement"
                          "\n"; // This example is Pre and Post Increment/Decrement
        cout << "Display the operation of pre and post increment and decrement :"
                "\n"; // print Display the operantion of pre and post increment and decrement :
        cout << "-------------------------------------------------\n";
        cout << "The number is :" << num << "\n"; // print The number is : 57
        num++;
        cout << "After post increment by 1 the number is :" << num << "\n";  // print After post increment by 1 the number is : 58
        cout << "After pre increment by 1 the number is :" << ++num << "\n"; // print After pre increment b y1 the number is : 59
        ++num;
        cout << "After increasing by 1 the number is :" << num << "\n"; // print After increasing by 1 the number is : 60
        num--;
        cout << "After post decrement by 1 the number is :" << num << "\n";  // print After post decrement by 1 the number is : 59
        cout << "After pre decrement by 1 the number is :" << --num << "\n"; // print After pre decrement by 1 the number is : 58
        --num;
        cout << "After decreasing by 1 the number is :" << num << "\n"; // print After decreasing by 1 the nnumber is : 57

        cout << "===================Example 10=====================\n";
        // Example 10: This example is Output Formatting Example
        string example10 = "This example is Output Formatting Example"
                           "\n"; // This example is Output Formatting Examplez
        double pi = 3.1416;
        string scientificNotation = "3.1416e+00";
        cout << "Formatting the output :" << "\n"; // print Formatting the output :
        cout << "-------------------------------------------------\n";
        cout << "The value of pi :" << pi << "\n";                                                         // print The value of pi : 3.1416
        cout << "The value of pi 4 decimal place of total with 8 : |" << setw(8) << pi << "|" << endl;     // print The value of 4 decimal place of total with 8 :  | 3.1416|
        cout << "The value of pi 4 decimal place of total with 10 : |" << setw(10) << pi << "|" << endl;   // print The value of decimal place of total with 10 :  | 3.1416|
        cout << "The value of pi 4 decimal place of total with : |" << "--" << setw(8) << pi << "|" << endl;     // print The value of pi 4 decimal place of total with 8 :  | --3.1416|
        cout << "The value of pi 4 decimal place of total with : |" << "----" << setw(10) << pi << "|" << endl; // print The value of pi 4 decimal place of total with 10 :  | ----3.1416|
        cout << "The value of pi in scientific format  is :" << scientificNotation << endl;                // print The value of pi in scientific format is : 3.1416e+00

        cout << "===================Example 11=====================\n";
        // Example 11: This example is Results of Specific Operations
        string example11 = "This example is Results of Specific Operations"; // This example is Results of Specific Operations
        cout << "Print the result of some specific operation :" "\n"; // print Print the result of some specific operation :
        cout << "-------------------------------------------------\n";
        cout << "Result of 1st expression is :" << (6 * 4 - 1) << "\n"; // print Result of 1st expression is : 23
        cout << "Result of 2nd expression is :" << (30 + 5)/7 << "\n"; // print Result of 2nd expression is : 5
        cout << "Result of 3rd expression is :" << (14+-4*6/11) << "\n"; // print Result of 3rd expression is : 12
        cout << "Result of 4th expression is :" << (2+15/6*1-7%2) << "\n"; // print Rsult of 4th exprssion is : 3
        
        cout << "===================Example 12=====================\n";
        // Example 12: This example is Add Two Numbers from Keyboard
        string example12 = "This example is Add Two Numbers from Keyboard"; // This example is Add Two Numbers from Keyboard
        int num0 = 25, num10 = 39;
        int sump = num0 + num10;
        cout << "Sum of two numbers :" "\n"; // print Sum of two numbers :
        cout << "-------------------------------------------------\n";
        cout << "Input 1st number :" << num0 << "\n"; // print Input 1st number : 25
        cout << "Input 2nd number :" << num10 << "\n"; // print Input 2nd number : 39
        cout << "The sum of the number is :" << sump << "\n"; // print The sum of the number is : 64
        
        cout << "===================Example 13=====================\n";
        // Example 13: This example is Swap Two Numbers
        string example13 = "This example is Swap Two Numbers"; // This example is Swap Two Numbers
        int u = 25;
        int i = 39; 
        cout << "Swap two numbers :" "\n"; // print Swap two numbers :
        cout << "-------------------------------------------------\n";
        cout << "Input 1st number :" << u << "\n"; 
        cout << "Input 2nd number :" << i << "\n";
        // int c = u + i;
        // u = c - u;
        // i = c - i;
        u = u + i; 
        i = u - i;
        u = u - i;
        cout << "After swapping the 1st number is : " << u << "\n";
        cout << "After swapping the 2nd number is : " << i << "\n";

         cout << "===================Example 14=====================\n";
        // 
        double R = 6;
        double volumeSphere = 4.0 / 3.0 * M_PI * pow(R, 3);
        cout << "Calculate the volume of a sphere :" << "\n"; 
        cout << "---------------------------------------\n";
        cout << "Input the radius of a sphere :" << R << "\n";
        cout << "The volume of a sphere is :" << volumeSphere << "\n";

        cout << "===================Example 15=====================\n";
        //
        double sideCube = 5;
        double volumeCube = pow(sideCube, 3);
        cout << "Calculate the volume of a cube :" << "\n";
        cout << "---------------------------------------\n";
        cout << "Input the side of a cube :" << sideCube << "\n";
        cout << "The volume of a cube is :" << volumeCube << "\n";

        cout << "===================Example 16=====================\n";
        //
        double radiusCylinder = 6;
        double heightCylinder = 8; 
        double volumeCylinder = pi * pow(radiusCylinder,2) * heightCylinder;
        cout << "Calculate the volume of a cylinder :" "\n";
        cout << "-----------------------------------------\n";
        cout << "Input the radius of the cylinder :" << radiusCylinder << "\n";
        cout << "Input the height of the cylinder :" << heightCylinder << "\n";
        cout << "The volume of a cylinder is :" << volumeCylinder << "\n";

        cout << "===================Example 17=====================\n";
        //
        double lengthRectangle = 10;
        double widthRectangle = 15;
        double areaRectangle = lengthRectangle * widthRectangle;
        double perimeterRectangle = (lengthRectangle + widthRectangle) * 2;
        cout << "Find the Area and Perimeter of a Rectangle :" "\n";
        cout << "-------------------------------------------------\n";
        cout << "Input the length of the rectangle :" << lengthRectangle << "\n";
        cout << "Input the width of the rectangle :" << widthRectangle << "\n";
        cout << "The area of the rectangle is :" << areaRectangle << "\n";
        cout << "The perimeter of the rectangle is :" << perimeterRectangle << "\n"; 
   
        cout << "===================Example 18=====================\n";
        //
        double lengthOf1stTriangle = 5;
        double lengthOf2ndTriangle = 5;
        double lengthOf3rdTriangle = 5;
        double areaTriangle = (lengthOf1stTriangle + lengthOf2ndTriangle + lengthOf3rdTriangle) / 2;
        cout << "Find the area of any triangle using Heron's Formula :" "\n";
        cout << "----------------------------------------------------------\n";
        cout << "Input the length of 1st side of the triangle :" << lengthOf1stTriangle << "\n";
        cout << "Input the length of 2nd side of the triangle :" << lengthOf2ndTriangle << "\n";
        cout << "Input the length of 3rd side of the triangle :" << lengthOf3rdTriangle << "\n";
        cout << "The area of the triangle is :" << areaTriangle << "\n";

        cout << "===================Example 19=====================\n";
        //
        double radiusCircle = 5;
        double areaCircle = pi * pow(radiusCircle, 2);
        double circumferenceCircle = 2 * pi * radiusCircle;
        cout << "Find the area and circumference of any circle :" "\n";
        cout << "----------------------------------------------------\n";
        cout << "Input the radius(1/2 of diameter) of a circle :" << radiusCircle << "\n";
        cout << "The area of the circle is :" << areaCircle << "\n";
        cout << "The circumference of the circle is :" << circumferenceCircle << "\n";

        cout << "===================Example 19=====================\n";
        //
        double temperatureCelsius = 35;
        double temperatureFahrenheit = (temperatureCelsius  * 9/5) + 32;
        cout << "Convert temperature in Celsius to Fahrenheit :" "\n";
        cout << "---------------------------------------------------\n";
        cout << "Input the temperature in Celsius :" << temperatureCelsius << "\n";
        cout << "The temperature in Celsius :" << temperatureCelsius << "\n";
        cout << "The temperature in Fahrenheit :" << temperatureFahrenheit << "\n";


        

















































































































}