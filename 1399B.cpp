#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);

        for(auto &it : a) {
            cin >> it;
        }
        for(auto &it : b) {
            cin >> it;
        }

        int min_a = *min_element(a.begin(), a.end());
        int min_b = *min_element(b.begin(), b.end());

        long long ans = 0;
        for(int i=0; i<n; i++) {
            ans+= max(a[i]-min_a, b[i]-min_b);
        }

        cout << ans << endl;

    }
    return 0;
}