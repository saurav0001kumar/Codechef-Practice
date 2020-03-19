#include <iostream>
using namespace std;

int main(void) {
	int X;
	double Y;

	cin>>X>>Y;
	    if(X%5==0 && X<=Y-0.50)
	    cout<<Y-X-0.50;
	    else
	    cout<<Y;
	
	return 0;
}