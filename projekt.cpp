#include <iostream>
using namespace std;
int czy_pierwsza(int n){
	for (int i=2; i<n;i++){
		if (n%i==0){
			return 0;}
	
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	cout<<n<<endl;
	if (czy_pierwsza(n)==1){
		cout<<"Pierwsza"<<endl;
	}
	else{
		cout<<"Niepierwsza"<<endl;	
	}
	return 0;}
