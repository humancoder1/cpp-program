#include<bits\stdc++.h>
using namespace std;

// int my_func(){}
bool checkArmstrong(int n){
	//Write your code here
	int new_n = 0;
	int temp = n;
	int digit_count = 0;
	while(n){
		n /= 10;
		digit_count++;
	}
	
	n = temp;

	while(n){
		new_n = pow(n%10,digit_count) + new_n;
		n /= 10;
	}
	if(new_n == temp) {
		return true;
	}
	return false;
}

vector<int> anti_clock_rotate(vector<int> arr, int n)
{
    for(int j = n-1 ; j >=0 ; j--){
        swap(arr[j] , arr[0]);
    }
	return arr;

}



int main(){
    int n  = 15;
    // cout << (int) sqrt(num) << endl ;
    // bool ans = checkArmstrong(371);
    // cout << ans << endl;

	// vector<int> a = {1,2,3,4,5};
	// // a.erase(a.begin());
	// a = anti_clock_rotate(a , a.size());
	// for(int i = 0 ; i < a.size() ; i++){
	// 	cout << a[i] << endl;
	// }
	string num = to_string(20);
	cout << num << endl;
    return 0 ;
}