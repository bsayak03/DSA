#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    s.push_back('#');
    int i = 0;
    while (s[i] != '#')
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            if (i - 1 >= 0)
                i = i - 1;
        }
        else
            i++;
    }
    s.pop_back();
    return s;
}

int main()
{
    string s = "abbaca";
    cout <<removeDuplicates(s) << endl;
    return 0;
}