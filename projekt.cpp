#include <iostream>
using namespace std;
int is_prime(int n){
	for (int i=2; i<(n/2)+1; i++){
		if (n%i==0){
			return 0;
		}
	
	}
	return 1;
}

int main(){
	int n;
	cin>>n;
	cout<<n<<endl;
	if (is_prime(n)==1){
		cout<<"prime number."<<endl;
	}
	else{
		cout<<"not prime number."<<endl;
	}
	return 0;}
