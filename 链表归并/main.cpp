#include<stdio.h>
#include<stdlib.h>
struct node
{
    int date;
    struct node *next;
    struct node *front;
};
int main()
{
    int n,i,m,x;
    struct node *head,*p,*t;
    scanf("%d %d",&n,&m);
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    head->front=NULL;
    t=head;
    for(i=1;i<=n;i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->date);
        p->front=t;
        p->next=t->next;
        t->next=p;
        t=p;
    }
    for(i=1;i<=m;i++)
    {
        scanf("%d",&x);
        p=head->next;
        while(p->date!=x)
        {
            p=p->next;
        }
        if((p->next!=NULL)&&(p->front->front!=NULL))
        {
            printf("%d %d\n",p->front->date,p->next->date);
        }
        else if(p->next==NULL)
        {
            printf("%d\n",p->front->date);
        }
        else if(p->front->front==NULL)
        {
            printf("%d\n",p->next->date);
        }
    }
    return 0;
}
