#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head= NULL;

void traverse_list(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("-->%d", ptr->data);
        ptr = ptr->next;
    }
    printf("-->\n");
}

struct node *create_new_node(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}
void insert_at_first(int data)
{
    struct node *ptr = create_new_node(data);
    ptr->next = head;
    head = ptr;
}
//Make header file of linkedlist operation and use it for stack using linkedlist and queue using linkedlist 
//Insert element at middle of linkedlist

void insert_at_end(int data)
{
    if (head == NULL)
    {
        head = create_new_node(data);
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = create_new_node(data);
    }
}

int main()
{
    // struct node *second;
    // struct node *third;
    // head = (struct node *)malloc(sizeof(struct node));
    // second = (struct node *)malloc(sizeof(struct node));
    // third = (struct node *)malloc(sizeof(struct node));
    // head->data = 7;
    // head->next = second;
    // second->data = 10;
    // second->next = third;
    // third->data = 50;
    // third->next = NULL;

    insert_at_end(7);
    insert_at_end(10);
    insert_at_end(50);
    printf("Linklist before insertion:");
    traverse_list(head);

    insert_at_first(56);
    printf("Linklist insertion at begining:");
    traverse_list(head);

    insert_at_end(70);
    printf("Linklist insertion at end:");
    traverse_list(head);

    return (0);
}
