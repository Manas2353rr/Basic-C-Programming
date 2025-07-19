#include <stdio.h>

#define size 4

void sort(int a[])
{
    for (int i = 0; i < size - 1; i++)
    {

        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (i != min)
        {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
}

void read(int a[])
{

    for (int i = 0; i < size; i++)
    {

        printf("Enter age %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}
void show(int a[])
{
    for (int i = 0; i < size; i++)
        printf("%d\t", a[i]);
}

int main()
{
    int a[size];
    read(a);
    sort(a);
    show(a);
}
