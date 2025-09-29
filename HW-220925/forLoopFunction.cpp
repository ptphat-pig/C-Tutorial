#include <iostream>
#include <string>
using namespace std;

void printNaturalNumber() {
    int i;
    for (i = 1; i <= 10; i++){
        cout << i << " ";
    }
}

void sumOf10NaturalNumbers() {
    int i;
    int result = 0;
    for (i = 1; i <= 10; i++){
        cout << i << " ";
        result += i;
    }
    cout << "\nThe sum of first 10 natural numbers: " << result << "\n";
} 

int sumOfNaturalNumbers(int n){
    int result = 0;
    if (n <= 0)
        return -1;

    for (int i = 1; i <= n; i++){
        cout << i << " ";
        result += i;
    }
    return result;
}

bool isPerfectNumber(int n){
    int result = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            result += i;
        }
    }
    return result == n;
}
void findPerfectNumberInRange(int a, int b){
    cout << "The perfect numbers between " << a << " to " << b << " are :" << "\n";
    for (int n = a; n <= b; n++){
        bool result = isPerfectNumber(n);
        if ( result == true){
            cout << n << " ";
        }
    }
}

bool isPrimeNumber(int n){
    if (n <= 1){
        return false;
    }
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (i != 1 && i != n){
                return false;
            }
        }
    }
    return true;
}

void findPrimeNumberInRange(int a, int b){
    cout << "The Prime numbers between " << a << " to " << b << " are :" << "\n";
    for (int i = a; i <= b; i ++){
        bool result = isPrimeNumber(i);
        if (result == true){
            cout << i << " ";
        }


    }
}

int findPrimeNumberWithinARange(int a, int b){
    cout << "Input number for starting range: " << a << "\n";
    cout << "Input number for ending range: " << b << "\n";
    cout << "The prime numbers between " << a << " and " << b << " are: " << "\n";
    int result = 0;
    for (int i = a; i <= b; i++){
        bool res = isPrimeNumber(i);
        if (res == true){
        cout << i << " " << "\n";
        result += 1;
        }
    }
    return result;
}

int findTheFactorialOfANumber(int n){
    cout << "Input a number to find the factorial: " << n << "\n";
    int result = 1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int  findTheLastPrimeNumberThatOccursBeforeTheEnteredNumber(int n){
    cout << "Input a number to find the last prime number occurs before the number: " << n << "\n";
    int result = 0;
    /* for (int i = 1; i <= n; i++){
        bool res = isPrimeNumber(i);
        if (res == true){
            result = i;
        }
    } */
    for (int i = n; i > 0; i--){
        bool res = isPrimeNumber(i);
        if (res == true){
            result = i;
            break;
        }
    }
    return result;
}

int findGreatestCommonDivisor(int a, int b){
    int result;
    int n = min(a, b);
    for (int i = n; i > 0; i--){
        if (a % i == 0 && b % i == 0){
            result = i;
            break;
        }
    }
    return result;
}

int findSumOfDigits(int num){
    string strNum = std::to_string(num);
    int digit;
    int result = 0;
    if (strNum.length() == 1){
        return num;
    }
    for (int i = 1; i <= strNum.length(); i++){
        digit = num % 10;
        num /= 10;
        result += digit;
    }
    return result;
}

int main(){
    // Example 1:
    // printNaturalNumber();

    // Example 2:
    // sumOf10NaturalNumbers();

    // Example 3:
    // int n;
    // cout << "Type value of n: ";
    // cin >> n;
    // int result = sumOfNaturalNumbers(n);
    // cout << "\nThe sum of first " << n << " natural numbers: " << result << "\n";

    // Example 4:
    // findPerfectNumberInRange(4, 70);
    
    // Example 5:
    // bool result = isPrimeNumber(7);
    // cout << result << "\n";
    // findPrimeNumberInRange(7, 70);

    // Example 6:
    // int a;
    // int b;
    // cout << "Type value of a: ";
    // cin >> a;
    // cout << "Type value of b: ";
    // cin >> b;
    // int result =  findPrimeNumberWithinARange(a , b);
    // cout << "The total number of prime numbers between " << a << " to " << b << " is: " << result << "\n";

    // Example 7:
    // int n;
    // cout << "Type value of n: ";
    // cin >> n;
    // int result = findTheFactorialOfANumber(n);
    // cout << "The factorial of the given number is: " << result << "\n";

    // Example 8:
    // int n = 50;
    // int result = findTheLastPrimeNumberThatOccursBeforeTheEnteredNumber(n);
    // cout << result << " is the last prime number before " << n << "\n";
    
    // Example 9:
    // int a = 51;
    // int b = 20;
    // int result = findGreatestCommonDivisor(a, b);
    // cout << "The Greatest Common Divisor is: " << result << "\n";

    // Example 10:
    int num = 1;
    int result = findSumOfDigits(num);
    cout << "The sum of digits of " << num << " is: " << result << "\n";

}