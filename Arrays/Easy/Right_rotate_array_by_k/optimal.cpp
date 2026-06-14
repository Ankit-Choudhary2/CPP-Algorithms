#include <bits/stdc++.h>
using namespace std;

void Left_rotate_by_k(vector<int>& vec, int k) {
    int n = vec.size();
    reverse(vec.begin() + (n - k), vec.end());
    reverse(vec.begin() , vec.begin() + (n - k));
    reverse(vec.begin(), vec.end()); 
    
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
TIME COMPLEXITY:: O(2n)
    
SPACE COMPLEXITY :: O(1)

*/