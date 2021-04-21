#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<int> s;
    int N, temp;
    cin >> N;
    string line;
    for (int i = 0; i < N; i++)
    {
        cin >> line;
        if (line == "push")
        {
            cin >> temp;
            s.push(temp);
        }
        else if (line == "pop")
        {
            if (s.empty())
                cout << -1 << '\n';
            else
            {
                cout << s.top() << '\n';
                s
                    .pop();
            }
        }
        else if (line == "size")
        {
            cout << s.size() << '\n';
        }
        else if (line == "empty")
        {
            cout << (int)s.empty() << '\n';
        }
        else
        { //top
            if (s.empty())
                cout << -1 << '\n';
            else
            {

                cout << s.top() << '\n';
            }
        }
    }
    return 0;
}
