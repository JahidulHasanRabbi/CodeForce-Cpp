#include<iostream>

using namespace std;

int main()
{
    const long t=10;
    long long n;
    long long a, b;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a >> b;
        long long dif=(a-b);
        if(dif < 0) {
            dif = -dif;
        }
        long long ans = (dif+t-1)/t;
        cout << ans << endl;
    }

    return 0;
}