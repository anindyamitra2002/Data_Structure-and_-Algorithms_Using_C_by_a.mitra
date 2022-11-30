#include <stdio.h>
#include<stdlib.h>
int t = 0;
int a[20];
void push(int x)
{
	a[t] = x;
	t++;
}

int pop()
{
	t--;
	return a[t];
}
int main()
{
	int i, o1, o2, c, p;
	char str[10], m;
	printf("Enter the postfix expression: ");
	gets(str);
	
	i = 0;
	while (str[i] != '\0')
	{

		if (str[i] == '+')
		{
			o2 = pop();
			o1 = pop();
			c = o1 + o2;
			printf("%d, %d, %d\n",o2,o1,c);
			push(c);
		}
		else if (str[i] == '-')
		{
			o2 = pop();
			o1 = pop();
			c = o1 - o2;
			printf("%d, %d, %d\n",o2,o1,c);
			push(c);
		}
		else if (str[i] == '*')
		{
			o2 = pop();
			o1 = pop();
			c = o1 * o2;
			printf("%d, %d, %d\n",o2,o1,c);
			push(c);
		}
		else if (str[i] == '/')
		{
			o2 = pop();
			o1 = pop();
			c = o1 / o2;
			printf("%d, %d, %d\n",o2,o1,c);
			push(c);
		}
		else
		{
			p = str[i]- '0';
			printf("push %d	",p);
			push(p);
		}
		i++;
	}
	printf("Answer: %d",a[0]);
	
}