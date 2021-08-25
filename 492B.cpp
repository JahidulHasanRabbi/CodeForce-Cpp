#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{ 
    int n, l, r;
    cin >> n >> l;
    int s[n];

    int i;
    for(i=0; i<n; i++) {
        cin >> s[i] ;
    }

    sort(s, s+n);
    r= max(s[0], l-s[n-1]) * 2;

    for(i=0; i<n-1; i++) {
        r=max(r, s[i+1]-s[i]);
    }

    cout << fixed << setprecision(20) << r/2.0 << endl;



    return 0;
}