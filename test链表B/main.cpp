#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int n,i;
    scanf("%d",&n);
    int count=n;
    struct node*head,*p,*q,*key;
    head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    for(i=0; i<n; i++)
    {
        p=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=head->next;
        head->next=p;
    }
    printf("%d\n",count);
    for(p=head->next; p; p=p->next)
    {
        printf("%d",p->data);
        if(p->next!=NULL)printf(" ");
    }
    printf("\n");
    for(p=head->next; p; p=p->next)
    {
        for(q=p; q->next!=NULL; )
        {
            if(p->data==q->next->data)
            {
                key=q->next->next;
                q->next=key;
                count--;
            }
            else q=q->next;
        }
    }
    printf("%d\n",count);
    for(p=head->next; p; p=p->next)
    {
        printf("%d",p->data);
        if(p->next!=NULL)printf(" ");
    }
    return 0;
}
