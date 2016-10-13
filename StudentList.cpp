#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

struct student{
        char firstname [20];
	char lastname [20];
	int id;
	float gpa;
};


int main(){
	char stuname[20];

	cout << "What is your command?" << endl;
	char input [6];
	for (int i = 0; i < 3; i++){
		input[i] = ' ';
	}
	cin >> input;
	
	if (strcmp(input, "ADD") == true){
		cout << "Name?" << endl;
		cin.getline(stuname, sizeof(stuname));
		int size = strlen(stuname);
		
	}
	if (strcmp(input, "DELETE") == true){

	}
	if (strcmp(input, "LIST") == true){

	}

	cout << "me + me = ?" << endl;
	cout << "it is meme!" << endl;
}

