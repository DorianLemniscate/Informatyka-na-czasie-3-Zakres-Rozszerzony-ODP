#include <iostream>
#include <stack>
#include <string>

using namespace std;

string onp(string w)
{
    stack<char>s;
    string ONP="";
    s.push('#');

    for (int i=0; i<w.size(); i++)
    {
        switch(w[i])
        {
            case '(':
            s.push(w[i]); break;

            case ')':
            while (s.top()!='(')
            {
                ONP=ONP+s.top();
                s.pop();
            }
            s.pop(); break;

            case '+':
            case '-':
            while (s.top()!='(' && s.top()!='#')
            {
                ONP = ONP+s.top();
                s.pop();
            }
            s.push(w[i]); break;

            case '*':
            case '/':
            case '%':
            if (s.top()=='*' || s.top()=='/' || s.top()=='%')
            {
                ONP=ONP+s.top();
                s.pop();
            }
            s.push(w[i]); break;

            default:
            ONP=ONP+w[i];
        }

    }
    while (s.top()!='#')
    {
        ONP=ONP+s.top();
        s.pop();
    }
    s.pop();
    return ONP;

}
int main()
{
    string w;
    cout<<"Podaj wyraz: "; cin>>w;

    cout<<"Wynik ONP: " <<onp(w) <<endl;
    return 0;
}

//Zadanie 2 Strona 26