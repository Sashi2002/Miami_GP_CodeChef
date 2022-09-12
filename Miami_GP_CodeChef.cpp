#include <iostream>
using namespace std;

int main() {
	
	int test, x, y;
	cin>>test;
	while(test--){
	    cin>>x>>y;
	    if((x*107) /100 >=y) 
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}