#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    // sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    // for (int i = 0; i < s.size(); i++)
    //     cout << s[i] << "=>" << mp[s[i]] << endl;

    for (auto c : mp)
        cout << c.first << "=>" << c.second << endl;
}