#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;

    if(a.length() > c.length()) {
        cout << "NO" << endl;
        return 0;
    }

    a.insert(a.length(), b);

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    int count=c.length();
    for(int i=0; i<c.length(); i++) {
        if(a[i] == c[i]) {
            count--;
            }
    }

    if(count == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}