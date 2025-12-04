#include <iostream>
using namespace std;
int main()
{
	
	int num1=50;
	int num2=0;
	
	
cout<<"WELCOME TO THE GUESSING GAME...........";
  




		
	while(num1 != num2)
	{	       
	    cout<<"Enter any number : ";        
		cin>>num2;
		
		if (num2 == num1)                 
		{
		     cout<<"congraturation You guessed the number correct"<<endl;
             cout<<"Your number was : "<<num2<<endl;
		}
		
		else if(num2 > num1+5)
		{
			cout<<"Too high"<<endl;
		}
                    else if(num2 < num1 - 5)
		{
			cout<<"Too low"<<endl;
		}
		else if (num2 <= num1+5 && num2 >= num1-5)
		{
			cout<<" TOO CLOSE BUDDY!!!!"<<endl;
		}
		else 
		{
			cout
			<<"Wrong "<<endl;
		
		}


}
}