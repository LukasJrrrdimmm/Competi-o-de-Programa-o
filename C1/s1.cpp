#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	for(int i = 0; i < a; i++){
		int b1, b2;
		cin >> b1;
		cin >> b2;
		int dif = b1 - b2;
		if(dif < 0) dif = dif*(-1);
		int count = 0;
		for(int j = 10; j > 0 || dif != 0; j--){
			count += dif/j;
			//printf("%d\n", count);
			//cout<<dif<<" + "<< (dif/i) << endl;
			dif -= j*(dif/j);
		}
		//sleep(1);
		cout<<count<<endl;
	}
	return 0;
}
