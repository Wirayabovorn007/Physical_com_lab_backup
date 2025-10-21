typedef struct  Weather {
    char*           outlook; //outlook{overcast,sunny,rain}
    int             temperature;
    int             humidity;
    char            wind; //wind{T,F}
    struct Weather  *next;
}                   Wea;
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void    playing_decision(Wea* Weather);
Wea     *createList();
Wea     *createNode(char *outlook, int temp, int humi, char wind);
void    insertLast(Wea **mylist, char *outlook, int temp, int humi, char wind);
void    freeList(Wea *list);
 

int main()
{
    int     n;
    char    wind;
    char    outlook[9];
    Wea     *weatherList;
    int     humidity;
    int     temperature;
 
    weatherList = createList();
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s %d %d %c", outlook, &temperature, &humidity, &wind);
        insertLast(&weatherList, outlook, temperature, humidity, wind);
    }
    playing_decision(weatherList);
    freeList(weatherList);
}
 
Wea *createList(void)
{
    return (NULL); //Start with empty list
}
 
void    freeList(Wea *list)
{
    Wea *temp;
 
    while (list != NULL)
    {
        free(list -> outlook);
        temp = list;
        list = list -> next;
        free(temp);
    }
}
 
Wea     *createNode(char *outlook, int temp, int humi, char wind)
{
    Wea *newnode;
 
    newnode = (Wea *)malloc(sizeof(Wea));
    if (!newnode)
        return (NULL);
    newnode->outlook = strdup(outlook);
    if (!newnode->outlook)
        return (NULL);
    newnode->humidity = humi;
    newnode->temperature = temp;
    newnode->wind = wind;
    newnode->next = NULL;
    return (newnode);
}
 
void    insertLast(Wea **mylist, char *outlook, int temp, int humi, char wind)
{
    Wea *datanode;
    Wea *list;
 
    datanode = createNode(outlook, temp, humi, wind);
    if (!datanode)
        return ;
    if (*mylist == NULL)
        *mylist = datanode;
    else
    {
        list = *mylist;
        while (list->next != NULL) 
            list = list -> next;
        list -> next = datanode;
    }
}
 void    playing_decision(Wea* Weather)
{
    Wea *ptr;
 
    ptr = Weather;
    while (ptr != NULL)
    {
        if (strcmp(ptr->outlook, "overcast") == 0)
            printf("yes\n");
        else if (strcmp(ptr->outlook, "rain") == 0)
        {
            if ((char)(ptr->wind) == 'F')
                printf("yes\n");
            else
                printf("no\n");
        }
        else if (strcmp(ptr->outlook, "sunny") == 0)
        {
            if ((float)(ptr->humidity) <= 77.5)
                printf("yes\n");
            else
                printf("no\n");
        }
        ptr = ptr->next;
    }
}