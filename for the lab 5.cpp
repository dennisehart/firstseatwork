
// create a while loop that will multiply the first and second integera
#include <iostream>
using namespace std;
int main()
{

int num1,num2,sum=0; 

 cout<<"Enter the first integer: "<<endl; 
 cin>>num1;
 cout<<"Enter the second integer: "<<endl;
 cin>>num2; 
 
	while (num2>0) {
		sum=sum+num1 ; 
		num2--;
		 }
	    
 cout<<sum;

return 0;

}


