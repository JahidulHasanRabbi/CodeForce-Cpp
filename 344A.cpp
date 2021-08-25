#include<iostream>

using namespace std;

int main()
{
    int n, i, ch[100000];
    cin >> n;
    int count=0;

    for(i=0; i<n; i++) {
        cin >> ch[i];
    }
    for(i=0; i<n; i++) {
        if(ch[i] != ch[i+1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}