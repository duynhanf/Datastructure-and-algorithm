
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

void drawTriangle(){
	int width = 2*H - 1;
	
	for( int i=0;i<H;i++ )
	{
		doPrint(' ',i);
		doPrint('*',width - 2*i );
		printf("\n");
	}
}

int main()
{
 	
 	scanf("%d",&H);
 	
 	drawTriangle();
 	
	getch();
	return 0;
}

