#include<stdio.h>
#include<ctype.h>

char stack[10];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x){
            if(x == '(')
                return 0;
                if(x == '+' || x == '-')
                    return 1;
                    if(x == '*' || x == '/')
                        return 2;
                        if(x == '^' || x == '$')
                            return 3;

                            return 0;
                }

int main()
{
    char str[100];
    char *e, x;
    int y,i,j;

    printf("Enter the expression : ");
    //scanf("%s",exp);
    gets(str);
    for(i = 0; str[i] != '\0'; ++i)
{
while (!( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'&& str[i] <= 'Z') || str[i] == '\0'||str[i]=='+' || str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^' ))
{
for(j = i; str[j] != '\0'; ++j)
{
str[j] = str[j+1];
}
str[j] = '\0';
}
}
printf("\nResultant String : ");
puts(str);
    printf("\n");
    e = str;

    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }

    while(top != -1)
    {
        printf("%c",pop());
    }
    return 0;
}
    
