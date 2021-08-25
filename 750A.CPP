#include<iostream>

using namespace std;

int  main()
{
    int n, k, i;
    cin >> n >> k;
    int ans=0;

    for(i=1; i<=n; i++) {
        ans+=i*5; 
        if(ans+k >= 240) {
            if(ans+k > 240) {
                cout << i-1 << endl;
                return 0;
            }
            else if(ans+k == 240) {
                cout << i << endl;
                return 0;
            }
        }
    }

    cout << n << endl;

    return 0;
}