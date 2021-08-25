#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int sum = n;
    while(1)
    {
        int a = n/m;
        int b = a+(n%m);
        sum += a;
        n = b;
        if(b < m) 
            break;
    }

    cout << sum << endl;

    return 0;
}