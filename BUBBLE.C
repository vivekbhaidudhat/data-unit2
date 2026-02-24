#include<stdio.h>
#include<conio.h>
void main(){
	int a[2],i,n,temp,j;
	clrscr();

	printf("enter one number : ");
	scanf("%d",&n);
	a[n];
	printf("\n------------------------------\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=n;i>0;i--){
		for(j=0;j<i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	clrscr();
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	getch();
}