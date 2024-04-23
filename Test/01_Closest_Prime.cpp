#include<iostream>
using namespace std;

bool check_prime(int n){
	if(n == 1 || n == 0){
		return false;
	}
	for(int i=2;i<n/2;i++){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int less,more,n;
	cin >> n ;
	if(check_prime(n)){
		cout << "0" ;
	}else{
		more = n+1 ;
		less = n-1 ;
		while(1){

			if(check_prime(more)== true){
				cout << more-n ;
				break;
			}
			if(check_prime(less) == true){
				cout << n-less;
				break;
			}
			less--;
			more++;
			}
		}
	}
