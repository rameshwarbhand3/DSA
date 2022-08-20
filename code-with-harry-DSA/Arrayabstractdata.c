#include <stdio.h>
#include <stdlib.h>
struct myarray
{cd
    int total_size;
    int used_size;
    int *ptr;
};

int i, n;
void createarray(struct myarray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void show(struct myarray *a)

{
    for (i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}
void setval(struct myarray *a)
{
    for (i = 0; i < a->used_size; i++)
    {
        printf("Enter element%d", i);
        scanf("%d\n", &n);
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct myarray marks;
    createarray(&marks, 10, 2);
    printf("We are running setval now\n");
    setval(&marks);
    printf("We are running show now\n");
    show(&marks);
    return (0);
}
