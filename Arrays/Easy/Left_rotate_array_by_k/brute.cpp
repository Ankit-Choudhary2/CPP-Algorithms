#include <bits/stdc++.h>
using namespace std;

void Left_rotate_by_k(vector<int>& vec, int k) {
    int n = vec.size();

    vector<int> temp(k);
    for(int i = 0; i < k; i++) {
        temp[i] = vec[i];
    }

    for(int i = k; i < n; i++) {
        vec[i-k] = vec[i];
    }
    for(int i = n-k; i < n; i++) {
        vec[i] = temp[i-(n-k)];
    }
    
}
int main() {    
    vector<int> vec;
    int k;
    cin >> k;
    int x;
    while(cin >> x) vec.emplace_back(x);
    Left_rotate_by_k(vec,k);

    for(int x : vec) cout << x << " ";
    cout << endl;
}
/*
TIME COMPLEXITY:: O(n+k)
    
SPACE COMPLEXITY :: O(k)

*/