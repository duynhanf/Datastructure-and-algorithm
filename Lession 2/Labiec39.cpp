
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

void drawV(){
	
	int width = H * 2 ;
	
	for(int i=0;i<H;i++){
		if(i==0){
			doPrintCharacter('*',1);
			for(int j=0;j<N;j++){
				int a = N/2;
				doPrintCharacter(' ',width-3);
				doPrintCharacter('*',1);
			}
		 	printf("\n");
		}else if(i == H-1){
			for(int j=0;j<N;j++){
				doPrintCharacter(' ',i);
				doPrintCharacter('*',1);
				doPrintCharacter(' ',i-1);
			}
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
 	
 	drawV();
 	
	getch();
	return 0;
}

