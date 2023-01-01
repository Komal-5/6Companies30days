#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string x:tokens){
            if(x=="+" or x=="-" or x=="*" or x=="/"){
                int op2=st.top(); st.pop();
                int op1=st.top(); st.pop();
                if(x=="+") st.push(op1+op2);
                if(x=="-") st.push(op1-op2);
                if(x=="*") st.push(op1*op2);
                if(x=="/") st.push(op1/op2);
            }
            else st.push(stoi(x)); //stoi =>string to int
        }
        return st.top();
    }
};

int main(){
    vector<string>tokens={"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    Solution obj;
    cout<<obj.evalRPN(tokens);
    return 0;

}