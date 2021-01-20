#include<stdio.h>
#include<string.h>
#include<queue>

using namespace std;
int main()
{
   int length,item;
    printf("Enter Length: ");
    scanf("%d", &length);
    queue <int> q;
    printf("Enter Element: ");
    for(int i=0;i<length;i++)
    {
        scanf("%d",&item);
        q.push(item);
    }
    while(!q.empty())
    {
        printf("%d ",q.front());
        q.pop();
    }
}

