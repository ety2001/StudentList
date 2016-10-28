/* Elaine Yang
 * 10/28/16
 * Program that stores students, their IDs, and their GPAs
 */

// Imports
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>

using namespace std;

// Stores values for the students
struct Student{
        char first [20];
	char last [20];
	int id;
	float gpa;
};

// Declaration of functions
void addentry(vector<Student*> *list);
void deleteentry(vector<Student*> *list);
void printentries(vector<Student*> *list);

// Main code that takes in inputs and executes them
int main(){
	bool run = true;
	vector<Student*> *list = new vector<Student*>(); 
	// While user still wants to run
	while(run == true){
		// Asks for and takes in command
		cout << "What is your command? Enter ADD DELETE PRINT or QUIT" << endl;
		char input [6];
		for (int i = 0; i < 3; i++){
			input[i] = ' ';
		}
		cin >> input;
		
		if (!strcmp(input, "ADD")){
			addentry(list);	
		}
		else if (!strcmp(input, "DELETE")){
			deleteentry(list);
		}
		else if (!strcmp(input, "PRINT")){
			printentries(list);
		}
		else if (!strcmp(input, "QUIT")){
			run = false;
		}
		else{
			cout << "Please enter a valid command." << endl;
		}
	}
}

// Function to add a student, creates a new student and prompts for info
void addentry(vector<Student*> *list){
	Student* student = new Student();
	cout << "Enter first name" << endl;
	cin >> student->first;
	cout << "Enter last name" << endl;
	cin >> student->last;
	cout << "Enter ID" << endl;
	cin >> student->id;
	cout << "Enter GPA" << endl;
	cin >> student->gpa;
	list->push_back(student);
}

// Function to delete a student
void deleteentry(vector<Student*> *list){
	int iddelete;
	bool deleted = false;
	// If there are no students
	if (list->size() == 0){
		cout << "No students to delete." << endl;
	}
	// If there are students
	else{
		cout << "Enter ID of student you want to delete" << endl;
		cin >> iddelete;
		for(int i = 0; i < list->size(); i++){
			if(list->at(i)->id == iddelete){
				list->erase(list->begin()+i);
				cout << "Student " << iddelete << " deleted." << endl;
				deleted = true;
			}
		}
		if (deleted == false){
			cout << "Student " << iddelete << " does not exist." << endl;
		}
	}
}

// Method to print students
void printentries(vector<Student*> *list){
	if(list->size() == 0){
		cout << "No students entered." << endl;
	}
	else{
		for(int i = 0; i < list->size(); i++){
		cout << list->at(i)->first << " " << list->at(i)->last << ", " << list->at(i)->id << ", " << list->at(i)->gpa << endl;
		}
	}
}
