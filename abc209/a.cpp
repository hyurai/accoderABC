#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int H,W;
    cin >> H >> W;
    vector<vector<char>> vec(H+2,vector<char>(W+2));
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            cin >> vec[i][j];
        }
    }
    for(int i=0;i<H+2;i++){
        for(int j =0;j<1;j++){
            vec[i][j] = '#'; 
        }
    }
    for(int i=0;i<1;i++){
        for(int j =0;j< W+2;j++){
            vec[i][j] = '#';
        }
    }
    for(int i = 0;i<H+2;i++){
        for(int j=W+1;j< W+2;j++){
            vec[i][j] = '#';
        }
    }
    for(int i=H+1;i<H+2;i++){
        for(int j=0;j<W+2;j++){
            vec[i][j] = '#';
        }
    }

    for(int i=0;i<H+2;i++){
        for(int j=0;j<W+2;j++){
            if(j== W+1){
                cout << vec[i][j] << endl;
            }else{
                cout << vec[i][j];
            }
           
        }
    }

}