#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct HighwaySort
{
	char *name;
	float length;
	struct HighwaySort *next;
} Highway;

void sortList(Highway **head)
{
	for (Highway *i = *head; i != NULL; i = i->next)
	{
		for (Highway *j = i->next; j != NULL; j = j->next)
		{
			if (i->length < j->length)
			{
				float tempLen = i->length;
				i->length = j->length;
				j->length = tempLen;

				char *tempName = i->name;
				i->name = j->name;
				j->name = tempName;
			}
		}
	}
}

float getLengthByName(char *name)
{
	if (strcmp(name, "Phet Kasem") == 0)
		return (1310.554);
	if (strcmp(name, "Phahonyothin") == 0)
		return (994.749);
	if (strcmp(name, "Mittraphap") == 0)
		return (509.1);
	if (strcmp(name, "Sukhumvit") == 0)
		return (488.387);	
}


Highway *createNode(char *name, float length)
{
	Highway *newnode;

	newnode = (Highway *)malloc(sizeof(Highway));
	if (!newnode)
		return (NULL);
	newnode->name = strdup(name);
	newnode->length = length;
	newnode->next = NULL;
	return (newnode);
}

void insert_last(Highway **lst, char *name, float length)
{
	Highway *dataNode;

	dataNode = createNode(name, length);
	
	if (!dataNode) return ;
	if (*lst == NULL)
	{
		*lst = dataNode;
		return ;
	}
	Highway *list;
	list = *lst;
	while (list -> next != NULL)
		list = list -> next;
	list -> next = dataNode;
}


int main()
{
	int n;
	Highway *hw;
	char *tempName = malloc(51);
	hw = NULL;

	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		scanf(" %[^\n]", tempName);
		insert_last(&hw, tempName, getLengthByName(tempName));
	}

	sortList(&hw);

	while (hw != NULL)
	{
		printf("%s\n", hw->name);
		hw = hw->next;
	}
	
	Highway *cur  = hw;

	while (cur)
	{
		Highway *temp = cur;
		cur = cur->next;
		free(temp->name);
		free(temp);
	}
}