#include<iostream>
#include<math.h>
using namespace std;
int conver_1(int num){
    float ans = 0 ; // why not int
    int power = 0 ;
    while(num != 0){ // while loop runs till the given number becomes zero
        int bit = num & 1 ; // extracting each bit by of the number's binary form
        num = num >> 1 ; // left shifting the number by one bit , thus dividing the number by 2
        ans = (bit * (pow(10 ,power))) + ans ;
        power++; // incrementing the power
    }
    return ans;

}


int conver_2(int num2){

}
int main(){
    int n ;
    while(n > 0){ // while loop runs till the user input a number less than or equal to zero , [ <= 0] 
        cin >> n;
        cout << conver_1(n) << endl;
    }
}