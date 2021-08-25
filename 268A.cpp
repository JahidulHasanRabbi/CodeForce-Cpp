#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> home(n), guest(n);
    int count=0;

    for(int i=0; i<n; i++) {
        cin >> home[i] >> guest[i];

        for(int j=0; j<i; j++) {
            if(home[i] == guest[j]) {
                count += 1;
            }
            if(guest[i] == home[j]) {
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}