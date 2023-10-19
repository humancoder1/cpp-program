#include<bits/stdc++.h>
using namespace std;

int Solution(string str_S , string str_K , int len_N , int len_M){
    map<char , int> digits;
    digits['0'] = 0 , digits['1'] = 1 ,digits['2'] = 2 , digits['3'] = 3;
    digits['4'] = 4 , digits['5'] = 5 ,digits['6'] = 6 , digits['7'] = 7;
    digits['8'] = 8 , digits['9'] = 9 ;
    int moves = 0;
    for(int i = 0 ; i < len_M ; i++){
        // cout << str_K[i] << endl;
        int diff = 5 ;
        char ele = str_K[i];
        for(int j = 0  ;j < (len_N-(len_M-(i+1))) ; j++){
            diff = min(diff , abs(digits[str_S[j]] - digits[ele]));
        }
        // cout << endl;
        moves += diff;
        // cout << diff << endl;
    }
    // if(moves == len_M){
    //     return 0;
    // }
    return moves;
}
int main(){
    int test_Case;
    cin >> test_Case;
    while (test_Case--){
        int N , M;
        string S , K ; 
        cin >> N >> M;
        cin >> S >> K;
        cout << Solution(S,K,N,M) << endl;
        // Solution(S,K,N,M);
    }
    return 0;
}