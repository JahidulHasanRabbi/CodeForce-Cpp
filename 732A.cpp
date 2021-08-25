#include<iostream>

using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int value=k;
    int d=2;
    int count=1;
    while(1)
    {
        int ans = value%10;
        if(ans == 0) {
            cout << count << endl;
            break;
        }
        if(ans == r) {
            cout << count << endl;
            break;
        }
        else {
            value=k*d;
            count++;
            d++;
        }
    }

    return 0;
}