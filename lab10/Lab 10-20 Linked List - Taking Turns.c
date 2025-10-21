#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct List {
    int index;
    int number;
    struct List *next;
} LinkedList;
 
void    print_result(LinkedList *lst)
{
    LinkedList  *ptr;
 
    ptr = lst;
    while (ptr != NULL)
    {
        printf("%d", ptr->number);
        if (ptr -> next != NULL) printf(" -> ");
        ptr = ptr->next;
    }
}
 
int list_length(LinkedList *list)
{
    int         i;
    LinkedList  *ptr;
 
    ptr = list;
    i = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        i++;
    }
    return (i);
}

 
int get_value_by_index(LinkedList *List, int index)
{
    LinkedList  *ptr;
 
    ptr = List;
    while (ptr)
    {
        if (ptr->index == index)
            return (ptr->number);
        ptr = ptr->next;
    }
}
 
 
void    set_turn(int *turn, int n)
{
    int i;
    int *pattern; // 0 = หลัง, 1 = หน้า, 01100110011...
 
    i = -1;
    pattern = malloc(4 * sizeof(int)); // 0,1,1,0
    *(pattern) = 0;
    *(pattern + 1) = 1;
    *(pattern + 2) = 1;
    *(pattern + 3) = 0;
    while (++i < n)
        *(turn + i) = *(pattern + (i % 4));
}
 LinkedList  *create_node(int index, int data)
{
    LinkedList  *newnode;
 
    newnode = (LinkedList *)malloc(sizeof(LinkedList));
    if (!newnode)
        return (NULL);
    newnode -> index = index;
    newnode -> number = data;
    newnode -> next = NULL;
    return (newnode);
}
 void    insert_last(LinkedList **list, int data)
{
    int         ind;
    LinkedList  *ptr;
    LinkedList  *datanode;
 
    ptr = *list;
    if (*list == NULL)
        ind = -1;
    else
    {
        while (ptr -> next != NULL)
            ptr = ptr->next;
        ind = ptr -> index;
    }
    datanode = create_node(ind + 1, data);
    if (!datanode)
        return ;
    if (*list == NULL)
        *list = datanode;
    else
        ptr -> next = datanode;
}

LinkedList    *taking_turn(LinkedList *list, int n)
{
    int         i;
    int         front;
    int         back;
    int         *turn;
    LinkedList  *ptr;
    LinkedList  *newlist;
 
    front = 0;
    i = 0;
    newlist = NULL;
    turn = (int *)malloc(sizeof(int) * n);
    if (!turn)
        return (NULL);
    ptr = list;
    set_turn(turn, n);
    back = list_length(list) - 1;
    while (i < n)
    {
        if (*(turn + i) == 0)
        {
             insert_last(&newlist, get_value_by_index(list, back));
             back--;
        }
        else {
            insert_last(&newlist, get_value_by_index(list, front));
            front++;
        }
        ptr = list;
        i++;
    }
    free(turn);
    return (newlist);
}

int main()
{
    int         n;
    int         l;
    int         num;
    LinkedList  *list;
    LinkedList *turned_list;
 
    scanf("%d", &n);
    l = n;
    list = NULL;
    while (n--)
    {
        scanf("%d", &num);
        insert_last(&list, num);
    }
    turned_list = taking_turn(list, l);
    print_result(turned_list);
    free(list);
    free(turned_list);
}