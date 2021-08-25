#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int shop;
    cin >> shop;
    int x[shop];

    for(int i=0; i<shop; i++) {
        cin >> x[i];
    }

    sort(x, x+shop);

    int day;
    cin >> day;
    int l = shop-1;
    
    while(day--)
    {
        int m;
        cin >> m;
        bool flag = true;
        for(int i=l; i>=0; i--) {
            if(m < x[0]) {
                flag = true;
                break;
            }
            if( m >= x[i]) {
                cout << i+1 << endl;
                flag = false;
                break;
            }

            flag = true;
        }
        if(flag) {
            cout << "0" << endl;
        }
    }


    return 0;
}