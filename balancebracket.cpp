#include<bits/stdc++.h>
using namespace std;
bool is_balance(char c1,char c2){
    return (c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']');
}
int main(){
    int n;
    cin >> n;
    bool flag = 1;
    while(n--){
        string s;
        cin >> s;
        stack<char> stk;
        for(auto bracket : s){
            if((bracket == '(') || (bracket == '{') || (bracket == '[')) stk.push(bracket);

            else{
                if(stk.empty()){
                    flag = 0;
                    break;
                }
                else{
                    if(is_balance(stk.top(),bracket)){
                        stk.pop();
                    }
                    else{
                        flag= 0;
                        break;
                    }
                }
            }
        }
        if(!stk.empty()) flag=0;
        if(flag) cout << "YES";
        else cout<< "NO";
    }
    return 0;

}
