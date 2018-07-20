/*Program to print Area and Perimeter of Circle and Square Using Processes*/

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void  main(){
	int r;
	int a;
	printf("Enter radius and side of Circle and Square respectively:");
	scanf("%d", &r);
	scanf("%d", &a);
	pid_t pid = fork();
	if(pid<0)
	{
	printf("Error");
	}
	else if(pid==0){
		float carea=r*r*3.14;
		float cpe=2*3.14*r;
		printf("Area of circle=%f Perimeter=%f\n", carea, cpe);
	}
	else{
	int ar=a*a;
	int p=4*a;
	printf("Area of Square=%d Perimeter=%d\n", ar, p);
	}
}
