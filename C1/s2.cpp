#include <stdio.h>
#include <stdlib.h>
#include <iostrem>
using namespace std;

int main(){
	int r = 0;
	cin >> r;
	int fi = 0;
	int *v = {};
	int c = 0
	for(int i = 0; i < r; i++){
		cin>>i;
		if(i == 1) c += 1;
		else{
			if(c > fi) c = fi;
		}
	}
	cout << c << endl;
}
