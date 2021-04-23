#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    bool isvalid;
    while(true)
    {
        string sentence;
        getline(cin, sentence);
        if (sentence.length()==1 && sentence[0] == '.')
        {//sentence=="." 이라는 조건으로만 설정할 경우 에러 발생  왜??
        
            break;//while문 밖으로 탈출.
        }
        isvalid = true;
        stack<char> S;
        for (auto t : sentence)
        {
            if (t == '(')
            {
                S.push('(');
            }
            else if(t=='['){
                S.push('[');
            }
            else if (t == ']')
            {
                if (S.empty() || S.top() != '[')
                {
                    isvalid = false;
                    break;
                }
                S.pop();
            }
            else if (t == ')')
            {
                if (S.empty() || S.top() != '(')
                {
                    isvalid = false;
                    break;
                }
                S.pop();
            }
            else if(t=='.')
            {
                break;
            }
        }

        if (isvalid && S.empty()){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
    return 0;
}