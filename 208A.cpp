#include<iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int i, flag=1;

    for(i=0; i<n.length(); i++) {
        if(n[i] == 'W' && n[i+1] == 'U' && n[i+2] == 'B') {
            i+=2;
            if(!flag) {
                cout << " ";
            }      
            continue;
        }
        else {
            flag=0;
            cout << n[i];
        }
    }

    return 0;
}