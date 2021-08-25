#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long color[4], i;
    int count=4;

    for(i=0; i<4; i++) {
        cin >> color[i];
    }
    
    sort(color, color+4);

    for(i=0; i<4; i++) {
        if(color[i] != color[i+1]) {
            count--;
        }
    }

    cout << count << endl;

    return 0;
}