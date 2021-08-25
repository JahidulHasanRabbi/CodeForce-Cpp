#include<iostream>

using namespace std;

int main()
{
    long long int n, a[100000];
    cin >> n;
    int i;

    for(i=0; i<n; i++) {
        cin >> a[i];
    }
    int count=1, max1=1;
    for(i=1; i<n; i++) {
        if(a[i] >= a[i-1]) {
            count++;
        }
        else 
            count=1;
            if(count > max1) {
                max1=count;
            }
    }
    
    cout <<  max1 << endl;

    return 0;
}