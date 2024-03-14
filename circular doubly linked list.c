#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
};
struct node *add_beg(struct node *);
struct node *add_end(struct node*);
void display(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *add_pos(struct node*,int);
main()
{
    struct node *head=NULL;
    int pos,v,ch;
    while(1)
  {
    printf("Enter 1 to add at beg\nEnter 2 to add at end\nEnter 3 to display\nEnetr 4 to delete at beg\nEnter 5 to delete at end\nEnter 6 to add at pos\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:head=add_beg(head);
               break;
        case 2:head=add_end(head);
               break;
         case 3:if(head==NULL)
                {
                   printf("Enter list is empty\n");
                   break;
                }
                display(head);
                break;
        case 4:if(head==NULL)
                {
                   printf("Enter list is empty\n");
                   break;
                }
                else
                {
                    head=delete_beg(head);
                    break;
                }
        case 5: if(head==NULL)
                {
                   printf("Enter list is empty\n");
                   break;
                }
                  else
                {
                    head=delete_end(head);
                    break;
                }
         case 6:printf("enter the position\n");
                scanf("%d",&pos);
                head=add_pos(head,pos);
                    break;
    }
  }
}
struct node *getnode()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=newnode;
    newnode->prev=newnode;
    return newnode;
}
struct node*add_beg(struct node *head)
{
    struct node*newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    newnode->next=head;
    newnode->prev=head->prev;
    head->prev->next=newnode;
    head->prev=newnode;
    head=newnode;
    return head;

}
struct node *add_end(struct node*head)
{
   struct node*newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    head->prev->next=newnode;
    newnode->prev=head->prev->next;
    newnode->next=head;
    head->prev=newnode;
    return head;

}
void display(struct node *head)
{
    struct node *cur=head;
    do
    {
        printf("data:%d\n",cur->data);
        cur=cur->next;
    }while(cur!=head);
}
struct node *delete_beg(struct node *head)
{
  if(head->next==head)
  {
      printf("deleted data:%d\n",head->data);
      free(head);
      head=NULL;
      return head;
  }
  struct node *cur=head->next;
  printf("deleted data:%d\n",head->data);
  cur->prev=head->prev;
  head->prev->next=cur;
  free(head);
  head=cur;
  return head;
}
struct node *delete_end(struct node*head)
{
   if(head->next==head)
  {
      printf("deleted data:%d\n",head->data);
      free(head);
      return NULL;
  }
   struct node *cur=head->prev;
   head->prev=cur->prev;
   cur->prev->next=head;
   printf("deleted data:%d\n",cur->data);
   free(cur);
   return head;
}
struct node *add_pos(struct node*head,int pos)
{
    struct node*newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    if(pos<=0)
    {
        newnode->next=head;
        newnode->prev=head->prev;
        head->prev=newnode;
        head->prev->next=newnode;
        return head;
    }
    int i;
    struct node *cur=head;
    for(i=0;i<pos-1&&cur->next!=head;i++)
    {
        cur=cur->next;
    }
    newnode->prev=cur;
    newnode->next=cur->next;
    cur->next=newnode;
    newnode->next->prev=newnode;
    return head;

};

