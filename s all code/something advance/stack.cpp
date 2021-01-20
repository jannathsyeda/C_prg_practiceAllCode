#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    int length,item;
    printf("Enter Length: ");
    scanf("%d", &length);
    stack <int> stk;
    for(int i=0; i<length; i++)
    {
        scanf("%d",&item);
        stk.push(item);
    }
    while(!stk.empty())
    {
        printf("%d\n",stk.top());
        stk.pop();
    }
}
