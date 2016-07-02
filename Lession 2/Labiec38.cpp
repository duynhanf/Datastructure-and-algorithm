
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

int doPrint(int startnumber,int frequence){
	for(int i=0;i<frequence;i++){
		
		if(startnumber>9){
			startnumber = 0;
		}
		
		printf("%d",startnumber);
		startnumber++;
	}
	return startnumber;
}

void doPrintCharacter(char character,int frequence){
	for(int i=0;i<frequence;i++){
		printf("%c",character);
	}
}

void drawZ(int N,int W){
	
	int j=1;
	int number = 0;
	for(int i=0;i<N*W-1;i++){
		
	     if( i%(W-1) == 0 ){
		 	 number =  doPrint(number,W);
		 	 j=1;
		}else{
			doPrintCharacter(' ',W-j-1);
			number = doPrint(number,1);
			j++;
		}
		printf("\n");
	}
	
}

void solve(){
	drawZ(N,W);
}

int main()
{
 	
 	scanf("%d %d",&N,&W);
 	
 	solve();
 	
	getch();
	return 0;
}

