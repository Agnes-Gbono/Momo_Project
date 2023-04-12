#include<iostream>
#include<string>
using namespace std;

int main(){
	int pin=0000; // Default pin
	int balance=1000; // Default balance
	int attempts=0; // Counting failed attempts
	
	// Authentication
	int input_pin;
	do{
	cout<<"Enter your PIN:";
	cin>> input_pin;
	attempts++;
	if(input_pin != pin && attempts == 3){
		cout<<"Maximum attempts reached. Exiting program..."<<endl;
		return 0;
	}
	}
	while(input_pin != pin);
	
	//Resetting/changing PIN
	int new_pin;
	char change_pin;
	cout<<"Do you want to change your PIN? (Y/N)"<<endl;
	cin>> change_pin;
	if(change_pin =='Y' || change_pin == 'y'){
		cout<< "Enter your new PIN:"<<endl;
		cin>> new_pin;
		pin= new_pin;
		cout<<"PIN changed successfully."<<endl;
	}
	
	//Checking balance
	int amount;
	cout<<"Enter the amount you want to send:"<<endl;
	cin>> amount;
	if(amount <= balance){
		balance=amount;
		cout<< "Transaction successful. Your new balance is:"<< balance << endl;
	}else{
		cout<<"Insufficient balance. Transactin failed"<<endl;
	}
	
	// Existing program
	char exit_program;
	cout<<"Do you want to exit the program? (Y/N):"<<endl;
	cin>> exit_program;
	if(exit_program == 'Y' || exit_program == 'y'){
		cout<<"Exiting program... "<<endl;
		return 0;
	}
	
	return 0;
}