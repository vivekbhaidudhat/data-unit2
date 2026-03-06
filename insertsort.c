#include<stdio.h>
#include<conio.h>
#define size 5
void main(){
	int a[size],i,j,k,t;
	clrscr();
	
	for(i=0;i<size;i++){
		printf("enter element : ");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(a[j] < a[i]){
				t=a[j];
				a[j]=a[i];
				for(k=i;k>j;k--){
					a[k]=a[k-1];
				}
				a[k+1]=t;
			}
		}
	}
	
	
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);
	
	getch();
	
}