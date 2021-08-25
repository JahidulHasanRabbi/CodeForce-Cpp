#include<iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int p[n];

    for(int i=0; i<n; i++) {
        cin >> p[i];
    }

    int maxx = 5;
    int count = 0;

    for(int i=0; i<n; i++) {
        p[i] = maxx - p[i];
        if(p[i] >= k) {
            count++;
        }
    }

    cout << count/3 << endl;

    return 0;
}