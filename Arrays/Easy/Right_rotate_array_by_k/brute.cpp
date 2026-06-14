#include<bits/stdc++.h>
using namespace std;

void right_rotate_by_k(int k, vector<int>& vec) {
    int n = vec.size();
    vector<int> temp(k);
    for(int i = (n - k); i < n; i++) {
        temp[i - (n - k)] = vec[i];
    }
    for(int i = n - 1; i >= k; i--) {
        vec[i] = vec[i - k];
    }
    for(int i = 0; i < k; i++) {
        vec[i] = temp[i];
    }
}
int main() {
    int k;
    cin >> k;
    vector<int> vec;
    int x;
    while(cin >> x) vec.emplace_back(x);
    right_rotate_by_k(k,vec);
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}