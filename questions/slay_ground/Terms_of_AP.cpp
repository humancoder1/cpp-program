#include <bits/stdc++.h> 
using namespace std;

vector < int > termsOfAP(int x) {
    // Write your code here.
    int count = 1 ;
    int i = 1;
    vector<int> ans;
    while(count <= x){
        if((3*i+2) % 4 !=0){
            ans.push_back((3*i+2));
            count++;
        } 
        i++;

    }
    return ans;
}

int main(){
    int num ;
    cin >> num;
    vector<int> res = termsOfAP(num);
    for(int k = 0 ; k < res.size() ; k++){
        cout << res[k] << " ";
    }
    return 0;
}