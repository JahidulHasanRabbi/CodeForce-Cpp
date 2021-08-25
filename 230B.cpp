#include<iostream>
#include<math.h>

using namespace std;

bool prime(long long n)
{
    if(n<2) {
        return false;
    }
    else if(n==2) {
        return true;
    }
    long long l=sqrt(n);
    if(n%2 == 0) {
        return false;
    }
    for(int j=3; j<=l; j+=2) {
        if(n%j == 0) {
            return false; 
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    long long t;
    
    for(int i=1; i<=n; i++) {
        cin >> t;
        long long num=sqrt(t);
        if(num*num == t && prime(num)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}