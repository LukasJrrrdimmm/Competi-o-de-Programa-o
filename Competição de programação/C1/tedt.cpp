#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	int b1 = 0;
	int b2 = 0;
	int c = 0;
	int j = 0;
	for(int i = 0; i < a; i++){
		int aux = 0;
		cin >> aux;
		//cout<<aux<<endl;
		if(aux == 0){
			j = c*(int)(c > j);
			c = 0;
			//cout<<"A"<<j<<endl;
		}else{
			if(i == 0){
				//cout<<"EX"<<(aux != 0)<<endl;
				while(aux != 0){
					b1 += aux;
					i++;
					if(i != a) cin >> aux;
				}
			}else c += aux;
			//printf("B %d, %d, %d\n", b1, c, j);
		}
	}
	b2 = c + b1;
	if(b2 > j) cout << b2 << endl;
	else cout << j << endl;
	return 0;
}
