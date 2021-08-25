#include<iostream>

using namespace std;

int main()
{
    string ch;
    int count=0;
    cin >> ch;

    for(int i=0; i<ch.length(); i++) {
        if(ch[i] == 'H' || ch[i] == 'Q' || ch[i] == 9 ) {
            cout << "YES" << endl;
            break;
        }
        else {
            count++;
        }
    }

    if(count == ch.length()) {
        cout << "NO" << endl;
    }

    return 0;
}