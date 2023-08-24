#include<iostream>
int count_freq(int arr[] ,int n ){
    int freq = 0; 
    int ele = arr[0];
    for(int i = 0 ; i < n ; i++){
        if (arr[i] == ele){
            freq++;
        }
    }
}
int main(){
    int nums [10];
    int split = -1;
    for(int i = 0 ; i < 10 ; i++){
        if (i < 10 && nums[i-1] == nums[i]){
            split = i;
        }

    }
}