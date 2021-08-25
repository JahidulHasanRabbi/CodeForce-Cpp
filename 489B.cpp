#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int boy, girl;

    cin >> boy;
    int boy_s[boy];
    for(int i=0; i<boy; i++) {
        cin >> boy_s[i];
    }

    cin >> girl;
    int girl_s[girl];
    for(int i=0; i<girl; i++) {
        cin >> girl_s[i];
    }

    int count = 0;

    sort(boy_s, boy_s+boy);
    sort(girl_s, girl+girl_s);

    for(int i=0; i<boy; i++) {
        if(boy_s[i] == girl_s[i]) {
            count++;
        }
        else if(boy_s[i] == girl_s[i]-1) {
            count++;
        }
        else if(boy_s[i] == girl_s[i]+1) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}