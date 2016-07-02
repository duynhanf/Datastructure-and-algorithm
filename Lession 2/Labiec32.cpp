
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

void drawX(int height){
	for(int i=0;i<height;i++){
		for(int j=0;j<height;j++){
			
			if( i==j || i+j==height-1 ){
				char character = height-i+48; // doi sang char
				doPrint(character,1);
				continue;
			}
			doPrint(' ',1);
			
			
		}
		printf("\n");
	}
}


int main()
{
 	int height;
 	scanf("%d",&height);
 	
 	drawX(height);
 	
	getch();
	return 0;
}

