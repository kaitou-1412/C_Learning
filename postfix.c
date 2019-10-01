#include<stdio.h>
int stack[100];
int top=-1;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(top==-1)
    return -1;
    else
    return stack[top--];
}
void main()
{
    char q[100],op1,op2;
    int i=0,j=0;
    printf("enter the postfix expression");
    scanf("%s",q);
    while(q[i]!='\0')
    {
        if(q[i]=='+'||q[i]=='-'||q[i]=='*'||q[i]=='/')
        {
        op2=pop();
        op1=pop();
        switch(q[i])
        {
            case '+':
            push(op1+op2);
            break;
            case '-':
            push(op1-op2);
            break;
            case '*':
            push(op1*op2);
            break;
            case '/':
            push(op1/op2);
            break;
        }
    }
    else
    {
        push(q[i]-'0');
    }
    i++;
}
printf("result %d ",pop());
}
