#include <iostream>
using namespace std;
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
	if (czy_dodatnia(n)==1){
		cout<<"dodatnia"<<endl;}
	else{
		cout<<"niedodatnia"<<endl;}
	return 0;}
