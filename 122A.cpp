#include<iostream>

using namespace std;

int main()
{
    int num[14]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 777,  774, 747};
    int n;
    bool flag=0;
    cin >> n;
    for(int i=0; i<14; i++) {
        if(n%num[i] == 0) {
            flag=true;
        }
    }

    if(flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}