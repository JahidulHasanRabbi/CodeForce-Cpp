#include<iostream>
#include<cstdio>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;

    if(n >= 100) {
        int value=n/100;
        ans+=value;
        n-=(value*100);
    }
    if(n >= 20) {
        int value=n/20;
        ans+=value;
        n-=(value*20);
    }
    if(n >= 10) {
        int value=n/10;
        ans+=value;
        n-=(value*10);
    }
    if(n >= 5) {
        int value=n/5;
        ans+=value;
        n-=(value*5);
    }
    if(n >= 1) {
        int value=n/1;
        ans+=value;
        n-=(value*1);
    }

    cout << ans << endl;


    return 0;
}