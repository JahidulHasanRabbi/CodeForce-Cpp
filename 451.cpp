#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i=0;

    if(n>m) {
        i=m;
    }
    else {
        i=n;
    }

    if(i%2 == 0) {
        cout << "Malvika" << endl;
    }
    else {
        cout << "Akshat" << endl;
    }

    return 0;
}