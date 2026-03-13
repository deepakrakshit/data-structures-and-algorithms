#include <iostream>
using namespace std;

/*
TOPIC: Time Complexity with Multiple Inputs

Sometimes algorithms have TWO inputs.

Example:
n = number of students
m = number of subjects

Complexity depends on both.

So instead of O(n), we write:
O(n + m) or O(n * m)

This is very common in real programs.
*/


// Example 1
// Two independent loops

void printStudentsAndSubjects(int students, int subjects)
{
    // First loop runs students times
    for(int i = 0; i < students; i++)
    {
        cout << "Student " << i << endl;
    }

    // Second loop runs subjects times
    for(int j = 0; j < subjects; j++)
    {
        cout << "Subject " << j << endl;
    }

    /*
    Total operations:

    students + subjects

    Time Complexity = O(n + m)
    */
}



// Example 2
// Nested loops with different inputs

void printTable(int students, int subjects)
{
    for(int i = 0; i < students; i++)
    {
        for(int j = 0; j < subjects; j++)
        {
            cout << "Student " << i << " Subject " << j << endl;
        }
    }

    /*
    Outer loop = students

    Inner loop = subjects

    Total operations:

    students * subjects

    Time Complexity = O(n * m)
    */
}



int main()
{
    int students = 3;
    int subjects = 2;

    cout << "Example 1:\n";
    printStudentsAndSubjects(students, subjects);

    cout << "\nExample 2:\n";
    printTable(students, subjects);

    return 0;
}