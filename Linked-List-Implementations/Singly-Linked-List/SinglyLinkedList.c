#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node*NODE;
NODE createNode()
{
    NODE temp=(NODE)malloc(sizeof(struct node));
    temp->next=NULL;
    return temp;
}
NODE insert(NODE first,int a)
{
    NODE temp=createNode();
    temp->data=a;
    if(first==NULL)
    {
        first=temp;
        printf("Successfully inserted\n");
        return first;
    }
    NODE t1=first;
    while(t1->next!=NULL)
    {
        t1=t1->next;
    }
        printf("Successfully inserted\n");
    t1->next=temp;
    return first;
}
NODE insertionatbegining(NODE first,int a)
{
    NODE temp=createNode();
    temp->data=a;
    if(first==NULL)
    {
        printf("Successfully inserted\n");
        first=temp;
        return first;
    }
    temp->next=first;
    first=temp;
        printf("Successfully inserted\n");
    return first;
}

NODE insertionatspecificposition(NODE first,int pos,int n)
{
    NODE temp=createNode();
    temp->data=n;
    if(pos<0)
    {
        printf("Invaliud position\n");
    }
    if(pos==1)
    {
        temp->next=first;
        first=temp;
        printf("Successfully inserted\n");
        return first;
    }
    NODE t1=first;
    int i=1;
    while(t1!=NULL && i<pos-1)
    {
        t1=t1->next;
        i++;
    }
    if(t1==NULL)
    {
        printf("Invaliud position\n");
    }
    temp->next=t1->next;
    t1->next=temp;
        printf("Successfully inserted\n");
    return first;
   


}
    NODE insertionatend(NODE first,int a)
    {
        NODE temp=createNode();
    temp->data=a;
    if(first==NULL)
    {
        first=temp;
        printf("Successfully inserted\n");
        return first;
    }
    NODE t1=first;
    while(t1->next!=NULL)
    {
        t1=t1->next;
    }
    t1->next=temp;
    printf("Successfully inserted\n");
    return first;
    }
    NODE deletionatbegining(NODE first)
    {
        NODE temp=first;
    if(first==NULL)
    {
        printf("Single Linked lis is empty\n");
        return  NULL;
    }
        first=first->next;
        printf("Deleted value : %d\n",temp->data);
        free(temp);
    return first;
 
    }
NODE deleteatspecificposition(NODE first,int pos)
{
 
    if(pos<0)
    {
        printf("Invalid position\n");
    }
    if(pos==1)
    {
       NODE temp=first;
       first=first->next;
        printf("Deleted value : %d\n",temp->data);
       free(temp);
       return first;
    }
    NODE temp=first;
    NODE t1;
    int i=1;
    while(temp!=NULL && i<=pos-1)
    {
       t1=temp;
       temp=temp->next;
        i++;
    }
    if(t1==NULL)
    {
        printf("Invalid position\n");
    }
   t1->next=temp->next;
   printf("Deleted value : %d\n",temp->data);
   free(temp);
    return first;
   


}
NODE deletionatend(NODE first)
    {
         NODE temp=first;
         NODE t1;
    if(first==NULL)
    {
        printf("Single Linked lis is empty\n");
        return  NULL;
    }
    while(temp->next!=NULL)
    {
        t1=temp;
        temp=temp->next;
    }
       printf("deleted value : %d\n",temp->data);
       t1->next=NULL;
       free(temp);
       return first;
   
 
    }
    void traverse(NODE first)
    {
        if(first==NULL)
        {
            printf("Linked list is empty\n");
        }
        else{
            while(first!=NULL)
            {
                printf("%d-> ",first->data);
                first=first->next;
            }
            printf("\n");
        }
    }
       
int main()
{
    NODE first=NULL;
    int a[10],choice,pos,n;
     printf("1 : Insertion\n2 : Insertion at begining\n3 : Insertion at position\n4 : Insertion at Last\n5 : Deletion at begining\n");  
  printf("6 : Deletion at position\n7 : Deletion at end\n8 : Traversal\n9 : exit(0)\n");
    while(1)
    {
         
    printf("ROLL NUMBER : 24CSR027\n");
        printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter a value for an insertion : ");
        scanf("%d",&n);
        first=insert(first,n);
        break;
        case 2:
        printf("Insertion at begining\n");
         printf("Enter a value: ");
        scanf("%d",&n);
        first=insertionatbegining(first,n);
        break;
        case 3:
        printf("Insertion at position\n");
        printf("Enter a position and value : ");
        scanf("%d %d",&pos,&n);
        first=insertionatspecificposition(first,pos,n);
        break;
        case 4:
         printf("Insertion at Last\n");
         printf("Enter a value: ");
         scanf("%d",&n);
        first=insertionatend(first,n);
        break;
        case 5:
         printf("Deletion at begining\n");
       
        first=deletionatbegining(first);
        break;
        case 6:
        printf("Deletion at position\n");
        printf("Enter a position : ");
        scanf("%d",&pos);
        first=deleteatspecificposition(first,pos);
        break;
        case 7:
         printf("Deletion at end\n");
     
        first=deletionatend(first);
        break;
        case 8:
        printf("Values in a linked list : ");
        traverse(first);
        break;
        case 9:
        exit(0);
        break;
       
       
         
       
       
       
       
    }}
   
   
}