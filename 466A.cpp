#include<iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int m_able=n/m;
    int a_cost= a*n;
    int m_cost=0;
    int re= a*(n%m);

    if(n%m == 0) {
        m_cost = m_able*b;
    }
    else {
        m_cost=(m_able*b)+b;
        int m_a = (m_able*b)+re;
        m_cost = min(m_cost, m_a);
    }

    if(a_cost == m_cost) {
        cout << a_cost << endl;
    }
    else if(a_cost < m_cost) {
        cout << a_cost << endl;
    }
    else {
        cout << m_cost << endl;
    }

    return 0;
}