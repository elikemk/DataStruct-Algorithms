
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

    
    main()
    a = "ABC +-"
    b = "ABC-D*+"
    c = "AB+C-DE*+"
    inflix(a)
    inflix(b)
    inflix(c)
}
