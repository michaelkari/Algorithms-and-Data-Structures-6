#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void sortHeap(int);
extern int heapDelete();
extern int getSize();
extern int heapSize();
extern void printTree(int);
extern void addHeap(int);

int main(int argc, char * argv[])
{
	int value,i,removed,cnt;
	while (scanf("%d\n", &value) != EOF) {
		fprintf(stderr, "READING INPUT: %d\n", value);
		cnt += 1;
		addHeap(value);
	}
	printTree(1);
	printf("\n");
	cnt=heapSize();
	for(i=0;i<cnt;i++) {
		removed=heapDelete();
		push(removed);
		printf("%d \n",removed);
	}
	printf("\n");
	for(i=0;i<cnt;i++){
		printf("%d \n",pop());
	}
	exit(0);
}
