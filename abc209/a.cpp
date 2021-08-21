#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int N,X;
    cin >> N >> X;
    vector<int> A(N+1);
    for(int i =1;i<=N;i++){
        cin >> A.at(i);
    }
    int sum =0;
    for(int i=1;i<=N;i++){
        if( i%2 ==0 || i==0){
            sum = sum + A.at(i) -1 ;
        }else{
            sum = sum + A.at(i);
        }
    }

    if(X >= sum){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl; 
    }
}