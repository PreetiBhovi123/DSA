#include<stdio.h>
#include<stdlib.h>
 struct time
{
    int min;
    int sec;
};
 struct song
{
    char name[16];
    char singer[15];
    char movie[39];
    struct time t;
    struct song*next;
};
struct song*add_pos(struct song*, int);
struct song *delete_pos(struct song *, int);
struct song*getsong();
main()
{
    struct song *tail=NULL;
    int ch,pos;
    while(1)
    {
        printf("enter 1 to add a song\nenter 2 to delete a song\nenter 3 to display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the position\n");
                   scanf("%d",&pos);
                   tail=add_pos(tail, pos);
                   break;
            case 2:printf("enter the position\n");
                 scanf("%d",&pos);
                 if(tail==NULL)
                 {
                     printf("list is empty\n");
                 }
                 else
                 {
                     tail=delete_pos(tail,pos);
                 }
                     break;
           case 3:display(tail);
                  break;
        }
    }
}
struct song* add_pos(struct song*tail, int pos)
{
    int i;
    struct song*newsong=getsong();
    struct song*cur;
    if(tail==NULL)
    {
        tail=newsong;
        return tail;
    }
    cur=tail->next;
    if(pos<=0)
    {
        newsong->next=tail->next;
        tail->next=newsong;
        return tail;
    }
    for(i=0;i<pos-1&&cur!=tail;i++)
    {
        cur=cur->next;
    }
    newsong->next=cur->next;
    cur->next=newsong;
    if(cur==tail)
    {
        tail=newsong;
    }
    return tail;
}
struct song*getsong()
{
    struct song*newsong=(struct song*)malloc(sizeof(struct song));
    printf("song name\n");
    scanf("%s",newsong->name);
    printf("singer name\n");
    scanf("%s",newsong->singer);
    printf("movie name\n");
    scanf("%s",newsong->movie);
    printf("time\n");
    scanf("%d%d",&newsong->t.min,&newsong->t.sec);
    newsong->next=newsong;
}
struct song * delete_pos(struct song *tail,int pos)
{
    struct song *cur=tail->next, *pre=NULL;
    if(cur==tail)
    {
        printf("deleted information\n");
        display(cur);
        tail=NULL;
        return tail;
    }
    if(pos<=0)
    {
        tail->next=cur->next;
        display(cur);
        free(cur);
        return tail;
    }
    int i;
    for(i=0;i<pos&&cur!=tail;i++)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
    display(cur);
    if(cur==tail)
    {
        tail=pre;
    }
    free(cur);
    return tail;
}
void display(struct song *tail)
{
    struct song *cur;
    if(tail==NULL)
    {
       printf("list is empty\n");
        return 0;
    }
    cur=tail->next;
    do
    {
        printf("name:%s\n",cur->name);
        printf("singer:%s\n",cur->singer);
        printf("Movie:%s\n",cur->movie);
        printf("duration:%d:%d\n",cur->t.min,cur->t.sec);
        cur=cur->next;
    }while(cur!=tail->next);
}
