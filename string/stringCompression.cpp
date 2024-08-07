#include <bits/stdc++.h>
#include <string>
using namespace std;

int compress(vector<char> &chars)
{
    int size = chars.size();
    int currIdx = 0;
    int ansIdx = 0;

    while (currIdx < size)
    {
        int nextIdx = currIdx + 1;
        while (nextIdx < size && chars[currIdx] == chars[nextIdx])
        {
            nextIdx++;
        }
        // we will come out of while in only two cases
        // case 1 : vector finished
        // case 2 : when we encounter a different character

        chars[ansIdx++] = chars[currIdx];
        int count = nextIdx - currIdx;
        if (count > 1)
        {
            string freq = to_string(count);
            for (char digits : freq)
                chars[ansIdx++] = digits;
        }
        currIdx = nextIdx;
    }

    return ansIdx;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(chars) << endl;
    return 0;
}