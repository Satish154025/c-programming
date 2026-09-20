#include<stdio.h>
#include<stdlib.h>

struct stack{
int data;
struct stack *NEXT;
}*top=NULL;

typedef struct stack node;

void push();
void pop();
void peek();
void display();

int main(){
int ch;
while(1){
    printf("enter the choice\n");
    printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
    scanf("%d",&ch);
if(ch==1)
     push();
else if(ch==2)
    pop();
else if(ch==3)
    peek();
else if(ch==4)
    display();
else if(ch==5)
    break;
else
    printf("choice is invalid\n");
}
return 0;
}

void push(){
node *temp;
temp=(node*)malloc(sizeof(node));
printf("enter the value\n");
scanf("%d",&temp->data);
temp->NEXT=top;
top=temp;
printf("push successfull\n");
}

void pop(){
node *temp;
temp=top;
if(temp==NULL){
    printf("stack underflow\n");
}
else{
top=top->NEXT;
printf("popped itam is = %d\n",temp->data);
free(temp);
printf("pop successfull\n");
    }
}

void peek(){
node *temp;
temp=top;
if(temp==NULL){
    printf("stack is underflow\n");
}
else{
    printf("peek value is %d\n",temp->data);

}
}
void display(){
node *temp;
temp=top;
if(temp==NULL){
    printf("stack is underflow\n");
}else{
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->NEXT;
        }
    }
}
