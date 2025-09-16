#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string nawias;
    stack<char>s;

    cout<<"Podaj nawias: "; cin>>nawias;

    for (int i=0; i<nawias.size(); i++)
    {
        char ch = nawias[i];

        if(nawias[i]=='(')
        {
            s.push(ch);
        }
        else if (nawias[i]==')')
        {
            if (s.empty())
            {
                cout<<"NIE";
                return 0;
            }
            else
            {
                s.pop();
            }
        }
            
    }
    if (s.empty())
    {
        cout<<"TAK";
    }
    else
    {
        cout<<"NIE";
    }
    return 0;
}

// Zadanie 1 strona 26