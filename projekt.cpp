#include <iostream>
using namespace std;

int czy_pierwsza(int n){
	for (int i=2; i<n;i++){
		if (n%i==0){
			return 0;}
	
	}
	return 1;
}
int czy_dodatnia(int n){
	if (n>0){
		return 1;}
	else{
		return 0;}
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

	if (czy_dodatnia(n)==1){
		cout<<"dodatnia"<<endl;}
	else{
		cout<<"niedodatnia"<<endl;}
	return 0;}
