#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];

    int maxx=0;
    for(int i=0; i<n; i++) {
        cin >> b[i];
        if(maxx < b[i]) {
            maxx=b[i];
        }
    }

    int ans=0;
    for(int i=0; i<n; i++) {
        if(b[i] < maxx) {
            ans += maxx -b[i];
        }
    }

    cout << ans << endl;

    return 0;
}