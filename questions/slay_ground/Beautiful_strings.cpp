#include<bits\stdc++.h>
using namespace std;

string create_Beautiful_string(int size , bool bit){
    string expe_str = "";
    for(int i = 0 ; i < size ; i++){
        if(bit == 0){
            expe_str += '0';
            bit = true;
        }
        else{
            expe_str += '1';
            bit = false;
        }
    }
    return expe_str;
}

int find_difference(string original_Str , string expected_Str){
    int diff = 0;
    for(int i = 0 ; i < original_Str.size() ; i++){
        if(original_Str[i] != expected_Str[i]){
            diff++;
        }
    }
    return diff;
}

int makeBeautiful(string str) {
	// Write your code here
    // int diff_string_01 = 0 ; // counts for difference between the beautiful string_01 and original string 
    // int diff_string_10 = 0 ; // counts for difference between the beautiful string_10 and original string 
    // vector<char> string_01 ; // containing possibility of beautiful string -> "0101010....." 
    // vector<char> string_10 ; // containing possibility of beautiful string -> "1010101....."
    // for(int i = 0 ; i < str.size() ; i++){
    //     string_01.push_back('0');
    //     string_10.push_back('1');
    // }

    // for(int j = 1 ; j < str.size() ; j += 2){
    //     string_01[j] = '1'; 
    //     string_10[j] = '0';
    // }
    // for(int k = 0 ; k < str.size() ; k++){
    //     if(str[k] != string_01[k]){ // comparision between the original string and beautiful_string_01
    //         diff_string_01++;
    //     }
    //     if(str[k] != string_10[k]){ // comparision between the original string and beautiful_string_10
    //         diff_string_10++;
    //     }
    // }
    // // cout << diff_string_01 << " " << diff_string_10 << endl;
    
    string string_01 = create_Beautiful_string(str.size() , 0); // containing possibility of beautiful string -> "0101010....." 
    // cout << string_01 << endl;

    string string_10 = create_Beautiful_string(str.size() , 1); // containing possibility of beautiful string -> "1010101....."
    // cout << string_10 << endl;

    int diff_string_01 = find_difference(str , string_01);
    int diff_string_10 = find_difference(str , string_10);




    return min(diff_string_01,diff_string_10); //answer is the minimum difference

}

int main(){
    int test_Case;
    cin >> test_Case;

    while(test_Case--){
        string str1 ;
        cin >> str1;
        int ans = makeBeautiful(str1);
        cout << ans << endl;
    }

return 0 ;
}