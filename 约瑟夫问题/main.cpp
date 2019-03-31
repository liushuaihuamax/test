#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    int n,i,j;
    while(~ scanf("%d",&n)&&n!=0)
    {
        struct node*head,*p,*t;
        head=(struct node*)malloc(sizeof(struct node));
        head->next=NULL;
        t=head;
        head->data=1;
        for(i=0; i<n-1; i++)
        {
            p=(struct node*)malloc(sizeof(struct node));
            p->data=i+2;
            p->next=head;
            t->next=p;
            t=p;
        }
        for(j=1; j<n; j++)
        {
            if(j==n-1)printf("%d\n",n);
            p=t->next;
            for(i=1; i<=4; i++)
            {
                p=p->next;
                t=t->next;
            }
            if(p->data==1)
            {
                printf("%d\n",j);
                break;
            }
            t->next=p->next;
        }
    }
    return 0;
}
