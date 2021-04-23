#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include<deque>

using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    deque<int> D;
    int N;
    int temp;
    string s;

    cin>>N;
    for(int i=0; i<N;i++){
        cin>>s;
        if(s=="push_front"){
            cin>>temp;
            D.push_front(temp);
        }
        else if(s=="push_back"){
            cin >> temp;
            D.push_back(temp);
        }
        else if(s=="pop_front"){
            if(D.empty()){
                cout << -1 << endl;
            }else{
                cout << D.front() << endl;
                D.pop_front();
            }
        }
        else if(s=="pop_back"){
            if (D.empty())
            {
                cout << -1 <<endl;
            }
            else
            {
                cout << D.back() << endl;
                D.pop_back();
            }
        }
        else if(s=="size"){
            cout << D.size() << endl;
        }
        else if(s=="empty"){
            cout << D.empty() << endl;
        }
        else if(s=="front"){
            if (D.empty())
            {
                cout << -1 << endl;
            }
            else{
                cout << D.front() << endl;
            }
        }
        else{//back
            if (D.empty())
            {
                cout << -1 << endl;
            }
            else
            {
                cout << D.back() << endl;
            }
        }
    }

    return 0;
}
