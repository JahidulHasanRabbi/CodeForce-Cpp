#include<iostream>
#include<string>

using namespace std;

int main()
{
    int k, n, w, total=0;
    long long int  borrow=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++) {
        total= total+(i*k);
    }

    borrow = (total-n);

    if(borrow < 0) {
        cout << "0" << endl;
    }
    else 
        cout << borrow;
    return 0;
}