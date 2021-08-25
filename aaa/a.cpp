#include <bits/stdc++.h>
#include <functional>  //これが必要

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> D(N);
    for(int i=0;i<N;i++){
        cin >> D.at(i);
    }
    sort(D.begin(),D.end(),greater<int>());
    
    int sum =1;

    for(int i =1;i<N;i++){
        if(D.at(i -1) > D.at(i)){
            sum = sum + 1;
        }
    }

    cout << sum << endl;
}
