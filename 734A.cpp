#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string won;
    cin >> won;
    int a=0, d=0;

    for(int i=0; i<n; i++) {
        if(won[i] == 'A') {
            a++;
        }
        else {
            d++;
        }
    }

    if( a < d) {
        cout << "Danik" << endl;
    }
    else if( a > d) {
        cout << "Anton" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}