//C++
#include <bits/stdc++.h>
using namespace std;

int cnt;

void bt(int k, vector<int>& X, string& s)
{
    if (k == 4)
    {
        vector<int> fr(10);
        for(int i=0; i<4; i++)
            fr[X[i]]++;
        bool issol = 1;
        for(int i=0; i<10; i++){
            if (s[i] == 'o' && fr[i] == 0)
                issol = 0;
            if (s[i] == 'x' && fr[i] > 0)
                issol = 0;
        }
        if (issol)
            cnt++;
        return;
    }
    for (int x = 0; x < 10; x++)
    {
        X[k] = x;
        bt(k+1, X, s);
    }
}

int main()
{
    string s;
    cin >> s;
    vector<int> X(4);
    bt(0, X, s);
    cout << cnt << endl;
    return 0;
}
