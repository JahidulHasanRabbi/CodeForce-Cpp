#include<iostream>

using namespace std;

int main()
{
    int n,k, p[100], advance=0;
    cin >> n >> k;

    for(int i=0; i<n; i++) {
        cin >> p[i];
    }
    for(int i=0; i<n; i++) {
        if(p[i] >= p[k-1]&&p[i]>0) {
            advance++;
        }
    }
    cout << advance << endl;

    return 0;
}