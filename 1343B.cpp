#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int x;
        cin >> x;
        
        x/=2;
        if(x%2) {
            cout << "NO"<< endl;
        }
        else {
            cout << "YES" << endl;
            for(int i=1; i<=x; i++) {
                cout << 2*i << " ";
            }
            for(int i=1; i<x; i++) {
                cout << 2*i-1 << " ";
            }
            cout << 2*x+(x-1)*1 << endl;
        }
    }

    return 0;
}