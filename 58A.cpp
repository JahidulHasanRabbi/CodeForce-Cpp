#include<iostream>
#include<string>

using namespace  std;

int main()
{
    string n, n1="hello";

    cin >> n;
    int j=0, word=0;

    for(int i=0; i<n.size(); i++) {
        if(n[i]==n1[j]) {
            j++;
            word++;

            if(word == 5)
            break;
        }
    }

    if(word==5) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}