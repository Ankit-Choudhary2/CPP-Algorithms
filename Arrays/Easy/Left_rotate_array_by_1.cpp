#include <bits/stdc++.h>
using namespace std;

void Left_rotate_by_1(vector<int>& vec) {
    int n = vec.size();
    int temp = vec[0];
    for(int i = 1; i < n; i++) {
        vec[i - 1] = vec[i];
    }
    vec[n-1] = temp;
}
int main() {    
    vector<int> vec;
    int x;
    while(cin >> x) vec.emplace_back(x);
    Left_rotate_by_1(vec);

    for(int x : vec) cout << x << " ";
    cout << endl;   

}