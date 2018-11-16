#include<iostream>
#include<conio.h>
#include<ctype.h>

using namespace std;

//The class performing the evaluation
class Evaluation {
	public:
		int st[50];
		int top;
		char str[50];
		Evaluation() {
			top = -1;
		}

		//function to push the item
		void push(int item) {
			top++;
			st[top] = item;
		}

		//function to pop an item
		int pop() {
			int item = st[top];
			top--;
			return item;
		}

		//function to perform the operation depending on the operator.
		int operation(int a,int b,char opr) {
			switch(opr) {
				case '+':return a+b;
				case '-':return a-b;
				case '*':return a*b;
				case '/':return a/b;
				case '^':return a^b;
				default: return 0;
			}
		}

		int calculatePostfix();
};

//This is the function that calculates the result of postfix expression.
int Evaluation::calculatePostfix() {
	int index = 0;
	while(str[index]!='#') {
		if(isdigit(str[index])) {
			push(str[index]-'0');
		}
		else {
			int x = pop();
			int y = pop();
			int result = operation(x,y,str[index]);
			push(result);
		}
		index++;
	}
	return pop();
}


int main() {

	Evaluation eval;
	cout << "Enter the postfix: ";
	cin >> eval.str;
	int result = eval.calculatePostfix();
	cout << "the result is " << result;

}
