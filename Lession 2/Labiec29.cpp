
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

int H, x;

void doPrint(char character,int frequence){
	for( int i=0;i<frequence;i++ )
	{
		printf("%c",character);
	}
}

void drawTriangle(){
	int width = 2*H - 1;
	
	int number = 1;
	
	for( int i=0;i<H;i++ )
	{
		char n = (char) number + 48;
		
		doPrint(' ',i);
		doPrint(n,width - 2*i );
		printf("\n");
		number +=x;
	}
}

int main()
{
 	
 	scanf("%d %d",&H,&x);
 	
 	drawTriangle();
 	
	getch();
	return 0;
}

