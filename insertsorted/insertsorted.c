#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lists.h"

void insert_sorted(node** list, const int* n);

int main()
{
    node* nums = NULL;

    for (int i = 0; i < 5; i++)
        insert_sorted(&nums, &i);

    printf("Your list now contains ");
    for (node* i = nums; i != NULL; i = i->next)
        printf("%d ", i->n);
    printf("\n");

    return 0;
}

void insert_sorted(node** list, const int* n)
{
    srand(time(NULL) + *n);

    if (!(*list))
    {
        //if there are no elements in the list lets put the first element
        *list = malloc(sizeof(node));
        if (!(*list))
            exit(1);

        (*list)->n = rand() % 100;
        (*list)->next = NULL;
    }
    else 
    {
        //make the new node
        node* new = malloc(sizeof(node));
        if (!new)
            exit(2);

        new->n = rand() % 100;
        new->next = NULL;

        //search the right position in the list for the new node
        int counter = 0;
        node* i = *list;
        while(i != NULL)
        {
            //check if the first element is greater or less than n
            if (i->n > new->n && counter == 0)
            {
                //node* tmp = *list;
                new->next = *list;
                *list = new;
                break;
            }
            else if (i->next != NULL && i->next->n < new->n)
            {
                i = i->next;
                counter++;
            }
            else
            {
                new->next = i->next;
                i->next = new;      
                break;
            }
        }
    }
}
