#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int , string> a, pair<int , string> b)
{
    if (a.first != b.first)
        return (b.first<a.first);
    else
    return(b.second>a.second);
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, string>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].second << " " << arr[i].first << endl;
    }
}
