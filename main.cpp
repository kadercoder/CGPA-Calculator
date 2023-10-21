#include <iostream>
using namespace std;

int main(){
    int numClasses;
    string letter;
    int credits;
    cout << "GPA Calculator" << endl;
    cout << "______________" << endl;
    cout << "Enter the number of classes:   ";
    cin >> numClasses;


    double grade = 0; //initialize grade and total credits.
    double totalcredits = 0;

    for(int i = 0; i < numClasses; i++){
            // take input letter and credits.
            cout << "Enter grade letter: ";
            cin >> letter;
            cout << "Enter number of credits: ";
            cin >> credits;
            cout << endl;

            //grading scale
            if (letter == "A") {
                grade += (4.0 * credits);
            } else if (letter == "B") {
                grade += (3.0 * credits);
            } else if (letter == "C") {
                grade += (2.0 * credits);
            } else if (letter == "D") {
                grade += (1.0 * credits);
            } else if (letter == "E") {
                grade += (0.0 * credits);
            }


            totalcredits += credits;
    }

    //GPA calculation
    double finalgrade = grade/totalcredits;

    cout << "GPA: " << finalgrade << endl;



}
