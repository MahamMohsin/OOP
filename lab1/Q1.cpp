#include <iostream>
using namespace std;
//prime number identification
int main(){
	int n;
	cout<<"Enter any number: ";
	cin>>n;
	
	int ctr=0;
	int i;
	
	for(i=1;i<=n;i++){
		if (n % i == 0){
			ctr++;
		} 
		
	}
	if (ctr == 2) //since count is equal to 2 so prime numbers have only two factors 1 and the number itself
    {
        cout << "number is a prime number";
    }
    else {
        cout << "number is not a prime number";
    }
	
}

