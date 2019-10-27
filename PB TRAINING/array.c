#include <stdio.h>
#include <stdlib.h>	

int n1,n2,a[100],b[100],c[200];

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
void conc(int a[],int b[]){
	int i,j,m;
	for(i=0;i<n1;i++)
		c[i]=a[i];
	m=i;
	j=0;
	for(i=m;i<(n1+n2);i++){
		c[i]=b[j++];
	}
	quicksort(c,0,n1+n2-1);
	
}

void inter(){
	for(int i=0;i<n1;i++){
		for(int j=i+1;j<n2)
	}
}

void remdup(){
	int i, j,k,n=n1+n2,cnt=0;
	for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(c[i] == c[j])
            {
                for(k=j; k<n; k++)
                {
                    c[k] = c[k + 1];
                }
                cnt++;
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n1+n2-cnt;i++)
		printf("%d ",c[i]);
}

int main(){
	int ch;
	printf("Enter array 1 size :");
	scanf("%d",&n1);
	printf("Enter array 1 elements :");
	for(int i=0;i<n1;i++)
		scanf("%d",&a[i]);
	printf("Enter array 2 size :");
	scanf("%d",&n2);
	printf("Enter array 2 elements :");
	for(int i=0;i<n2;i++)
		scanf("%d",&b[i]);
	printf("1.Concatenate+Sort\n2.Union\n3.Intersection\n4.Exit");	
	while(1){
		printf("\n\nEnter Your Choice :");
		scanf("%d",&ch);
		switch(ch){
			case 1: printf("The concatenated array is :");
					conc(a,b);
					for(int i=0;i<(n1+n2);i++)
						printf("%d ",c[i]);
					break;
			case 2: printf("The union of two arrays are :");
					conc(a,b);
					remdup();
					break;
			default:printf("\nInvalid choice!");
			case 3: printf("The intersection of the arrays are :");
					inter();
					break;
			case 4: printf("Exiting..");
					exit(0);
			
					
		}
	}
}
