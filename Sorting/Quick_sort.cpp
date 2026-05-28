#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &vec, int low, int high)
{
    int pivot = vec[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (vec[i] <= pivot && i < high)
        {
            i++;
        }
        while (vec[j] > pivot && j > low)
        {
            j--;
        }
        if (i < j)
        {
            swap(vec[i], vec[j]);
        }
    }
    swap(vec[low], vec[j]);
    return j;
}
void qs(vector<int> &vec, int low, int high)
{
    if (low > high)
        return;
    int pIndex = partition(vec, low, high);
    qs(vec, low, pIndex - 1);
    qs(vec, pIndex + 1, high);
}
void quick_sort(vector<int> &vec)
{
    int low = 0;
    int high = vec.size() - 1;
    qs(vec, low, high);
}
int main()
{
    vector<int> vec;
    int x;
    while (cin >> x)
    {
        vec.emplace_back(x);
    }
    if (vec.empty())
        return 0;
    quick_sort(vec);
    for (int x : vec)
    {
        cout << x << " ";
    }
}

/*
TIME COMPLEXITY::
    Best : O(nlogn)
    Avg  : O(nlogn)
    Worst: O(n²)
SPACE COMPLEXITY ::
    Auxillary    : O(1)
    Call stack : O(logn)
*/
