#include <iostream>
using namespace std;
int main(){
    int a = 10 ;
    // int b = ++a;
    cout << a << endl;
    int c = ++a + a++;
    // cout << ++a << endl ;
    // cout << b << endl ;
    cout << c << endl;
}