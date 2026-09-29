#include <iostream>
#include <string>

using namespace std;

int main(){
	
	//while loop - Repeats the specified condition as long that It is true.
		//Print Numbers: 
		
		/*int i = 0;
		
		while(i < 6){
			cout << i << endl;
			i++;
		}*/
		
		//Exercise 1 - Create a program that asks the user for a number and prints from 1 up to that number.
			/*int i = 1;
			int number;
			
			cout << "Enter NUMBER: ";
			cin >> number;
			
			while(i <= number){
				cout << i << endl;
				i++;	
			}*/
				
	//do-while loop - Will execute a block of code once before checking if the condition is true.
		//Print Numbers:
		
		/*int j = 0;
			do{
				cout << j << endl;
				j++;
			} while(j < 6);*/
			
		//Exercise 2 — Create a simple program that asks the user to enter a number.
			/*int number = 10;
			int num_input;
			string wrong = "WRONG! - TRY AGAIN!\n====================\n";
				
			do{
				cout << "ENTER THE NUMBER: ";
				cin >> num_input;
				
			} while(num_input != number && cout << wrong);
				
			cout << "\n\nYOU ENTERED NUMBER 10! - CORRECT!";*/
			
	/*Exercise 3 -  Make a simple menu program:
		===== MENU =====
		1. Say Hello
		2. Say Goodbye
		3. Exit
			CHOOSE: */
			
	
	
	char choice;
	
		do{
			cout << "\n===== MENU =====\n";
			cout << "1. Say Hello\n";
			cout << "2. Say Goodbye\n";
			cout << "3. Exit\n";
			cout << "	CHOOSE: ";
			cin >> choice;
			
			switch(choice){
				case '1':
					cout << "Hello!";
					break;
				case '2':
					cout << "Goodbye.";
					break;
			}
		} while(choice != '3');
	
	cout << "\n===== MENU =====\n";
	cout << "...\nProgram Ended";
	
	return 0;
}
