#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    int a[1000], b[1000];
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }

    int k=a[0];
    int max=0, total;
    for(int i=0; i<n; i++) {
        total= b[i]-a[i]+k;
        k=total;
        if(total> max) {
            max=total;
        }
    }

    cout << max << endl;

    return 0;
}