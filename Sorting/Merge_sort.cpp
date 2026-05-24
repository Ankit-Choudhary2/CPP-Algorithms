#include <bits/stdc++.h>
using namespace std;

void merge_both(vector <int> &vec, int low, int mid, int high ) {
    int left = low;
    int right = mid + 1;
    vector <int> temp;
    while(left <= mid && right <= high) {
        if(vec[left] <= vec[right]) {
            temp.push_back(vec[left]);
            left++;
        }
        else {
            temp.push_back(vec[right]);
            right++;
        }
        
    } 
    while(left <= mid) {
        temp.push_back(vec[left]);
            left++;
    }
    while(right <= high) {
        temp.push_back(vec[right]);
            right++;
    }
    
    for(int i = low; i <= high; i++) {
        vec[i] = temp[i-low];
    }
}
void merge_sort(vector <int> &vec, int low, int high) {
    int mid = (low + high)/2;
    if(low == high) return;
    merge_sort(vec, low, mid);
    merge_sort(vec, mid +1, high);
    merge_both(vec, low, mid, high);
}

int main() {
    freopen("D:\\CPP\\CPP-Algorithms\\input.txt", "r", stdin);
    // freopen("D:\\CPP\\output.txt", "w", stdout);
    int n;
    cin >> n;
    vector <int> vec;
    for(int i = 0; i < n; i++) {
        int ch;
        cin >> ch;
        vec.push_back(ch);
    }
    int low = 0;
    int high = n-1;
    merge_sort(vec, low, high);
    
    for(int ch :vec) {
        cout << ch << " ";
    }

}
