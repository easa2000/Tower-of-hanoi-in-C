// Tower of Hanoi

#include<stdio.h>

void tower(int n,char A, char B, char aux){
	if(n == 1){
		printf("\nMove disk 1 from %c to rod %c ",A,B);
		return;
	}
	
	tower(n-1,A,aux,B);
	printf("\nMove disk %d form rod %c to rod %c",n,A,B);
	tower(n-1,aux,B,A);
}
int main(){
	int n;
	printf("Enter the number of disc: ");
	scanf("%d",&n);s
	tower(n,'A','C','B');
	return 0;
}
