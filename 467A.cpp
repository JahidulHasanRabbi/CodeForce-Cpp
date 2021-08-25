#include<iostream>

using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    int count=0, sum=0;

    for(int i=0; i<n; i++) {
        cin >> p >> q;
        sum=(q-p);
        if(sum >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}