#include<stdio.h>
int main(){
    int ara[100], length, pos = -1, searchItem;
    printf("Enter Array Length: ");
    scanf("%d", &length);
    printf("Enter Array Element: ");
    for(int i=0; i<length; i++){
        scanf("%d", &ara[i]);
    }
    printf("Which number do you want to search: ");
    scanf("%d", &searchItem);
    for(int i=0;i<length; i++){
        if(searchItem == ara[i]){
            pos = i;
            break;
        }
    }

    if(pos == -1)
        printf("Not Found\n");
    else
        printf("%d is found in index %d\n",ara[pos], pos);

}
