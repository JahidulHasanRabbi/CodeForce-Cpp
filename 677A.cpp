#include<iostream>

using namespace std;

int main()
{
    int n,h,a,i,sum=0,count=0;
    cin >> n >> h;

    for(i=0; i<n; i++) {
        cin >> a;
        if(a <= h) {
            count++;
        }
        else if(a > h) {
            count+=2;
        }
    }

    cout << count << endl;

    return 0;
}