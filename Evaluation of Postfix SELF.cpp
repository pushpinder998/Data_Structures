#include<iostream>
#include<conio.h>
#include<ctype.h>

using namespace std;

int main()
{
    int i = 0;
    int n, res, a, b;
    int top = 0;
    int index;
    char postfix[50];
    int stack_[50];

    cout << "Enter the Postfix elements:- ";
    cin >> postfix;

    index = strlen(postfix);

    postfix[index] = '\0';



    while(postfix[i] != '\0')
    {
        if(isdigit(postfix[i]))
        {
            res = postfix[i] - 48;
        }
        else
        {
            b = pop();
            a = pop();
            switch(postfix[i])
        }
    }
}
