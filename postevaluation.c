#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
struct stack {
int top;
int s[10];
};

int pop(struct stack *p)
{
    if(p->top==-1)
    {
        printf("empty stack");exit(0);
    }
    return p->s[p->top--];
}
int ctoi(char c)
{
    return c-48;
}


int calcu(int a,int b,char c)
{
    switch(c)
    {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
        case '^':return a^b;
    }
}


void push(struct stack *p1,int ch)
{
    p1->s[++p1->top]=ch;
}

void main()
{
    struct stack p;
    p.top=-1;
    int i=0,cal;
    char ch,s[20],e[20];
    int op1,op2,res;
    scanf("%s",e);

    while((ch=e[i])!='\0')
{
        if(isdigit(ch))
        {
            push(&p,ctoi(ch));
        }
        else
        {
            op2=pop(&p);
            op1=pop(&p);
            cal=calcu(op1,op2,ch);
            push(&p,cal);
        }

    i++;
    }
    res=pop(&p);
    printf("result=%d",res);
}
