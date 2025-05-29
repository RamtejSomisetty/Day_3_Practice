#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* create_node(int data){
    node* new_node = malloc(sizeof(node));
    new_node->data= data;
    new_node->next= NULL;
    return new_node;
}
node* append_node_to_linked_list(int data,node* head){
    if(head ==NULL){
        head = create_node(data);
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=create_node(data);
    }
    return head;
}

void print_linked_list(node* head){
    node* temp=head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp->next!=NULL);
    printf("%d->NULL\n",temp->data);

}
node* insertion_at_beginning(node* head,int data){
    node* temp = head;
    head=create_node(data);
    head->next=temp;
    return head;
}
node* insertion_at_ending(node* head,int data){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= create_node(data);
    return head;
}


int main(){

    node* head = NULL;
    head = append_node_to_linked_list(10,head);
    head = append_node_to_linked_list(20,head);
    head = append_node_to_linked_list(30,head);
    head = append_node_to_linked_list(40,head);
    head = append_node_to_linked_list(50,head);
    head = append_node_to_linked_list(60,head);
    head = append_node_to_linked_list(70,head);
    print_linked_list(head);
    int begin=5;
    printf("Insertion of element %d at the beginning of Linked_list :-",begin);
    head = insertion_at_beginning(head,5);
    print_linked_list(head);
    int end =80;
    printf("Insertion of element %d at the ending of Linked_list   :-",end);
    head = insertion_at_ending(head,end);
    print_linked_list(head);
  
}

