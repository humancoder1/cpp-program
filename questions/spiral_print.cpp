#include<bits/stdc++.h>
using namespace std;
vector<int> Spiral_print_Matrix(vector<vector<int>> & matrix){
    int row = matrix.size(); // no. of rows or no. of arrays in the the parent array
    int col = matrix[0].size(); // no. of elements in first array of the parent array , therefore no. of  columns
    vector<int> ans;
    int top = 0 ;
    int bottom = row - 1;
    int left = 0;
    int right = col - 1;
    while(top <= bottom && left <= right){
        for(int i = left ; i <= right ;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;


        for(int j = top ; j <= bottom ; j++){
            ans.push_back(matrix[j][right]);
        }
        right--;

        if (top <= bottom){
            for(int x = right ; x >= left ; x--){
                ans.push_back(matrix[bottom][x]); 
            }
            bottom -- ;
        }
        
        if(left <= right){
            for(int y = bottom ; y >= top ; y--){
                ans.push_back(matrix[y][left]);
            }
            left++ ;
        }
    }
    return ans;
    
}



int main(){
    // int arr[4][4] = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};
    // int arr [4][1] = {{1},{2},{3},{4}};
    // int arr [1][4] = {1,2,3,4};
    // int top = 0 ;
    // int bottom = 3;
    // int left = 0;
    // int right = 3;
    // while(top <= bottom && left <= right){
    //     for(int i = left ; i <= right ;i++){
    //         cout << arr[top][i]<< " ";
    //     }
    //     top++;


    //     for(int j = top ; j <= bottom ; j++){
    //         cout << arr[j][right] << " ";
    //     }
    //     right--;

    //     if (top <= bottom){
    //         for(int x = right ; x >= left ; x--){
    //             cout << arr[bottom][x] << " "; 
    //         }
    //         bottom -- ;
    //     }
        
    //     if(left <= right){
    //         for(int y = bottom ; y >= top ; y--){
    //             cout << arr[y][left] << " ";
    //         }
    //         left++ ;
    //     }
    // }
    // return 0 ;
    vector <vector <int>> arr =  {{1,2,3,4} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};

}