#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string w, t;
    cin >> w >> t;

    reverse(w.begin(), w.end());

    if(w == t) {
        cout << "YES" << endl;
    }
    else 
        cout << "NO" << endl;

    return 0;
}