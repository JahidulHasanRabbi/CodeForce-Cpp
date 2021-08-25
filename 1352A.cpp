#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ra[10000];

    while(n--)
    {
        int v;
        cin >> v;
        int ans=0;
        int t=0;

        if(v>1000) {
            ans=v%1000;
            ra[t++]=v-ans;
            v%=1000;
        }
        if(v>100) {
            ans=v%100;
            ra[t++]=v-ans;
            v%=100;
        }
        if(v>=10)
        {
            ans=v%10;
            ra[t++]=v-ans;
            v%=10;
        }
        if(v<10 && v>0) {
            ra[t++]=v;
        }

        vector<int> rar;
        for(int i=0; i<t; i++) {
            rar.push_back(ra[i]);
        }

        cout << rar.size() << endl;
        for(int j=0; j<rar.size(); j++) {
            cout << rar[j] << " ";
        }
        cout << endl;
    }

    return 0;
}