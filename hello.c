#include <stdio.h>

struct node
{
    int val;
    struct node *nptr;
};

struct node *sptr = NULL;
struct node *eptr = NULL;

struct node insert();
void delete();

int main()
{

    int choice;

again:
    printf("\n==================================================\n");
    printf("\nEnter the operation : \n 1. Insert \n 2. Delete\n 0. Exit\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:;
        struct node n = insert();
        printf("\nThe inserted value is : %d", n.val);
        printf("\nThe address is : %p", n.nptr);
        break;

    case 2:
        delete();
        break;

    case 0:
        goto exit;

    default:
        printf("invalid choice.\n");
        break;
    }

    goto again;

exit:
    printf("\nExiting.....");
    return 0;
}

struct node insert()
{
    int num;

    printf("Enter a number to insert : ");
    scanf("%d", &num);

    struct node n;
    n.val = num;
    eptr = &n;
    printf("the eptr value is : %p", eptr);
    return n;
}

void delete()
{
    int num;

    printf("Enter a number to delete : ");
    scanf("%d", &num);
}