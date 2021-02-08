//stack operations 
#include<stdio.h>
int stack[20], top, choice, num,size; 
void push(void);
void pop(void);
void display(void);
int main(){
	top = -1;
	printf("Enter the size of stack[max = 20] : "); scanf("%d",&size);
	printf("\n\tStack operation using array\n\t===========================\n");
	printf("    1.PUSH    2.POP    3.DISPLAY    4.EXIT");
	do{
		printf("\nEnter the choice : "); scanf("%d",&choice);
		switch (choice){
			case 1 : {
				push();
				break;
			}
			case 2 : {
				pop();
				break;
			}
			case 3 : {
				display();
				break;
			}
			case 4 : {
				printf("\nExit point\n");
				break;
			}
			default : {
				printf("\nPlease Enter a Valid Choice(1/2/3/4)");
			}
		}
	}
	while(choice != 4);
	return 0;
}
void push(){
	if( top >= size-1 )
		 printf("\n\tSTACK is over flow");

	else{
		printf("\n\tEnter a value to be pushed : ");scanf("%d",&num);
		top++;
		stack[top] = num;
	}
}
void pop(){
	if(top <= -1)
		printf("\nStack is under flow");
	else{
		printf("\n\tThe popped elements is %d\n",stack[top]); 
		top--;
	}
}
void display(){
	if(top >= 0){
		printf("\n The elements in STACK \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\nPress Next Choice");
	}
	else
        printf("\n The STACK is empty");
}
