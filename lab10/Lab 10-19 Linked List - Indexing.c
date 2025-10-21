#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct FoodList{
    int             index;
    char            *name;
    struct FoodList *next;
}                   Food;
 
int     get_len_list(Food *mylist);
void    insert_last(Food **list, char *data);
void    search_index(Food *list, int ind);
void    free_list(Food *list);
Food    *createList();
Food    *createNode(int current_ind, char *data);
 
 
int main()
{
    int     ind;
    Food    *food;
    char    *temp;
 
    temp = malloc(21);
    food = createList();
    while (1)
    {
        scanf(" %s", temp);
        if (strcmp(temp, "Last") == 0)
            break ;
        insert_last(&food, temp);
    }
    scanf("%d", &ind);
    search_index(food, ind);
    free_list(food);
    free(temp);
}

Food    *createList()
{
    return (NULL);
}
 
void    free_list(Food *list)
{
    Food    *temp;
 
    while (list != NULL)
    {
        free(list->name);
        temp = list;
        list = list->next;
        free(temp);
    }
}
 
Food    *createNode(int current_ind, char *data)
{
    Food    *newnode;
 
    newnode = (Food *)malloc(sizeof(Food));
    if (!newnode)
        return (NULL);
    newnode->name = strdup(data);
    if (!(newnode->name))
        return (NULL);
    newnode->index = current_ind;
    newnode->next = NULL;
    return (newnode);
}

void    insert_last(Food **list, char *data)
{
    int     ind;
    Food    *lst;
    Food    *datanode;
 
    lst = *list;
    if (*list == NULL)
        ind = 0;
    else
    {
        while (lst -> next != NULL)
            lst = lst->next;
        ind = lst->index + 1;
    }
    datanode = createNode(ind, data);
    if (!datanode)
        return ;
    if (*list == NULL)
        *list = datanode;
    else
        lst -> next = datanode;
}

int     get_len_list(Food *mylist)
{
    Food    *ptr;
    int     counter;
 
    counter = 0;
    ptr = mylist;
    while (ptr != NULL)
    {
        counter++;
        ptr = ptr->next;
    }
    return (counter);
}

void    search_index(Food *list, int ind)
{
    Food    *ptr;
 
    if (ind < 0)
        ind = get_len_list(list) + ind;
    if (ind > get_len_list(list) - 1 || ind < 0)
    {
        printf("Error\n");
        return ;
    }
    ptr = list;
    while (ptr != NULL)
    {
        if (ptr->index == ind)
        {
            printf("%s\n", ptr->name);
            return ;
        }
        ptr = ptr->next;
    }
}