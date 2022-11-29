// Copyright(c) 2022 Patrice Pat - Odita All rights reserved
//
// Created By: Patrice Pat-odita
// Date: Nov 28, 2022
// this program uses a switch case function to determine the middle percentage
// grade level.this program asks user to input a grade level
// and returns associated middle percentage.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

string calcGrade(string grade) {
    string percent;
    if (grade == "4++") {
        percent = "110%";
    } else if (grade == "4+") {
        percent = "98%";
    } else if (grade == "4") {
        percent = "90%";
    } else if (grade == "4-") {
        percent = "83%";
    } else if (grade == "3+") {
        percent = "78%";
    } else if (grade == "3") {
        percent = "75%";
    } else if (grade == "3-") {
        percent = "71%";
    } else if (grade == "2+") {
        percent = "68%";
    } else if (grade == "2") {
        percent = "65%";
    } else if (grade == "2-") {
        percent = "61%";
    } else if (grade == "1+") {
        percent = "58%";
    } else if (grade == "1") {
        percent = "55%";
    } else if (grade == "1-") {
        percent = "51%";
    } else if (grade == "R") {
        percent = "Percent is less than 50%";
    } else {
        percent = "invalid";
    }
    return percent;
}

int main() {
    string grade;
    cout << "Enter grade level: ";
    cin >> grade;

    string calculatedGrade = calcGrade(grade);

    if (calculatedGrade == "level inputted was invalid") {
        cout << calculatedGrade;
    } else {
        cout << "The middle percent of " << grade << " is "
            << calculatedGrade << ".";
    }
}
