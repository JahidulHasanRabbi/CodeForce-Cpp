#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n, t;
    cin >> n;
    
    for(int i=0; i<n; i++) {
        cin >> t;
        int ra[t];
        for(int i=0; i<t; i++) {
            cin >> ra[i];

            if(t == 1 ) {
                cout << "YES" << endl;
                break;
            }
            else {
                sort(ra, ra+t);
                for(int i=0; i<t; i++) {
                    for(int j=1; j<=t; j++) {
                        if(ra[j]-ra[i] > 1) {
                            cout << "NO" << endl;
                            return 0;
                        }
                        else
                        {
                        
                        }
                    }
                }

                cout << "YES" << endl;
            }
        }
    }

    return 0;
}