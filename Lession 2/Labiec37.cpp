
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

int N,W;

void doPrint(char character,int frequence){
	
	for( int i=0;i<frequence;i++ ){
		printf("%c",character);
	}
	
}

void drawDiaMond(){
	
	for( int i=1;i<W;i++ ){
		
		// nua tren
		if( i<=W/2 ){
			
			int spaceLeft = W/2-i;
			int spaceRight = W/2-i;
			int spaceMid = W  - spaceLeft - spaceRight - 2; // 2 dau * o canh
			
			doPrint(' ',spaceLeft ); 
		 	doPrint('*',1);
		 	doPrint(' ', spaceMid);
		 	doPrint('*',1);
		 	printf("\n");	
		 	continue;
		}
		
		
		// dinh duoi
		if(i==W-1){
			
			int spaceLeft = i-W/2;
			int spaceRight = i-W/2;
			//int spaceMid  khong ton tai
			
			doPrint(' ',spaceLeft );
		 	doPrint('*',1);
		 	doPrint(' ', spaceRight);
		 	printf("\n");
		 	continue;
		}
		
		// nua duoi
		
		int spaceLeft = i-W/2;
		int spaceRight = i-W/2;
		int spaceMid = W  - spaceLeft - spaceRight - 2; // 2 dau * o canh
		
		 doPrint(' ',spaceLeft );
		 doPrint('*',1);
		 doPrint(' ', spaceMid);
		 doPrint('*',1);
		 printf("\n");	
		 
	}
	
}

void drawDiamonds(){
	
	// in dinh dau tien
	doPrint(' ',W/2); 
 	doPrint('*',1);
 	printf("\n");
	
	for(int i=0;i<N;i++){
		
		// in N phan hinh thoi (khong bao gom dinh tren)
		drawDiaMond();
	}
	
}



int main()
{
 	scanf("%d %d",&N,&W);
 	
	drawDiamonds();
	
	getch();
	return 0;
}

