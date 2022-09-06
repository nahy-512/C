#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int num1,num2,num3,num4;
	
	do{num1=rand()%10;}while(num1==0);
	do{num2=rand()%10;}while(num2==num1);
	do{num3=rand()%10;}while(num3==num2||num3==num1);
	do{num4=rand()%10;}while(num4==num3||num4==num2||num4==num1);
	
	int cnt=0;
	int strike,ball;
	do{
		if(cnt>=10)break;
		strike=0,ball=0;
		
		int input;
		scanf("%d",&input);
		if(input>=10000||input<1000){
			printf("input 4-digit numbers\n\n");
			continue;
		}
		
		int d1,d2,d3,d4;
		d1=input/1000;
		d2=(input%1000)/100;
		d3=(input%100)/10;
		d4=input%10;
		
		cnt++;
		if(d1==d2||d2==d3||d1==d3||d4==d1||d4==d2||d4==d3){
			printf("%d count:number overlap\n\n",cnt);
			continue;
		}
		if(num1==d1)strike++;
		else if(num1==d2||num1==d3||num1==d4) ball+=1;
		
		if(num2==d2)strike++;
		else if(num2==d1||num2==d3||num2==d4) ball+=1;
		
		if(num3==d3)strike++;
		else if(num3==d1||num3==d2||num3==d4) ball+=1;
		
		if(num4==d4)strike++;
		else if(num4==d1||num4==d2||num4==d3) ball+=1;
		
		printf("%d count: %d Strike, %d Ball\n\n", cnt,strike,ball);
	}while(strike!=4);
	
	if(cnt>10)
	  printf("Fail! Answer Number: %d%d%d%d",num1,num2,num3,num4);
	else
	  printf("SUCCESS! Try count: %d",cnt);
	  
	return 0;
}
