#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
	// your code goes here
    int test_case;
    cin >> test_case;
	while(test_case > 0){
    	int num_streak;
        vector<int> Om_problem ;
        int om_pro , count_om = 0;
        vector<int> Addy_problem;
        int addy_pro , count_addy = 0;
        cin >> num_streak;
        for (int i = 0 ; i < num_streak ; i++){
            cin >> om_pro ;
            Om_problem.push_back(om_pro);
        }
        // cout<< count_om << endl;
        for(int j = 0 ; j < num_streak ; j++){
            cin >> addy_pro;
            // cout << addy_pro << endl;
            Addy_problem.push_back(addy_pro);
        }
        // cout << count_addy <<endl; 
        for(int k = 0 ; k < num_streak ; k++){
            if(k !=0 && Om_problem[k] == 0){
                break;
            }
            count_om++;    
        }
        for(int l = 0 ; l < num_streak ; l++){
            if(l !=0 && Addy_problem[l] == 0){
                break;
            }
            count_addy++;    
        }
        
        if (count_om > count_addy){
            cout << "Om" << endl;
        }
        else if(count_addy > count_om){
            cout << "Addy" << endl;
        }
        else if(count_addy == count_om){
            cout << "Draw" << endl;
        }
        test_case--;
	}
	return 0;
}