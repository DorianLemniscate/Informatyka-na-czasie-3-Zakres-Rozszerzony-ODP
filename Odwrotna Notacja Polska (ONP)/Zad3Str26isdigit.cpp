#include <iostream>
#include <stack>
#include <string>

using namespace std;

int W(string onp)
{
    stack<int>s;
    for(int i=0; i<onp.size(); i++)
    if (isdigit(onp[i]))
    s.push(onp[i]-'0');
    else
    {
        int arg2=s.top(); s.pop();
        int arg1=s.top(); s.pop();
        switch (onp[i])
        {
            case '+':
            s.push(arg1+arg2);
            break;
            
            case '-':
            s.push(arg1-arg2);
            break;

            case '*':
            s.push(arg1*arg2);
            break;

            case '/':
            s.push(arg1/arg2);
            break;

            case '%':
            s.push(arg1%arg2);

        }
    }

    int ONP=s.top();
    s.pop();
    return ONP;

}

int main()
{
    string onp;
    cout<<"Podaj wyrazenie: "; cin>>onp;

    cout<<"Wynik: " << W(onp);
    return 0;

}

//Zadanie 3 Strona 26
//Zastosowanie funkcji isdigit()