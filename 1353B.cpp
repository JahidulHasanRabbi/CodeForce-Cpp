#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n], b[n];
    
        for(int i=1; i<=n; i++) {
            cin >> a[i];
        }
        for(int i=1; i<=n; i++) {
            cin >> b[i];
        }

        sort(a+1, a+n+1);
        sort(b+1, b+n+1);

        for(int i=1; i<=k; i++) {
            if(a[i] > b[n-i+1]) {
                break;
            }
            else{
                swap(a[i], b[n-i+1]);
            }
        }
        
        int array_sum = 0;
        for(int i=1; i<=n; i++) {
            array_sum+= a[i];
        }

        cout << array_sum << endl;

    }

    return 0;
}