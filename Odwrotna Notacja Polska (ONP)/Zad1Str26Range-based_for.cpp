#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string nawias;
    stack<char>s;

    cout<<"Podaj nawias: "; cin>>nawias;

    for (char ch : nawias)
    {
        if(ch =='(')
        {
            s.push(ch);
        }
        else if (ch ==')')
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
// Zamiast tradycyjnej pętli for, zastosowana jest wersja range-based for