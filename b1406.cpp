#include<iostream>
#include<algorithm>
#include<string>
#include<list>

using namespace std;

int main(void){

    string s;
    int M;
    char temp;
    cin>>s;
    cin>>M;
    list<char> L;
    for(auto temp: s){
        L.push_back(temp);
    }
    auto cursor=L.end();

    while(M--){
        char op;
        cin>>op;
        if(op=='L'){
            if (cursor != L.begin())
                cursor--; //L.front()과 헷갈리지 말자.
        }else if(op=='D'){
            if (cursor != L.end())
                cursor++;
        }else if(op=='B'){
            if (cursor != L.begin()){
                cursor--;
                cursor = L.erase(cursor); //erase는 삭제된 후 cursor의 주소를 반환한다. 따라서 iterator에 저장해두지 않으면 원래 커서는 길을 잃는다.
            }
        }else{
            cin >> temp;
            L.insert(cursor, temp);
        }
    }

    for(auto cursor_i:L){
        cout<<cursor_i;
    }

    return 0;
}