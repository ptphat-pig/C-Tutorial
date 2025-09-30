#include <iostream>
#include <cmath>
using namespace std;

double findTheSumOfTheSeries(int n){
    double result;
    double sum = 0.0;
    for (int i = 1; i <= n; i++){
        result = 1.0 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << result <<"\n";
        sum += result;
    }
    return sum;
}

int findSumOfTheSeries(int n){
    int result = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        result = i * i;
        cout << "i*i = " << result << "\n";
        sum += result;
    }
    return sum;
}

int sumCalculateTheSeries(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        int subSum = 0;
        for (int j = 1; j <= i; j++){
            subSum += j;
        }       
        cout << i << ":" << subSum << "\n";
        sum += subSum;
    }
    return sum;
}

double findTheSumOfSeriesEx14(int x, int n){
    double sum = 1.0;
    double u;
    double sign;
    cout << "X: " << x << "\n";
    for (int i = 1; i < n; i++){
        u = pow(x, 2*i);
        double sub = 1.0;
        for (int j = 1; j <= 2*i; j++){
            sub *= j;
        }
        if (i % 2 == 0){
            sign = 1;
        } else {
            sign = -1;
        }
        sum += (sign * u/sub);
    }
    return sum;
}


    


int main(){
    // //Example 11:
    // double n = 5;
    // double sum = findTheSumOfTheSeries(n);
    // cout << "The sum of the above series is: " << sum << "\n";

    //Example 12:
    // int n = 5;
    // int sum = findSumOfTheSeries(n);
    // cout << "The sum of the above series is: " << sum << "\n";

    // Example 13:
    // int n = 5;
    // int sum = sumCalculateTheSeries(n);
    // cout << "The sum of the above series is: " << sum << "\n";

    // Example 14:
    int x = 3;
    int n = 4;
    double sum = findTheSumOfSeriesEx14(x, n);
    cout << "The sum of the above series is: " << sum << "\n";

}