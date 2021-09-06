#include<stdio.h>
#include<ctype.h>
char stack[10];
int top = -1;
void push(char x) {
    stack[++top] = x;
}
char pop() {
    if(top == -1) return -1;
    else return stack[top--];
}
int priority(char x) {
    if(x == '(') return 0;
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    if(x == '^' || x == '$') return 3;
    return 0;
}
void display()
{

    printf("\n********************************");

}
int main() {
    char str[100];
    char *e, x;
    int y,i,j;
    printf("Enter the expression : ");
    //scanf("%s",exp);
    gets(str);
    for(i = 0; str[i] != '\0'; ++i) {
        while (!((str[i]>='0'&&str[i]<='9')|| (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'&& str[i] <= 'Z') || str[i] == '\0'||str[i]=='('||str[i]==')'||str[i]=='+' || str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^' ||str[i]=='$')) {
            for(j = i; str[j] != '\0'; ++j) {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }
    display();
    printf("\nResultant String : ");
    puts(str);

    int count;
    count=0;

    for(i = 0; str[i] != '\0'; ++i) {
        {
            if(str[i] == '+' || str[i] == '-')
            {
                count=1;
                printf("rank %d\n",count);

                display();
            }
            if(str[i]== '*' || str[i]== '/')
            {   count=2;
                printf("rank %d\n",count);
                display();
            }
            if(str[i]== '^' || str[i] == '$')
            {
                count=3;
                printf(" rank %d\n",count);
                display();
            }
        }
    }
    printf("\n");
    e = str;
    while(*e != '\0') {
        if(isalnum(*e)) printf("%c",*e);
        else if(*e == '(') push(*e);
        else if(*e == ')') {
            while((x = pop()) != '(') printf("%c", x);
        }
        else {
            while(priority(stack[top]) >= priority(*e)) printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1) {
        printf("%c",pop());
    }
    display();
    display();
    return 0;
}
