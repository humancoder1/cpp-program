#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_case ;
	cin >> test_case ;
	while(test_case--){
	    int X_plates , Y_plates;
	    cin >> X_plates >> Y_plates;
	    
	    if ((X_plates/Y_plates) >= 20){
	        cout << 20 << endl;
	    }
	    
	    else if((X_plates/Y_plates) < 20){
	        cout << X_plates/Y_plates << endl;
	    }
	}
	return 0;
}