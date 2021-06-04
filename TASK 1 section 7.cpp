#include <iostream>
using namespace std;

int main()

{
    int students;

    cout << "Enter the number of students: ";
    cin >> students;

    if(students <= 0) return 1;

    int *studentSCORES = new int[students]; // dynamic memory allocation of int
    char *grade = new char[students];		// the same for char

    cout << "Enter " << students << " scores: \n";
    for (int i = 0; i < students; i++)
    {

        cin >> studentSCORES[i];
    }

    double max = studentSCORES[0];
    for (int j = 0; j < students; j++)
        if (studentSCORES[j] > max) max = studentSCORES[j];

    for (int k = 0; k < students; k++)
    {
        if (studentSCORES[k] >= max - 10)
            grade[k] = 'A';

        else if (studentSCORES[k] >= max - 20)
            grade[k] = 'B';

        else if (studentSCORES[k] >= max - 30)
            grade[k] = 'C';

        else if (studentSCORES[k] >= max - 40)
            grade[k] = 'D';

        else grade[k] = 'F';
    }
        cout << '\n';
        for (int i = 0; i < students; i++)
            cout << "Student " << i << " score is " <<
            studentSCORES[i] << " and grade is " << grade[i] << ".\n";

    delete[] studentSCORES;	// release memory allocation
    delete[] grade;
    return 0;
}
