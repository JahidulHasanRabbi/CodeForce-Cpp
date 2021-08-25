#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, e[100],i;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> e[i];
    }

    sort(e, e+n);

    for(i=0; i<n; i++) {
        cout << e[i] << " ";
    }

    return 0;
}