#include<iostream>

using namespace std;

int main()
{
    int n, i;
    long double  per, sum=0;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> per;
        sum+=(per/100);
    }

    sum=(sum/n);
    sum=(sum*100);
    
    cout << sum << endl;

    return 0;
}