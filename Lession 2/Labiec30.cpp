
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

int H;

void doPrint(char character,int frequence){
	for( int i=0;i<frequence;i++ )
	{
		printf("%c",character);
	}
}

void drawX(){
	for(int i=0;i<H;i++){
		
		if( i== H/2 ){
			//calculator
			int spaceLeft = i;
			int spaceRight = spaceLeft;
			
			doPrint(' ',spaceLeft);
			doPrint('*',1);
			doPrint(' ',spaceRight);
			printf("\n");
			continue;
		}
		
		if( i>H/2 ){
			//calculator
			int spaceLeft = H - i - 1;
			int spaceRight = spaceLeft;
			int spaceMid = H - spaceLeft - spaceRight - 2;
			
			doPrint(' ',spaceLeft);
			doPrint('*',1);
			doPrint(' ', spaceMid);
			doPrint('*',1);
			doPrint(' ',spaceRight);
			printf("\n");
			continue;
		}
		
		//calculator
		int spaceLeft = i;
		int spaceRight = spaceLeft;
		int spaceMid = H - spaceLeft - spaceRight - 2;
		
		doPrint(' ',spaceLeft);
		doPrint('*',1);
		doPrint(' ', spaceMid);
		doPrint('*',1);
		doPrint(' ',spaceRight);
		printf("\n");
	}
}

int main()
{
	scanf("%d",&H);
	
	drawX();
	
	getch();
	return 0;
}

