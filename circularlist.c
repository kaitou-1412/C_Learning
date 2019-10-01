#include<stdio.h>
#include<stdlib.h>
struct node 
{
  int info;
  struct node *next;
};
typedef struct node NODE;
NODE *create(NODE *);
void display(NODE *);
void insert1(NODE *);
void insert2(NODE *,int);
NODE *insert3(NODE *);
void delete1(NODE *);
void delete2(NODE *,int);
NODE *delete3(NODE *);
int main()
{
    NODE *start=NULL,*last;
    last=create(start);
    display(last);
    insert1(last);
    display(last);
    insert2(last,13);
    display(last);
    last=insert3(last);
    display(last);*/
 printf("after deleting from start:\n");
    delete1(last);
    display(last);
    printf("after deleting from b/w:\n");
   delete2(last,13);
    display(last);
    last=delete3(last);
    display(last);
}
NODE *create(NODE * start)
{   int n;
NODE *nn,*prev;

 do{
     
    nn=(NODE *)malloc(sizeof(NODE));
    printf("enter info part:");
    scanf("%d",&nn->info);
   
    if(start==NULL)
      start=nn;
      else
      {
          prev->next=nn;
      }
       nn->next=start;
      prev=nn;
      printf("do you want to continue?");
      scanf("%d",&n);
 }while(n!=0);
 return nn;
}
void display(NODE *last)
{
    NODE *start=last->next;
    do{
        printf("%d\n",start->info);
        start=start->next;
    }while(start!=last->next);
}
void insert1(NODE *last)
{
    NODE *nn,*start=last->next;
     nn=(NODE *)malloc(sizeof(NODE));
    printf("enter info part:");
    scanf("%d",&nn->info);
    nn->next=start;
    start=nn;
    last->next=start;
}
void insert2(NODE *last,int val)
{
    NODE *nn,*start=last->next;
    nn=(NODE *)malloc(sizeof(NODE));
    printf("enter info part:");
    scanf("%d",&nn->info);
    while(start->info!=val)
    {
        start=start->next;
    }
    nn->next=start->next;
    start->next=nn;
}
NODE * insert3(NODE *last)
{
    NODE *nn,*start=last->next;
    nn=(NODE *)malloc(sizeof(NODE));
    printf("enter info part:");
    scanf("%d",&nn->info);
    nn->next=start;
    last->next=nn;
    return nn;
}
void delete1(NODE *last)
{
    NODE *start=last->next,*temp;
    temp=start->next;
    free(start);
    start=temp;
    last->next=start;
}
void delete2(NODE *last,int val)
{
    NODE *start=last->next,*temp;
    while(start->info!=val)
    {
        temp=start;
        start=start->next;
    }
    temp->next=start->next;
    free(start);
}
NODE *delete3(NODE *last)
{
    NODE *temp,*start=last->next,*temp1=last->next;
    while(start!=last)
    {
        temp=start;
        start=start->next;
    }
    temp->next=temp1;
    free(start);
    return temp;
}
