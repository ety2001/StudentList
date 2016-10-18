#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

void addentry(vector<Student*> *list);
void deleteentry(vector<Student*> *list);
void printentries(vector<Student*> *list);

struct student{
        char first [20];
	char last [20];
	int id;
	float gpa;
	for (int i = 0; i < 20; i++){{
		firstname[i] = ' ';
		lastname[i] = ' ';
	}
};


int main(){
	bool run;
	vector<Student*> *list = new vector<Student*>(80); 
	
	while(run == true){
		cout << "What is your command?" << endl;
		char input [6];
		for (int i = 0; i < 3; i++){
			input[i] = ' ';
		}
		cin >> input;
		
		if (strcmp(input, "ADD   ") == true){
			addentry(list);	
		}
		else if (strcmp(input, "DELETE") == true){
			deleteentry(list);
		}
		else if (strcmp(input, "PRINT ") == true){
			listentries(list);
		}
		else if (strcmp(input, "QUIT  ") == true){
			//euiserhglrgsergusedfrj
		}
		else{
			cout << "Please enter a valid command." << endl;
		}
	}
}

void addentry(vector<Student*> *list){
	Student student;
	cout << "Enter first name" << endl;
	cin >> student.first;
	cout << "Enter last name" << endl;
	cin >> student.last;
	cout << "Enter ID" << endl;
	cin >> student.id;
	cout << "Enter GPA" << endll
	cin >> student.gpa;
	list.push_back(student);
}

void deleteentry(vector<Student*> *list){
	int iddelete;
	cout << "Enter ID of student you want to delete" << endl;
	cin >> iddelete;
}

void printentries(vector<Student*> *list){
	cout << student.first << " " << student.last << ", " << student.id << ", " << student.gpa << endl;
}
