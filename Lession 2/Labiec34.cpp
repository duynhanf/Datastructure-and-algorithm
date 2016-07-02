
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

int H,W,D;

void doPrint(char character,int frequence){
	for(int i=0;i<frequence;i++){
		printf("%c",character);
	}
}

// ve 2 diem
void drawTwoPoint(int frequence){
	doPrint('*',1);
	doPrint(' ',W-2);
	doPrint('*',1);
}


// ve thanh ngang
void drawMid(int frequence){
	doPrint('*',W);
}


void solve(){
	for( int i=0;i<H;i++ ){
		 if( (i-1)%D == 0 ){
			drawMid(1);
			printf("\n");
		}else{
			drawTwoPoint(1);
			printf("\n");
		}
		
		
		
		
		
	}
}

int main()
{
	scanf("%d %d %d", &H, &W, &D);

	solve();

	getch();
	return 0;
}

