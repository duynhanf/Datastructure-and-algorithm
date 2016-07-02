
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
		printf("%d",s[0]);
		return;
	}
	
	int congsai = s[1] - s[0];
	for(int i=1;i<nnumber-1;i++){
		if( s[i+1] - s[i] != congsai ){
			printf("Khong phai cap so cong");
			return;
		}
	}
	printf("%d",congsai);
}

int main()
{
 	
 	freopen("Labiec25.inp","r",stdin);
 	
	 scanf("%d",&ntest);
 	
 	for( int itest = 0;itest<ntest;itest++){
 		input();
 		solve();
 		printf("\n");
 	}
 	
	getch();
	return 0;
}

