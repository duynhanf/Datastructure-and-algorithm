
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
int ntest;
int nnumber;
int s[100];
void input(){
	scanf("%d",&nnumber);
	for( int i = 0;i<nnumber;i++){
		scanf("%d",&s[i]);
	}
}

void solve(){
	if( nnumber < 2 ){
		printf("1");
		return;
	}
	for(int i=0;i<nnumber-1;i++){
		if( s[i]*s[i+1] >= 0 ){
			printf("0");
			return;
		}
	}
	printf("1");
}

int main()
{
 	
 	freopen("Labiec26.inp","r",stdin);
 	scanf("%d",&ntest);
 	
 	for( int itest = 0;itest<ntest;itest++){
 		input();
 		solve();
 		printf("\n");
 	}
 	
	getch();
	return 0;
}

