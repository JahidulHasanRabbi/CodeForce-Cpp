#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    char name[100];
    int d=0,l;

    scanf("%s", name);

    l=strlen(name);
    sort(name, name+l);

    for(int i=0; i < l-1; ++i) {
        if(name[i] != name[i+1])
        {
            d++;
        }
    }

    if(d%2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else 
        cout << "IGNORE HIM!" << endl;

    return 0;
}