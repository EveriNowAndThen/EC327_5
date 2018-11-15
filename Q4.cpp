// Q4 Hw5 - Vectors ear much easier
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <vector> // Is this a thing? Who knows. I probably do. 
#include<bits/stdc++.h> 



using namespace std;

int findMine(vector<string> myVec, string myString);

int main(){
	vector<string> deckOCards (53);
	vector<string> suits (4);
	suits[0] = "Clubs-"; // Make suits
	suits[1]= "Diamonds-";
	suits[2] = "Hearts-";
	suits[3] = "Spades-";
	vector<string> value (13);
	int count = 1;
	char buffer [2];
	string tempStr;
	for(int i = 0; i < 13; i++){ // make values
		if(i < 10){
			sprintf(buffer, "%d", (i + 1));
			value[i] = buffer;
		}
		else if(i == 10)
			value[i] = "J";
		else if(i == 11)
			value[i] = "Q";
		else if(i == 12)
			value[i] = "K";
	}
	for(int i = 0; i < 4; i++){ // Make deck
		for(int j = 0; j < 13; j++){
			tempStr = (suits[i] + value[j]);
			deckOCards[count] = tempStr;
			count++;
		}
	} 	// Up to here is the program setup, where we load the vector, I would have
		// prefered to have the text file hold that info, and we can read that, but
		// the problem definition didn't seem to allow for it. So, we're here. 
	// This next bit is the user interaction part
	vector<string> cardsDrawn;
	vector<int> removedFrom;
	string cardName;
	int twoKind = 0;
	//int delInd;
	count = 0;
	cout<<"Please choose a card to pull from the deck: \n";
	while(1){	// Loop for drawing cards
		cin>> cardName;
		count++;
		cout<<"You have drawn "<< count << " cards"<<endl;
		cardsDrawn.push_back(cardName); // Add new card
		removedFrom.push_back(findMine(deckOCards, cardName));
		
		for(int i = 0; i < cardsDrawn.size() -1; i++){
			if(cardsDrawn[i][-1] == cardsDrawn[cardsDrawn.size()][-1]){ // If the last char is the same, you have two pair
				cout<<"You have drawn a pair!\n";
				break;			
			}
			if(cardsDrawn[i][1] == cardsDrawn[cardsDrawn.size()][1]){ // if you have Two matching, you have two of a kind
				if(twoKind == 1){ // First time ran, only two kind, don't wanna quit
					cout<<"You have drawn three of a kind!\n";
					break;
				}
				twoKind = 1;	// Next time you reach yes condition, You already have two kind, now you have three
		
			}
		}
	}
	// This next bit to be replaced by ofstream operation once the previous bit works
	int notIn = 1;
	for(int i = 0; i < deckOCards.size(); i++){

	}


	return 0;
}

int findMine(vector<string> myVec, string myString){
	int size = myVec.size();
	int index = 0;
	for(int i = 0; i < size; i++){
		if(myVec[i] == myString)
			return i;		
		else{
			cout<<"ERROR\n";
			return 0;
		}	
	}
}



