#include <stdio.h>
int main()
{
    int size;
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int array[size];
    for (i = 0; i < size; i++)
    {
        printf("Index - %d: ", i);
        scanf("%d", &array[i]);
        
    }
    int value;
    printf("Enter element to search: ");
    scanf("%d", &value);

    int flag = 0;
    
    for (i = 0; i < size; i++)
    {
        if (value == array[i])
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 1){
        printf("%d found in index %d", value, i);
    }
    else
    {
        printf("%d is not found");
    }


    return 0;
}