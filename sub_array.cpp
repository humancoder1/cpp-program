#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,7,5};
    int size = 5;
    for(int i = 0 ; i < size ; i++){
        for (int j = i ; j < size ; j++){
            cout << "[";
            for(int k = i ; k <= j ; k++){
                cout << arr[k] << " " ;
            }
            cout << "]";
            cout << " ";
        }
        cout <<endl;
    }
    return 0 ;    
}
