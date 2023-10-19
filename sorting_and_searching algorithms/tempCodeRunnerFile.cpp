#include<iostream>
using namespace std;

int GCD_Euclidean(int divisor , int dividend){
    // TIME COMPLEXITY --> O(log(min(a,b)))
    // whenever division happening time complexity is in log

    if (divisor == 0){
        return dividend ;
    }
    int temp = divisor;
    divisor = dividend % divisor ;
    dividend = temp;
    return GCD_Euclidean(divisor , dividend);
    //or 
    // return GCD_Euclidean(dividend % divisor , divisor); 
}

int GCD_Euclidean_Iterative(int num1 , int num2){
    while(num1 > 0 && num2 > 0){