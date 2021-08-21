#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
   
    vector<int> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    int count = 0;
    int i = 1;

    while (1) {
        if (i == 2) {
            cout << count << endl;
            return 0;
        }
        i = vec.at(i - 1);
        count++;
 
        if (count >= N) {
            break;
        }
    }
    cout << -1 << endl;
}
