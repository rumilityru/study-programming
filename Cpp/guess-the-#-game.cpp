#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
	1. add features (token shop.)
	2. Fix the skip between "play-again" and "attempts-prizes"
*/


void lowercase(string &text){
	for(int i = 0; i < text.length(); i++){
		text[i] = tolower(text[i]);
	}
}

void indication(int guess, int rnum){
	
	if(guess > rnum){
		cout << "\n==========\nDecrease\n==========\n";
	}
	else if(guess < rnum){
		cout << "\n==========\nIncrease\n==========\n";
	}
	else{
		cout << "\n============\nCORRECT!\n============\n";
	}
}
 
 void func_attempts(int attempts){
 	cout << "  ATTEMPS: " << attempts;
	cout << "\n---------------------\n";
 }
 
int main(){
	
	cout << "===== GUESS THE NUMBER =====\n----------= game =----------\n\n";
	
	srand(time(NULL));
	
	//Variables:
	int guess;
	int attempts = 0;
	string choice;
	char again;
	
	do{
		
		string choice;

		while(choice.empty()){
		
			cout << "\n(easy[1], medium[2], hard[3])\n";
			cout << "\tEnter difficulty: ";
			getline(cin, choice);
			
			lowercase(choice);
		}	
		
		if(choice == "1" || choice == "easy"){
			int rnum = (rand() % 10) + 1;
			
			do{
				cout << "\nGUESS 1 - 10: ";
				cin >> guess;
				attempts++;
				
				indication(guess, rnum);
			} 
			while(guess != rnum);	
			
			func_attempts(attempts);
		} 
		else if(choice == "2" || choice == "medium"){
			int rnum = (rand() % 50) + 1;
			
			do{
				cout << "\nGUESS 1 - 50: ";
				cin >> guess;
				attempts++;
				
				indication(guess, rnum);
			} 
			while(guess != rnum);	
			
			func_attempts(attempts);
		} 
		else if(choice == "3" || choice == "hard"){
			int rnum = (rand() % 100) + 1;
			
			do{
				cout << "\nGUESS 1 - 100: ";
				cin >> guess;
				attempts++;
				
				indication(guess, rnum);
			}
			while(guess != rnum);	 
			
			func_attempts(attempts);
			
		} else{
			cout <<"---------------------";
			cout << "\nInvalid Input :<\n";
			cout <<"---------------------\n";
		}
		
		if(attempts <= 2){
			cout << "\nYou won GAMIN\' TICKETS [=]\n";
			cout << "+++++";
			break;
		}
		else if(attempts <= 5){
			cout << "\nYou won STICKER [o-o]\n";
			cout << "+++++";
			break;
		}
		else if(attempts <= 10){
			cout << "\nYou won CANDIES (+O)\n";
			cout << "+++++";
			break;
		}
		else{
			continue;
		}
		
		cout << "TYPE 'Y' TO PLAY AGAIN: ";
		cin >> again;
		
		cin.ignore(1000, '\n');
	}
	while(again == 'Y' || again == 'y');
	
	cout << "\n--- thanks for playing :3 ---\n";
	cout << "========= GOODBYE =========";
	
	
	return 0;
}
