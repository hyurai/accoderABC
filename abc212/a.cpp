#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main(){
    char x[4];
    for(int i =0;i<4;i++){
        cin >> x[i];
    }
    bool same = true;
    bool step = true;


    for(int i =0;i<3;i++){
        if(x[i] != x[i+1]){
            same = false;
        }
        if((x[i]+ 1) % 10 != x[i + 1] % 10){
            step = false;
        }
    }
    if( same || step){
        cout << "Weak" << endl;
    }else{
        cout << "Strong" << endl;
    }

    
}