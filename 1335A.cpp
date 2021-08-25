#include<iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    long w;

    while(n--) {
        cin >> w;
        cout << (w-1)/2 << endl; 
    }

    return 0;
}