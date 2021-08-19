#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main(){
    vector<string> S(4);
    for(int i =0;i<4;i++){
        cin >> S.at(i);
    }
    for(int i=0;i<4;i++){
        for(int j =0;j<4;j++){
            if(i!=j && S.at(i) == S.at(j)){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}