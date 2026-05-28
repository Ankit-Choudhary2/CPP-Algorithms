#include <bits/stdc++.h>
using namespace std;

void merge_both(vector<int> &vec, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    temp.reserve(high - low + 1); // pre sets the size of to save memory
    // merge both halves in sorted order
    while (left <= mid && right <= high)
    {
        if (vec[left] <= vec[right])
        {
            temp.emplace_back(vec[left]);
            left++;
        }
        else
        {
            temp.emplace_back(vec[right]);
            right++;
        }
    }
    // copy remaining elements
    while (left <= mid)
    {
        temp.emplace_back(vec[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(vec[right]);
        right++;
    }
    // write back to original
    for (int indx = low; indx <= high; indx++)
    {
        vec[indx] = temp[indx - low];
    }
}
void merge_sort(vector<int> &vec, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(vec, low, mid);
    merge_sort(vec, mid + 1, high);
    merge_both(vec, low, mid, high);
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int ch;
        cin >> ch;
        vec.emplace_back(ch);
    }
    if (vec.empty())
        return 0;

    int low = 0;
    int high = n - 1;
    merge_sort(vec, low, high);

    for (int ch : vec)
    {
        cout << ch << " ";
    }
}

/*
TIME COMPLEXITY::
    Best : O(nlogn)
    Avg  : O(nlogn)
    Worst: O(nlogn)
SPACE COMPLEXITY ::
    Overall    : O(n)
    Call stack : O(logn)
*/
