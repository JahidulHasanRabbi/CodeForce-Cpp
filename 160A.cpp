#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;

    int sum=0;

    for(int i=0; i<n; i++) {
        cin >> s[i];
        sum+=s[i];
    }

    sum=(sum/2);
    sort(s.begin(), s.end());
    int cnt=0, mee=0;

    for(int i=n-1; i>=0; i--) {
        mee+=s[i];
        cnt++;
        if(mee > sum) {
            break;
        }
    }

    cout << cnt << endl;

    return 0;
}