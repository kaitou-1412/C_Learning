#include<stdio.h>
#define size 30
char stack[20];
int top=-1,k=0,l;
void push(char a)
{
    stack[++top]=a;
}
int pop()
{
    return stack[top--];
}

int evaluate(int a,int b,char c)
{
    switch(c)
    {
    case '+':return b+a;
             break;
    case '-':return b-a;
             break;
    case '*':return b*a;
             break;
    case '/':return b/a;
             break;
    case '%':return b%a;
             break;
    case '^':return b^a;
             break;
             
    }
}
void main()
{
    char s1[20];
    int i,x,y,p;
    printf("Enter the postfix expression:");
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(isdigit(s1[i]))
        {
            push(s1[i]-48);
        }
        else
        {
            x=pop();
            y=pop();
            p=evaluate(x,y,s1[i]);
            push(p);
        }
    
    }
    printf("%d",pop());
    printf("\n");
        
}
