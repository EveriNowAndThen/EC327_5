// Q4 Hw5 - Vectors ear much easier
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector> // Is this a thing? Who knows. I probably do. 

using namespace std;

int main(){
	vector<string> deckOCards (53);
	vector<string> suits (4);
	suits[0] = "Clubs-";
	suits[1]= "Diamonds-";
	suits[2] = "Hearts-";
	suits[3] = "Spades-";
	for(int i = 0; i< 4; i++){cout<<suits[i]<<endl;}
	vector<string> value (13);
	int count = 1;
	char buffer [2];
	string tempStr;
	for(int i = 0; i < 13; i++){
		if(i < 10){
			sprintf(buffer, "%d", (i + 1));
			value[i] = buffer;
		}
		else if(i == 10)
			value[i] = "J";
		else if(i == 11)
			value[i] = "Q";
		else if(i == 1)
			value[i] = "K";
		cout<<value[i]<<endl;
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 13; j++){
			tempStr = (suits[i] + value[j]);
			deckOCards[count] = tempStr;
			count++;
		}
	}
	for(int i = 0; i <53; i++){
		cout<<deckOCards[i]<<endl;
	}
	return 0;
}