#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long sum=0, a, b, c;
    
    while(cin >> a >> b >> c)
    {
        sum=(a+b+c);
        sum=max(sum,(a*b*c));
        sum=max(sum,(a+(b*c)));
        sum=max(sum, (a*(b+c)));
        sum=max(sum, (a+b)*c);
        sum=max(sum, (a*b)+c);
        cout << sum << endl;
    }

    return 0;
}