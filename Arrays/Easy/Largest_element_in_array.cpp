#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &vec)
{
    if (vec.empty())
        return -1;
    int largest = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] > largest)
            largest = vec[i];
    }
    return largest;
}

int main()
{
    vector<int> vec = {3, 7, 1, 9, 4};
    cout << "Largest: " << largest_element(vec) << endl;
    return 0;
}