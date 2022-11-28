#include<stdio.h>
#include<stdlib.h>
int main(){
	struct LL{
		int a;
		struct LL *to;
	};
	struct LL *p, *q, *h= NULL, *t, *i, *m_i,*j;
	int ch, s, mc, m, z;
	while(1)
	{
		printf("Press 1: Insert After;	Press 2: Display;	Press 3: Insert Before;\nPress 4: Delete First	Press 5:Delete Last		Press 6: insert after a given node\npress 7: insert before a given node		press 8:delete any middle node		press 9: Sorting	Press 0: Exit\n");
  		scanf("%d",&ch);
		switch(ch)
		{
			case 0: {
				return 0;
			}
			case 1:	{
				p = (struct LL *)malloc(sizeof(struct LL));
				printf("Enter a value for inserting after: ");
				scanf("%d",&p->a);
				p-> to = NULL;
				
				if(h == NULL){
				h = p;
				}
				else{
					q=h;
					while(q->to != NULL){
					q = q-> to;
					}
					q->to = p;
				}
				break;
			}
			case 2: {
				q=h;
				while(q != NULL){
					printf("%d	",q->a);
					q = q-> to;
				}
				printf("\n");
				break;
			}
			case 3: {
				p = (struct LL *)malloc(sizeof(struct LL));
				printf("Enter a value for inserting before: ");
				scanf("%d",&p->a);
				p -> to = h;
				h = p;
				break;
			}
			case 4: {
				q = h;
				h = h -> to;
				free(q);
				break;
			}
			case 5: {
				q=h;
				while(q != NULL){
					if(q->to->to == NULL){
						q->to = NULL;
						free(q->to);
						break;
					}
					q = q-> to;
				}
				break;
			}
			case 6: {
				printf("Enter the node for inserting manually: ");
				scanf("%d",&s);
				mc=0;
				q=h;
				while(q!= NULL){
				if(s == q-> a){
				mc=1;
				break;	
				}
				q = q-> to;
				}
				if(mc==1){
					p = (struct LL *)malloc(sizeof(struct LL));
					printf("Enter a value for inserting after: ");
					scanf("%d",&p->a);
					p->to = NULL;
					p->to = q->to;
					q->to = p;
				}else{
					printf("Given Node is not found");
				}
				break;
			}
			case 7: {
				printf("Enter the node for inserting manually: ");
				scanf("%d",&s);
				mc=0;
				q=h;
				t= h;
				while(q!= NULL){
					if(s == q->a){
					mc=1;
					break;	
				}
				t = q;
				q = q-> to;
				}
				if(mc==1){
					p = (struct LL *)malloc(sizeof(struct LL));
					printf("Enter a value for inserting before: ");
					scanf("%d",&p->a);
					p->to = NULL;
					p->to = t->to;
					t->to = p;
				}else{
					printf("Given Node is not found");
				}
				break;
			}
			
			case 8: {
				printf("Enter the node you want to delete: ");
				scanf("%d",&s);
				mc=0;
				q=h;
				t=h;
				while(q!= NULL){
					if(s == q-> a){
						mc=1;
					break;	
				}
				t=q;
				q = q-> to;
				}
				if(mc==1){
					t->to = q->to;
					printf("%d is deleted",q->a);
					free(q);
				}
				else{
					printf("Given Node is not found");
				}
				break;
			}
			case 9: {
				
				for(i=h; i!= NULL; i=i->to){
					m = i->a;
					m_i = i;
					for(j= i->to; j!=NULL; j=j->to){
						if(m > (j->a)){
							m= j->a;
							m_i = j;
						}
					}
					z = m_i->a;
					m_i->a = i->a;
					i->a = z;
				}
				break;
			}
			
		}
	}
}