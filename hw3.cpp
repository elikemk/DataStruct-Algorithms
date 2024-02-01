
#include <iostream>

using namespace std;

int main()
{
    int precedence (char c){
        if ( c == '^')
        return 3;
        else if (c == '/' || c == '*')
        return 2;
        else if (c == '+' || c == '-')
        return 1;
        else
        return -1;
    }
    char a (char c){
        if (c == '^')
        return 'R';
        return 'L';
    }

void aintfixtopost(string b){
        stak<char> jj;
        strint res;
        for (int i = 0; i < b.length(); i++){
            char c = s[i];
            if ((b>= 'a' && b<= 'z' || b >= 'A' && b >= 'C')){
                result += c;
            }
            else if (c == '(')
            jj.push('(');
            
            else if (c == ')'){
                while (jj.top() != '('){
                    result += st.top();
                    jj.pop();
                }
            }
            jj.pop();
            
            else {
                while (!jj.empty() && pre)
            }
        }
    }

    
    main()
    a = "ABC +-"
    b = "ABC-D*+"
    c = "AB+C-DE*+"
    inflix(a)
    inflix(b)
    inflix(c)
}
