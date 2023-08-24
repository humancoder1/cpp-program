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
int main(){
    int num1 = 10 , num2 = 12 , num3 = 32;
    int ans;
    ans = GCD_Euclidean(num1,num2);

    int ans2 =GCD_Euclidean(num3 , ans);
    cout << ans2 << endl;
    
    cout << ans << endl;
    return 0;
}