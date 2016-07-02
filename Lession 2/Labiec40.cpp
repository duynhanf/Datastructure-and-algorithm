
// Author : Bui Duy Nhan
//
//

#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

int N,H;

void doPrintCharacter(char character,int frequence){
	for(int i=0;i<frequence;i++){
		printf("%c",character);
	}
}

void drawV180(int h){	
	int width = h * 2 + 1;
	for(int i=h-1;i>=0;i--){
		
		if(i==0){
			for(int j=0;j<N;j++){
				
				doPrintCharacter(' ',1);
				doPrintCharacter('*',1);
				doPrintCharacter(' ',width-4);  
				doPrintCharacter('*',1);
			}
		 	printf("\n");
		 	continue;
		}
		if(i == h-1){
			for(int j=0;j<N;j++){
				doPrintCharacter(' ',i+1);
				doPrintCharacter('*',1);
				doPrintCharacter(' ',i);
			}
			printf("\n");
			continue;
		}
		
		
		for(int j=0;j<N;j++){
			
			doPrintCharacter(' ',i+1);
			doPrintCharacter('*',1);
			doPrintCharacter(' ',width - 2 * i-4); 
			doPrintCharacter('*',1);
			doPrintCharacter(' ',i);
		}
		printf("\n");
	
	}
}

void drawV(int h){
	
	int width = h * 2 ;
	
	for(int i=0;i<h;i++){
		if(i==0){
			doPrintCharacter('*',1);
			for(int j=0;j<N;j++){
				int a = N/2;
				doPrintCharacter(' ',width-3);
				doPrintCharacter('*',1);
			}
		 	printf("\n");
		}else if(i == h-1){
			for(int j=0;j<N;j++){
				doPrintCharacter(' ',i);
				doPrintCharacter('*',1);
				doPrintCharacter(' ',i-1);
			}
			printf("\n");
		}else{
			
			for(int j=0;j<N;j++){
				
				doPrintCharacter(' ',i);
				doPrintCharacter('*',1);
				doPrintCharacter(' ',width - 2 * i-3);
				doPrintCharacter('*',1);
				doPrintCharacter(' ',i-1);
			}
			printf("\n");
		}
	}
}

int main()
{
 	scanf("%d %d",&N,&H);
 	
 	// in nua tren
 	drawV180(H/2);
 	
 	// in nua duoi
 	drawV(H/2+1);
 	
	getch();
	return 0;
}

