#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void quicksort(int list[],int low,int high){
	int pivot,i,j,temp;
	if(low<high){
		pivot=low;
		i=low;
		j=high;
		while(i<j){
			while(list[i]<=list[pivot] && i<=high)
				i++;
			while(list[j]>list[pivot] && j>=low)
				j--;
			if(i<j)
			{
				temp=list[i];
				list[i]=list[j];
				list[j]=temp;
			}
		}
		temp=list[j];
		list[j]=list[pivot];
		list[pivot]=temp;
		quicksort(list,low,j-1);
		quicksort(list,j+1,high);
	}
}
int main(){
	int n,energy,time;
	printf("Enter no of zombies :");
	scanf("%d",&n);
	printf("Enter player initial energy :");
	scanf("%d",&energy);
	printf("Enter game time :");
	scanf("%d",&time);
	
	if(time<n){
		printf("\nPlayer Lose!");
		exit(0);
	}
	int a[n];
	printf("Enter zombie energies :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++){
		if(a[i]<energy){
			energy+=energy-a[i];
		}
		else{
			printf("\nPlayer Lose!");
			exit(0);
		}
	}
	int minen;
	printf("Enter minimum energy :");
	scanf("%d",&minen);
	printf("Game result :");
	if(energy >= minen)
		printf("Player Win!");
	else
		printf("Player Lose!");
	return 0;
}
