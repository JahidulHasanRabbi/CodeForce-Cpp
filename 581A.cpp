#include<iostream>

using namespace std;

int main()
{
    int a, b;
    cin >>  a >> b;

    int ans=0;

    if(a>b) {
        cout << b << " ";
        ans=a-b;
        if(ans == 0 || ans == 1) {
            cout << "0" << endl;
        }
        else {
            cout << ans/2 << endl;
        }
    }
    else {
        cout << a << " ";
        ans=b-a;
        if(ans == 0 || ans == 1) {
            cout << "0" << endl;
        }
        else {
            cout << ans/2 << endl;
        }

    }

    return 0;
}