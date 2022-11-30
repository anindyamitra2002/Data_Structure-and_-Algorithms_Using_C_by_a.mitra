#include<stdio.h>
#include<stdlib.h>
struct BST{
		int a;
		struct BST *r, *l;
	};
	struct BST *p, *q, *rt, *t;
void printBST(struct BST *q){
	if(q->l != NULL){
		printBST(q->l);
	}
	printf("%d	  ",q->a);
	if(q->r != NULL){
		printBST(q->r);
	}
}

int main(){
	int ch;
	
	while(1){
		printf("Press 1: Build BST		Press 2: Display BST\n");
		scanf("%d",&ch);
		switch(ch){
  			case 1: {
				 	p = (struct BST *)malloc(sizeof(struct BST));
					printf("Enter the Value you want to insert: ");
					scanf("%d",&p->a);
					p->l = p->r = NULL;
	
					q = rt;
					while(q != NULL){
					if(p->a == q->a){
					printf("Duplicate node is not allowed!");
					free(q);
					break;
					}
					else if(p->a < q->a){
					t = q;
					q = q->l;
					}
					else{
					t = q;
					q = q->r;
					}
					}
	
				if(p->a < t->a){
				t->l = p;
				}
				else{
					t->r = p;
				}

				break;
			}
				
				case 2: {
					printBST(q);
					break;
				}
		}
	}
}