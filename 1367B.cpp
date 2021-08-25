#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) {
            cin >> a[n];
        }

        int b[n];
        int c[n];

        for(int i=0; i<n; i++) {
            a[i]%=2;
            b[i] = i%2;
        }

        sort(a, a+n);
        sort(b, b+n);

        if(a == b) {
            cout << 
        }
    }

    return 0;
}