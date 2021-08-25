#include<iostream>

using namespace std;

int main()
{
    long long int n,c,i, sum=0;
    cin >> n;

    for(i=0; i<n; i++) {
        cin >> c;
        sum+=c;
    }

    if(sum%4 != 0 && sum%4 < 4) {
        sum=(sum/4)+1;
        cout << sum << endl;
    }
    else {
        sum/=4;
        cout << sum << endl;
    }

    return 0;
}