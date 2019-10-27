#include <stdio.h>
#include <stdlib.h>	

int main(){
	printf("Enter words you want to read :");
	char a[200];
	int temp,first,firstx;
	scanf("%[^\n]s", a);
	for(int i=0;a[i]!='\0';i++){
		if(i==0)
			first=i;
		else if(a[i]==' ' && a[firstx-1]==' ')
			firstx=firstx;
		else if(a[i]==' ')
			firstx=i+1;
		
		if(first==0){
			if(a[i]==' '){
				temp=a[i-1];
				a[i-1]=a[first];
				a[first]=temp;
				first=-1;
			}
			else if(a[i+1]=='\0'){
				temp=a[i];
				a[i]=a[first];
				a[first]=temp;
				first=-1;
			}
		}
		else{
			if(a[i]==' '){
				temp=a[i-1];
				a[i-1]=a[firstx];
				a[firstx]=temp;
			}
			else if(a[i+1]=='\0'){
				temp=a[i];
				a[i]=a[firstx];
				a[firstx]=temp;
			}
		}
	}
	for(int i=0;a[i]!='\0';i++)
		printf("%c",*(a+i));
	return 0;
}
