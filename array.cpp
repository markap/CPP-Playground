#include <iostream>

using namespace std;

int main() {

    int testScore[30];

    testScore[0] = 1;
    testScore[1] = 2;
    testScore[2] = 1;

    for (int i = 0; i < 3; i++) {
        cout << testScore[i] << endl;
    }


    struct Rectangle
    {
        int length;
        int width;
    };

    Rectangle rectArray[3];
    Rectangle rect;
    rect.length = 3;
    rect.width = 2;

    rectArray[0] = rect;
    rectArray[1].length = 5;
    rectArray[1].width = 6;

    for (int i = 0; i < 2; i++) {
        cout << "rect is " << rectArray[i].length * rectArray[i].width << endl;
    }

    int directInit[3] = {3, 2, 5};

    cout << directInit[0] << endl;
    cout << directInit[1] << endl;
    cout << directInit[2] << endl;

    int directInit2[] = {1, 6, 89, 12, 34};
    for (int i = 0; i < sizeof(directInit2) / sizeof(directInit2[0]); i++) {

        cout << "size of loop " << directInit2[i] << endl;
    }

    enum Names
    {
        MARTIN,
        SARAH,
        CHRIS,
        ALEX
    };

    int score[4];
    score[MARTIN] = 2;

    double temp[365] = {};

    enum Animals
    {
        CHICKEN,
        DOG,
        CAT,
        ELEPHANT,
        DUCK,
        SNAKE,
        MAX_ANIMALS
    };

    int legs[MAX_ANIMALS] = {2,4,4,4,2,0};

    const int numStudents = 5;
    int anScores[numStudents] = {88, 55, 99, 63, 76};

    int totalScore = 0;
    for (int i = 0; i < numStudents; i++) {
        totalScore += anScores[i];
    }

    double averageScore = static_cast<double>(totalScore) / numStudents;

    cout << "Average is " << averageScore << endl;

    int maxScore = 0;
    for (int i = 0; i < numStudents; i++) {
        if (maxScore < anScores[i]) {
            maxScore = anScores[i];
        }
    }

    cout << "The best score was " << maxScore << endl;

}
