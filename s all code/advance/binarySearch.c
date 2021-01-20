#include<stdio.h>
int main()
{
    int arr[100], length, low_index, high_index, mid_index, search_number;
    printf("Enter Array Length: ");
    scanf("%d", &length);
    printf("Enter Array Element: ");
    for(int i = 0; i<length; i++)
    {
        scanf("%d", &arr[i]);
    }
    low_index = 0;
    high_index =  length-1;
    printf("Which number do you search: ");
    scanf("%d", &search_number);
    while(low_index<=high_index)
    {
        mid_index = (low_index + high_index) / 2;
        if(search_number == arr[mid_index])
        {
            break;
        }
        if(search_number > arr[mid_index] )
        {
            low_index = mid_index + 1;


        }
        else
        {
            high_index = mid_index - 1;
        }
    }

    if(low_index > high_index)
    {
        printf("Your given number is not found\n");
    }
    else
    {
        printf("%d is found in index %d\n", arr[mid_index], mid_index);
    }
    return 0;
}


