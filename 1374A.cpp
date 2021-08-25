#include<iostream>

using namespace std;

int main()
{
    int t, x, y, n;
    cin >> t;

    while(t--)
    {
        cin >> x >> y >> n;
        int ans = 0;
        for(int i=n; i>=0; i--) {
            if(i%x == y) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}