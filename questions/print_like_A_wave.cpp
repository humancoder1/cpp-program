#include<bits/stdc++.h> //for including every header file
// #include<iostream>
using namespace std;
void print_in_Sin_wave(int arr[][4] ){
    int row_n = 0;
    for(int i = 0 ; i < 4 ; i++){
        row_n=2;
        for(int j = 0 ; j < 3 ; j++){
            // cout << i << " ";
            //if (i%2 == 0){
            if ( i&1 ){//top to bottom
                cout << arr[j][i] << " ";
            }
            else{//bottom to top
                cout << arr[row_n][i] << " ";
                row_n--;
            }
        }
    }
}
int main(){
    int test_Case;
    cin >> test_Case;
    while(test_Case--){
        vector<vector<int>> arr [3][4];
        for(int row = 0 ; row < 3 ; row++){
            for(int col = 0 ; col < 4 ; col++){
                // cin >> arr[row][col];
            }
        }
    }
    // vector<int> arr = {1,2,3,4,5,6,7};
    // cout << arr.size()<<endl;
    

}