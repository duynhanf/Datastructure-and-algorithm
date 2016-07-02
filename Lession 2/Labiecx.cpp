
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

void doPrint(char character,int frequence){
	for(int i=0;i<frequence;i++){
		printf("%c",character);
	}
}

void drawTop(int height,int i){
	int widthSpace = height - 2 * (i+1);
	doPrint('*',i+1);
	doPrint(' ',widthSpace);
	doPrint('*',i+1);
}

void drawBottom(int height,int i){
	int widthSpace =  2*i - height;
	
	doPrint('*',height - i);
	doPrint(' ',widthSpace);
	doPrint('*',height - i);
}


void drawButterfly(int height){
	for(int i=0;i<height;i++){
		
		if( i < height / 2 )
			drawTop(height,i);
		else if( i == height/2 )
			doPrint('*',height);
		else 
			drawBottom(height,i);
		
		printf("\n");
	}
}


int main()
{
 	int height;
 	scanf("%d",&height);
 	
 	drawButterfly(height);
 	
	getch();
	return 0;
}

