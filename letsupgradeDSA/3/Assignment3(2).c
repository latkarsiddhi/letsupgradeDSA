void beginsert()
{
    struct node *ptr;
    node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
@@ -31,9 +31,9 @@ void beginsert()
}
void lastinsert()
{
    struct node *ptr, *temp;
    node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
@@ -65,8 +65,8 @@ void lastinsert()
void randominsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    node *ptr, *temp;
    ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
@@ -95,7 +95,7 @@ void randominsert()
}
void begin_delete()
{
    struct node *ptr;
    node *ptr;
    if (head == NULL)
    {
        printf("\nList is empty\n");
@@ -110,7 +110,7 @@ void begin_delete()
}
void last_delete()
{
    struct node *ptr, *ptr1;
    node *ptr, *ptr1;
    if (head == NULL)
    {
        printf("\nlist is empty");
@@ -138,7 +138,7 @@ void last_delete()

void display()
{
    struct node *ptr;
    node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
@@ -194,4 +194,4 @@ void main() {
            printf("Please enter valid choice..");  
        }
    }
} 
}