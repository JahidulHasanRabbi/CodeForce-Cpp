#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int s, n, x, y;
    cin >> s >> n;
    vector<pair <int, int>> dragon;

    for(int i=0; i<n; i++) {
        cin >> x >> y;
        dragon.push_back(make_pair(x,y));
    }

    sort(dragon.begin(), dragon.end());

    for(int i=0; i<n; i++) {
        if(dragon[i].first >= s)   {
            cout << "NO" << endl;
            return 0;
        }

        s+=dragon[i].second;
    }

    cout << "YES" << endl;

    return 0;
}