//delete traverse insert last, front, at, sort list, indexing

//kuy hee tad linkedlist!

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student{
	char *name;
	int	age;
	struct Student *next;
} Std;

typedef struct School
{
	int	count;
	Std *head;
} Schl;

Std *creteDataNode(char *name, int age)
{
	Std *student = malloc(sizeof(Std));
	if (!student) return (NULL);
	student->name = strdup(name);
	student->age = age;
	student->next = NULL;
	return (student);
}

Schl *createNewList()
{
	Schl* s = malloc(sizeof(Schl));
	if (!s) return (NULL);
	s->count = 0;
	s->head = NULL;
	return (s);
}

void insert_last(Schl *list, int age, char *name)
{
	Std *DataNode = creteDataNode(name, age);
	if (!DataNode) return ;
	if (list->head == NULL)
	{
		list->head = DataNode;
		list->count++;
		return ;
	}
	Std *ptr= list->head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = DataNode;
	list->count++;
}

void freeList(Schl *list)
{
	Std *curr;

	curr = list->head;
	while (curr)
	{
		Std *tmp = curr;
		curr = curr->next;
		free(tmp->name);
		free(tmp);
	}
	free(list);
}


void printList(Schl *list) {
    Std *data = list->head;
	printf("\nList of students\n------------------------\n");
	int i =0;
    while (data) {
        printf("%d. Name: %s, Age: %d\n",i, data->name, data->age);
        data = data->next;
		i++;
    }
}

void sort(Schl *list)
{
	for (Std *i=list->head; i->next; i = i->next)
	{
		for (Std *j = i->next; j; j = j->next)
		{
			if (j->age < i->age)
			{
				int temp = i->age;
				i->age = j->age;
				j->age = temp;

				char *tempName = i->name;
				i->name = j->name;
				j->name = tempName;
			}
		}
	}
}

void insert_at(char *name, int age, Schl *list, int ind)
{
	Std *data = creteDataNode(name, age);
	if (!data) return ;
	if (list->head == NULL)
	{
		data->next = list->head;
		list->count++;
	}
	else
	{
		int i=0;
		Std *curr = list->head;
		while (curr->next != NULL && i<ind-1)
		{
			curr = curr->next;
			i++;
		}
		data->next = curr->next;
		curr->next = data;
		list->count++;
	}
}

void deleteNode(Schl *list, int ind)
{
	if (ind == 0)
	{
		Std *temp = list->head;
		list->head = list->head->next;
		return ;
	}
	int i=-1;
	Std *curr = list->head;
	while (curr->next != NULL && ++i < ind-1)
		curr = curr->next;
	Std *temp = curr->next;
	curr->next = temp->next;
	free(temp->name);
	free(temp);
	list->count--;
}

int main()
{
	Schl *it_kmitl = createNewList();
	char *temp = malloc(20);
	int t;
	int n;
	printf("How many student to add?: ");
	scanf("%d", &n);
	printf("Enter name and last name of %d students\n", n);
	for (int i = 0; i<n;i++)
	{
		scanf(" %[^\n]%d", temp, &t);
		insert_last(it_kmitl, t, temp);
	}
	printf("\nList of students (%d)\n------------------------\n", n);
	printList(it_kmitl);

	int f = 1;
	int ind;
	while (f)
	{
		printf("Select the operation: \n(1) Sort student\n(2) Delete student\nInsert/(3)Add student\nExit (0)\nSelect: ");
		scanf("%d", &f);
		if (!f) break;

		if (f == 1) {
			sort(it_kmitl);
			printList(it_kmitl);
		}
		if (f == 2) {
			scanf("%d", &ind);
			deleteNode(it_kmitl, ind);
			printList(it_kmitl);
		}
		if (f == 3) {
			scanf(" %[^\n]%d", temp, &t);
			scanf("%d", &ind);
			insert_at(temp, t,it_kmitl, ind);
			printList(it_kmitl);
		}
	}

	freeList(it_kmitl);
}