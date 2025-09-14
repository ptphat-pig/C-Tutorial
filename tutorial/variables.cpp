#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using std::cout;

int main() {
    // creating variables
    string myName = "Pham Thanh Phat"; // my name is Pham Thanh Phat
    string mySex = "male"; // my sex is male
    int myAge = 18; // my age is 18
    int myYear = 2007; // I was born is 2007
    string myAddress = "Ho Chi Minh City"; // my address is Ho Chi Minh City
    string myCountryside = "Viet Nam"; //my countryside is Viet Nam
    double myHeight = 1.7; // my height is 1.7m
    int myWeight = 75; // my weight is 75kg
    string myWork = "student"; // I am a student
    string mygrade = "University"; // my grade is University
    double myGPA = 8.53; // my GPA is 8.53
    string myUniversity = "HUFLIT"; // my university is HUFLIT
    string myMajor = "Software Engineer"; // my major is Software Engineer
    string myGraduateYear = "2025"; // my graduate year is 2025
    string mySkill = "Creative, hardworking, communicative"; // my skills are Creative, hardworking, communicate
    string myCalculationSkill = "can perform simple calculations on c/c++"; // my calculation skill is can perform simple calculations on C/C++    // print variable values
    // Example 1:   This example is about basic calculus.
    string example1 = "can perform basic math operations such as addition, subtraction multiplication, and division"; // my basic math skill is can perform basic math operations such as addtion, subtraction multiplication, and division 
    int sum1 = 500 + 500; // 500 + 500 = 1000
    int sum2 = sum1 + 500; // 1000 + 500 = 1500
    int math = sum1 + sum2; // 1000 + 1500 = 2500
    // Example 2: This example is about math operations
    string example2 = "This example is about math operations"; // this example is about math operations
    int m = 5; // m = 5 (unit: km)
    int n = 7; // n = 7 (unit: km)
    int totalMyDistanceGoToSchool = m + n ; // my total distance go to school is m + n = 12 (unit: km)
    // Example 3: This example is about boolean values
    string example3 = "This example is about boolean values"; // this example is about boolean values
    bool isMyNameTrue = true; // my name is true
    bool isMyAgeFalse  = false; // my age is false
    bool isMySchoolTrue = true; // I am a student
    // Example 4: This example is about loops
    string example4 = "This example is about loops"; // this example is about loops
    int x = 10;
    int y = 20;
    if (x < y) {
        // No operation
    }
    // Example 5: This example is about Switch statements
    string example5 = "This example is about Swicth staements"; // this example is about Swicth statements"
    string myTimeTable = "I go to school on :"; // my time table is I go to school on :
    int day = 2; // 2 days
    switch (day) {
        case 1: 
            cout << "Thursday\n";
            break; 
        case 2: 
            cout << "Friday\n";
            break;
    }
    // Example 6: This example is about While loops
    string example6 = " This example is about While loops"; // this example is about While loops
    int countdown = 3;
    string example7 = "This example is about For loop"; // this example is about For loop
    while (countdown > 0) {
        // No operation
        countdown--;
    }
    // Example 7: This example is about For loops
    for (int i = 3; i > 0; i--) {
        // No operation
    }
    // Example 7.9: This example is about Break/Continue
    string example8 = "This example is about Break/Continue"; // this example is about Break/Continue
    int a = 0;
    while (a < 5) {
        if (a == 3){
            a++;
            continue;
        }
        a++;
    }
    // Example 9: This example is about Arrays
    string example9 = "This example is about Arrays"; // this example is about Arrays
    string cars = "BMW, Lamborghini, Ferrari, Mercedes, Pagani zonda,..."; // my favourite cars are BMW, Lamborghini, Ferrari, Mercedes, Pagani zonda,... 
    string myCarGoToSchoolNow = "Lead"; // my car go to school now is Lead
    // Example 10: This example is about Structures 
    string example10 = "This example is about Structures"; // this example is about Structures
    struct SchoolInfo {
        string mySchoolYear;
        string myAdmissionYear;
        string myGraduateYear;
    };
    // Put data into the structure
    SchoolInfo mySchoolInfo;
    mySchoolInfo.mySchoolYear = "2025-2026";
    mySchoolInfo.myAdmissionYear = "2025";
    mySchoolInfo.myGraduateYear = "2029";  
    // Example 11: This example is about Enumerations
    string example11 = "This example is about Enumerations"; // this example is about Enumerations
    enum myEnglishLevel {
        Low,
        Medium,
        High
    };
    myEnglishLevel myLevel = Medium; // my English level is Medium
    // Example 12: This example is about References
    string example12 = "This example is about References"; // this example is about References
    string myFavouriteFood = "Rice"; // my favourite food is Rice
    string &food = myFavouriteFood; // reference to my favourite food
    // Example 13: This example is about Pointers
    string example13 = " This example is about Pointers"; // this example is about Pointers
    string myFavouriteDrink = "peanut mineral water"; // my favourite drink is peanut mineral water
    string *drink = &myFavouriteDrink; // pointer to my favourite drink
    // Example 14: This example is about Memory Management
    string example14 = "This example is about Memory Management"; // this example is about Memory Management
    int mainMemory = 128; // my main memory is 128GB
    int *memory = &mainMemory; // pointer to my main memory


    // Print variable values
    cout << "=================Standard Example==================\n";
    cout << "string: " << myName << "\n";
    cout << "string: " << mySex << "\n";
    cout << "int: " << myAge << "\n";
    cout << "int: " << myYear << "\n";
    cout << "string: " << myAddress << "\n";
    cout << "string: " << myCountryside << "\n";
    cout << "double: " << myHeight << "\n";
    cout << "int: " << myWeight << "\n";
    cout << "string: " << myWork << "\n";
    cout << "string: " << mygrade << "\n";
    cout << "double: " << myGPA << "\n";
    cout << "string: " << myUniversity << "\n";
    cout << "string: " << myMajor << "\n";
    cout << "string: " << myGraduateYear << "\n";
    cout << "string: " << mySkill << "\n";
    cout << "string: " << myCalculationSkill << "\n";
    cout << "==================Example 1===================\n";
    cout << "string: " << example1<< "\n";
    cout << "int: " << sum1 << "\n";
    cout << "int: " << sum2 << "\n";
    cout << "int: " << math << "\n";
    cout << "==================Example 2===================\n";
    cout << "string: " << example2 << "\n";
    cout << "int: " << m << "\n"; 
    cout << "int: " << n << "\n";
    cout << "int: " << totalMyDistanceGoToSchool << "\n"; 
    cout << "==================Example 3===================\n";
    cout << "string: " << example3 << "\n";
    cout << "bool: " << isMyNameTrue << "\n";
    cout << "bool: " << isMyAgeFalse << "\n";
    cout << "bool: " << isMySchoolTrue << "\n";
    cout << "==================Example 4===================\n";
    cout << "string: " << example4 << "\n";
    cout << "int:" << x << "\n";
    cout << "int:" << y << "\n";
    cout << "==================Example 5===================\n";
    cout << "string: " << example5 << "\n";
    cout << "int: " << day << "\n";
    cout << myTimeTable << "\n";
    cout << "==================Example 6===================\n";
    cout << "string: " << example6 << "\n";
    cout << "int: " << countdown << "\n";
    cout << "==================Example 7===================\n";
    cout << "string: " << example7 << "\n";
    cout << "int: " << y << "\n";
    cout << "int: " << x << "\n";
    // Example 8: This example is about Break/Continue
    cout << "==================Example 7.9===================\n";
    cout << "string: " << example8 << "\n";
    cout << "int: " << a << "\n";
    cout << "==================Example 9====================\n";
    cout << "string: " << example9 << "\n";
    cout << "string: " << cars << "\n";
    cout << "string: " << myCarGoToSchoolNow << "\n";
    cout << "==================Example 10===================\n";
    cout << "string: " << example10 << "\n";
    cout << "string: " << mySchoolInfo.mySchoolYear << "\n";
    cout << "string: " << mySchoolInfo.myAdmissionYear << "\n"; 
    cout << "string: " << mySchoolInfo.myGraduateYear << "\n";
    cout << "==================Example 11===================\n";    
    cout << "string: " << example11 << "\n";
    cout << "my English level is: " << myLevel << "\n";  
    cout << "==================Example 12===================\n";
    cout << "string: " << example12 << "\n";
    cout << "string: " << myFavouriteFood << "\n"
            << "string: " << food << "\n";
    cout << "==================Example 13===================\n";
    cout << "string: " << example13 << "\n";
    cout << "string: " << myFavouriteDrink << "\n"
            << "string: " << *drink << "\n";
    cout << "==================Example 14===================\n";
    cout << "string: " << example14 << "\n"; 
    cout << "int: " << mainMemory << "GB" << "\n"
            << "int: " << *memory << "GB" << "\n";
    cout << "=============================================================\n";
    cout << "=================End of Standard Example=====================\n";
    cout << "=============================================================\n";
    cout << "=============================================================\n";
    return 0;
}

    

    

    
