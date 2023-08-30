#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
	while(n==0){
	    for(int i=1;i<=6;i++){
	        for(int j=1;j<=6;j++){
	            if(i+j>6){
	                cout<<"YES"<<endl;
	            }
	            else{
	                cout<<"NO"<<endl;
	            }
	        }
	    }
	    n--;
	}
	return 0;
}
