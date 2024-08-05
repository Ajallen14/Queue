#include <stdio.h>

int t=-1;
int n=5;
int q[5];
int f=-1;
int r=-1;

int isEmpty() {
    return f == -1;
}

int isFull() {
    return r == n- 1;
}


void enqueue(int a){
    if (isFull()) {
        printf("Queue is full\n\n");
    }
    if (isEmpty()) {
        f = 0;
    }else{
        printf("Element is added\n\n");
    }
    q[++r] = a;
}

void dequeue(){
    if (isEmpty()) {
        printf("Queue is empty\n\n");
    }else{
        printf("Element is Removed\n\n");
    }
    int a = q[f];
    if (f == r) {
        f = -1;
        r = -1;
    } else {
        f++;
    }
}

void display(){
    if (isEmpty()) {
        printf("Queue is empty\n\n");
        return;
    }else{
        printf("Queue contents: ");
        for (int i = f; i <= r; i++) {
            printf("%d ", q[i]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
 int c=1;
 while(c!=4){
  printf("Enter '1' for Enqueue \n");
  printf("Enter '2' for Dequeue\n");
  printf("Enter '3' for Display \n");
  printf("Enter '4' to Exit \n");
  printf("Enter ur choice :");
  scanf("%d", &c);
 
  if(c == 1){
    int a;
    printf("Enter an element :");
    scanf("%d", &a);
    enqueue(a);
  }
  
  if(c == 2){
    dequeue();
  } 
  
  if(c == 3){
    display();
  }
 }
}