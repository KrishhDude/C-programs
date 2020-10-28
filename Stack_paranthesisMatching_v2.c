#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{ 
	int top;
	int size;
	char *s;
};

void push(struct stack *st, char x)
{
	if(st->top == st->size)
		printf("\nstack is full");
	else
	{
		st->top++;
		st->s[st->top]=x;
		
	}
}

 
char pop(struct stack *st)
{
	int x = -1;
	if(st->top == -1)
	{
		printf("\n stack is empty");
		return x;
	}
	x=st->s[st->top];
	st->top--;
	return x;
}

int isEmpty(struct stack st)
{
	return(st.top == -1);
}

int main()
{
	struct stack st;
	char exp[20]={},ch;
	while(!0)
	{
	st.top=-1;
	int len,i=0,f=1;
	printf("enter the expression\n");
	scanf("%s",exp);
	if(strcmpi(exp,"exit")==0)
		exit(0);
	len=strlen(exp);
	st.size=len-1;
	st.s=(char*)malloc(st.size*sizeof(char));
	while(i<len)
	{
		if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
		{
			push(&st,exp[i]);
		}
		else if(exp[i]=='}')
		{ 
			if(st.s[st.top]=='{')
				pop(&st);
			else
			{	f=0;
				break;}
		}
		else if(exp[i]==')')
		{ 
			if(st.s[st.top]=='(')
				pop(&st);
			else
			{	f=0;
				break;}
		}
		else if(exp[i]==']')
		{ 
			if(st.s[st.top]=='[')
				pop(&st);
			else
			{	f=0;
				break;}
		} 
		i++;
	}
	if(isEmpty(st) && f==1)
	
printf("valid\n");
	else
	printf("invalid\n");
	free(st.s);
	}
	return 0;
}