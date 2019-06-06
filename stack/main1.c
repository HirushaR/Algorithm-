#define SIZE 5


struct stack{
	int data[SIZE];
	int top;
} s;

void push(int item)
{
	if(!full()){
		s.top++;
		s.data[s.top] = item;
	}
	else	printf("Stack is full");
}
int pop()
{
	if(!empty()){
		int item = s.data[s.top];
		s.top--;
		return item;
	}
	else	return -999;
}

int full(){
	if(s.top==SIZE-1)	return 1;
	else	return 0;
}
int empty(){
	if(s.top==-1)	return 1;
	else	return 0;
}

int peek(){
	if(!empty()){
		return s.data[s.top];
	else	return -999;
}

