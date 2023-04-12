#include <iostream>
using namespace std;

int main(){
	const int defaultpin = 0000;
	int attempts = 0;
	int select,pin,o_pin,new_pin,number;
	string  reference,digits,code;
	char option,Y,N;
	float amount,balance;
	balance=1000;
    
    do{
    	cout<<"Enter Code"<<endl;
    	cin>>code;
    	cout<<"Welcme To MTN Mobile Money.Please Enter MM PIN"<<endl;
    	
    	cin>>pin;
    	attempts++;
    	if(pin !=defaultpin){
    		cout<<"Incorrect PIN.Please try again"<<endl;
    		if(attempts==3){
    			cout<<"Maximum attempts reached.";
    			cout<<"Exit Program"<<endl;
    			return 0;
			}
		}
	}
	while(pin !=defaultpin && attempts <3);


cout<<"Main Menu"<<endl;

cout<<"1.Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Transfer Money "<<endl;
cout<<"4.Exit"<<endl;

cin>>select;
if(select==1)
{
	do{
		cout<<"Fee is GHS 0.00  .Enter MM PIN: "<<endl;
		cin>> pin;
		
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin== defaultpin){
			cout<<"Current Balance:GHS"<<balance<<".00"<<",Available Balance:GHS"<<balance<<".00"<<endl;	
		}
	} while (pin != defaultpin && attempts <3);
	if(attempts>3){
		cout<<"Maximum attempts reached."; 
		cout<<"Exiting Program"<<endl;
	}
	
}


else if(select==2)
{
	    cout<<"Are You Sure You Want To Change Your Pin?"<<endl;
	    cout<<"Chose Y/N"<<endl;
	    cin>>option;
	    if(option=='Y'){
	    	cout<<"Enter Old Pin"<<endl;
	    	cin>>o_pin;
	    	if(o_pin!=defaultpin){
	    		cout<<"Incorrect Pin"<<endl;
			}
			else if(o_pin==defaultpin)
			{
				cout<<"Enter New Pin"<<endl;
				cin>>new_pin;
				pin==new_pin;
				cout<<"New Pin Is "<<new_pin<<endl;
				
			}
			else
			{
				cout<<"Pin change is cancelled!!";
				
			}
	    	
		}
		
	}

else if(select==3)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
	
	cout<<"Enter Reference "<<endl;
	cin>> reference;
	
	cout<<"Transfer GHS"<<amount<<" to 0"<<number<<endl;
	
	cout<<"Please enter your PIN: "<<endl;
	cin>> pin;
	
	do{
		attempts++;
		if (amount>balance){
			cout<<"Insufficient balance"<<endl;
		}
		else if(pin!=defaultpin){
		
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin== defaultpin && amount<=balance){
			cout<<"You have successfully transfer GHS"<<amount<<" to 0" <<number << " with reference " << reference <<endl;
			
			cout<<"Your current balance is  GHS"<<balance-amount<<"."<<endl;
			
			cout<<"Thank you for using Mobile Money."<<endl;	
			
			
		}
	}
	 while (pin != defaultpin && attempts >3);
	if(attempts>3){
		cout<<"Maximum attempts reached."; 
		cout<<"Exiting Program"<<endl;
	}
}
 else if(select==4){
 	cout<<"Cancelled!!"<<endl;
	cout<<"Thank you for using Mobile Money."<<endl;
	
	switch(attempts){
		break;
	}
}
        
		return 0;
}
