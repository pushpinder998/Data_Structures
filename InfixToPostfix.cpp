#include<iostream>
#include<string.h>
using namespace std;
char postfix[50];
char stack_[50];
int top=-1;
int j=0;
int preced(char ch)
{
if (ch=='^')
return 3;
else if (ch=='*'||ch=='/')
return 2;
else if (ch=='+'||ch=='-')
return 1;
else
return 0;
}
void push(char n)
{
    top++;
    stack_[top]=n;

}
void insert_postfix(char s)
{
    postfix[j]=s;
    j++;
}
void pop()
{
if(stack_[top]=='(')
    top--;
else
{
    insert_postfix(stack_[top]);
    top--;
}
}
int main()
{
char infix[50];
cout<<"Enter the Infix String: ";
cin>>infix;
int index;
index=strlen(infix);
infix[index]=')';
infix[index+1]='\0';
top = 0;
stack_[top]='(';
int i=0;
while (infix[i]!='\0')
{
    if(infix[i]=='(')
    {
        push(infix[i]);
        }
   else if (isalpha(infix[i])||isdigit(infix[i]))
   {

   insert_postfix(infix[i]);
   }
   else if(infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*'||infix[i]=='^')
   {
     if(preced(infix[i])>preced(stack_[top]))
     {

     push(infix[i]);
     }
     else if(preced(infix[i])<=preced(stack_[top]))
     {
         while(preced(infix[i])<=preced(stack_[top]))
         {
             pop();
         }
         push(infix[i]);
     }
   }
   else if(infix[i]==')')
   {
       while(stack_[top]!='(')
       {
           pop();
       }
       pop();
   }
   i++;
}
//postfix[j]='\0';
cout<<postfix;
}
