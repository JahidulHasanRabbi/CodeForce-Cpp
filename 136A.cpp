#include<iostream>

using namespace std;

int main()
{
    int n,a,i,p[100];
    cin >> n;

    for(i=1; i<=n; i++) {
        cin >> a;
        p[a] = i;
    }

    for(i=1; i<=n; i++) {
        cout << p[i] << " ";
    }

    return 0;
}