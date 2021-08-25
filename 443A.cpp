#include<iostream>

using namespace std;

int main()
{
    char str[1000], ch[30];
    int i,j, count=0;
    
    for(i=0; str[i-1] != '}'; i++) {
        cin >> str[i];
        count++;
    }

    int d=0;
    for(i=1; i<count; i++) {
        if(str[i] >= 97 && str[i] <= 122) {
            int flag=0;
            for(j=0; j<d; j++) {
                if(str[i] == ch[j]) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) {
                ch[d]=str[i];
                d++;
            }
        }
    }

    cout << d << endl;

    return 0;
}