#include<iostream>
using namespace std;

char before(char x){
if(x<65||x>90){return 48;}
if((int)x>65){return (int)x-1;}
return 90;
}


int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
