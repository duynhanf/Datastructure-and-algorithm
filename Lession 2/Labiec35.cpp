
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

// ve cac o hang rao
void drawPoint(){
	doPrint('*',1);
	for( int i=1;i<W/D+1;i++ ){
		
		if( i*D < W ){
			doPrint(' ',D-1);
			doPrint('*',1);
			continue;
		}
		doPrint(' ', W+2 - (i-1)*D );
		
	}
}


// ve thanh ngang duoi cung
void drawLast(){
	doPrint('*',W);
}


void solve(){
	for( int i=0;i<H;i++ ){
		 if( i == H-1 ){
			drawLast();
			printf("\n");
		}else{
			drawPoint();
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

