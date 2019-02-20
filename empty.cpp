#include <iostream>
#include <math.h>

using namespace std;

void power(int base, int power){
	cout<<pow((float)base,power)<<endl;
}
int main(){
	power(2,5);
	return 0;
}

