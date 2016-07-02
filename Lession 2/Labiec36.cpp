
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

void doPrintCharacter(char character,int frequence){
	for(int i=0;i<frequence;i++){
		printf("%c",character);
	}
}

void drawZ(int N,int W){
	
	int j=1;
	int number = 0;
	for(int i=0;i<N*W-1;i++){
		
		// number = 10 -> 0
		if(number>9){
			number = 0;
		}
		
		
	     if( i%(W-1) == 0 ){
		 	 doPrintCharacter('*',W);
		 	 
		 	 number += W;
		 	 j=1;
		}else{
			doPrintCharacter(' ',W-j-1);
			doPrintCharacter('*',1);
			number++;
			
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
	freopen("Labiec36.inp","r",stdin);
 	freopen("labiec36.out","w",stdout);
 	scanf("%d %d",&N,&W);
 	
 	solve();
 	
	getch();
	return 0;
}

