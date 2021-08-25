#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
	cin >> n;
	int p, q;
	int a[200];
	cin >> p;
	for (int i = 0; i < p; i++)
		cin >> a[i];
	cin >> q;
	for (int j = p; j < p + q; j++) {
        cin >> a[j];
    }
    
    sort(a, a+p+q);
    bool prasent=false;

    for(int i=0; i< p+q; i++) {
        if(a[i] == n) {
            prasent=true;
            break;
        }
    }
    
    if(prasent) {
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}