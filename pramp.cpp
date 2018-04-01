#include <stdio.h>
#include <stdlib.h>

//Let me know when you are back...

typedef struct {
  int top;
  size_t size;
  char *buff;
} Stack;

Stack* create_stack(int size){   
  Stack *stck = (Stack*) malloc(sizeof(char)*size);
  stck->size = size;
  stck->top = -1;
  return stck;
}

void pop_stack(Stack *ptr){
  ptr->top--;
}

void push_stack(Stack *ptr, char c){
  ptr->buff[++ptr->top] = c; 
}
  
int stack_empty(Stack *ptr){
  return (ptr->top == -1);
}

int bracketMatch(char *text) {
  
  Stack *stck = create_stack(20);
  int count = 0;
  
  stck->buff[stck->top+1] = '\0';
  printf("%s\n",stck->buff);
  
  for(int i = 0; text[i]!='\0'; i++)
  {
    if(text[i] == '('){
        push_stack(stck, text[i]);
    }else{
        count = stack_empty(stck)? count+1:0;
        if(!stack_empty(stck))
            pop_stack(stck);
    }
  }
  
  count += stck->top < 0? 0: (stck->top+1);
  return count;
}

int main() {
  char ptr[5] = "((()";
  ptr[4] ='\0';
  
  printf("Ans: %d\n", bracketMatch(ptr));
  
  return 0;
}