#include<iostream>
using namespace std;


void find_number(int arr[] ,int start , int end ){

    for(int i = start ; i < end ; i++){
        for(int j = i+1 ; j <= end ; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];

            }
        }
    }

}

int create_number(int arr[] , int start , int end){
    int num = 0;
    for(int i = end ; i >= start ; i--){
        num = num*10 + arr[i];
    }
    return num;
}

int main(){
    int test_case;
    cin >> test_case;
    while(test_case--){
        int arr[6];
        for(int i = 0 ; i < 6 ; i++){
            cin >> arr[i];
        }
        find_number(arr , 0 , 2);

        int num1 = create_number(arr , 0 , 2);
        cout << num1 << endl;

        find_number(arr , 3, 5);
        int num2 = create_number(arr, 3, 5);
        cout << num2 << endl;
    }
}