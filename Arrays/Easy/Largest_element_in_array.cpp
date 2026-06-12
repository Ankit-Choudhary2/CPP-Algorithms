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
    vector<int> vec;
    int x;
    while(cin >> x) vec.emplace_back(x);
    
    cout << "Largest: " << largest_element(vec) << endl;
    return 0;
}