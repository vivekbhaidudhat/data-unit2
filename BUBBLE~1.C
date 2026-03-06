#include<stdio.h>
#include<conio.h>
#define size 5
void bubblesort(int a[],int n){
	int i,j,temp;
	
	for(i=n-1;i>0;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
void main(){
	int a[size],i,n;
	clrscr();
	
	for(i=0;i<size;i++){
		printf("enter element : ");
		scanf("%d",&a[i]);
	}
	bubblesort(a,size);
	clrscr();
	printf("after sorting \n");
	for(i=0;i<size;i++){
		printf("%d\n",a[i]);
		
	}
	
	getch();
}