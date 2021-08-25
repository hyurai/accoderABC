#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    int p;
    vector<tuple<string,int,int>> r;
    for(int i=0; i<n; i++){
        cin>>s>>p;
        r.emplace_back(s,100-p,i);
    }

    sort(r.begin(),r.end());

    // (0から数えて)2番目の変数を取り出す
    for(int i=0; i<n; i++){
        cout<<get<2>(r[i])+1<<endl;
    }
}