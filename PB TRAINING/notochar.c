#include <stdio.h>
#include <stdlib.h>
int main(){
	int ele,cnt=0;
	char a[][50]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char b[][50]={"Ten","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	char c[][50]={"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty"};
	printf("Enter the value :");
	scanf("%d",&ele);
	int temp=ele,gh=ele;
	while(temp!=0){
		temp/=10;
		cnt+=1;
	}
	if(cnt==1){
		for(int j=0; a[ele-1][j]!='\0';j++)
			printf("%c",a[ele-1][j]);
	}
	if(cnt==2){
		if(ele%10==0){
			for(int j=0;b[((ele/10)-1)][j]!='\0';j++)
				printf("%c",b[((ele/10)-1)][j]);
		}
		else if(ele%10!=0 && ele/10==1){
			for(int j=0;c[((ele%10)-1)][j]!='\0';j++)
				printf("%c",c[((ele%10)-1)][j]);
		}
		else
		{
			for(int j=0;b[((ele/10)-1)][j]!='\0';j++)
				printf("%c",b[((ele/10)-1)][j]);
			printf(" ");
			for(int j=0;a[((ele%10)-1)][j]!='\0';j++)
				printf("%c",a[((ele%10)-1)][j]);
		}	
	}
	if(cnt==3){
		if(ele%100==0){
			for(int j=0;a[((ele/100)-1)][j]!='\0';j++)
				printf("%c",a[((ele/100)-1)][j]);
			printf(" Hundred ");
		}
		else{
			for(int j=0;a[((ele/100)-1)][j]!='\0';j++)
				printf("%c",a[((ele/100)-1)][j]);
			printf(" Hundred ");
			gh%=100;
			if(gh%10!=0 && gh/10==1){
				for(int j=0;c[((ele%10)-1)][j]!='\0';j++)
					printf("%c",c[((ele%10)-1)][j]);
			}
			else{
				for(int j=0;b[((gh/10)-1)][j]!='\0';j++)
					printf("%c",b[((gh/10)-1)][j]);
				printf(" ");
				for(int j=0;a[((gh%10)-1)][j]!='\0';j++)
					printf("%c",a[((gh%10)-1)][j]);
			}
		}
	}
	return 0;
}
