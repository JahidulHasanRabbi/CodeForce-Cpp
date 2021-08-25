#include<iostream>
#include<array>

using namespace std;

int main()
{
    int n, sol[100];
    cin >> n;
    int i, count=0;

    for(i=0; i<n; i++) {
        cin >> sol[i];
    }

    for(i=n; i>0; i--) {
        if(sol[i] > sol[i-1]) {
            swap(sol[i], sol[i-1]);
            count++;
            cout << sol[i];
        }
    }

    cout << count << endl;

    return 0;
}