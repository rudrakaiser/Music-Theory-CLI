#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define endl "\n"
vector<string> chromatic = {"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
int n = chromatic.size();

bool findAgain (string str) {
    if (str == "y" || str == "Y" || str == "yes" || str == "YES" || str == "Yes") {
        return true;
    }
    return false;
}

int findIndex (string key) {
    transform(key.begin(), key.end(), key.begin(), ::toupper);
    for (int i = 0; i < n; i++) {
        if (chromatic[i] == key) {
            return i;
        }
    }
    return -1;
}

void title() {
    cout << "------------| MUSIC THEORY CLI |------------\n\n";
}

void mainMenu() {
    cout << "1. MAJOR SCALE" << endl;
    cout << "2. MINOR SCALE" << endl;
    cout << "3. MAJOR TRIADS" << endl;
    cout << "4. MINOR TRIADS" << endl;
    cout << "5. MAJOR CHORD FAMILY" << endl;
    cout << "6. MINOR CHORD FAMILY" << endl;
    cout << "7. ABOUT" << endl;
    cout << "0. EXIT" << endl << endl;
}

void majorScale() {
    cout << "\n--------------| MAJOR  SCALE |--------------\n\n";
    cout << "R = Root\nW = Whole Step\nH = Half Step\n\n";
    cout << "Major Scale Intervals  =  W  W  H  W  W  W  H\n\n";
    string key;
    majorScaleAgain:
    cout << "Enter Root Note >>> ";
    cin >> key;
    int keyIndex = findIndex(key);
    if (keyIndex == -1) {
        cout << "\"" << key << "\"" << " Invalid Note!!!" << endl << endl;
        return;
    }
    cout << endl << key << " Major Scale  =  ";
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 1; keyIndex %= 12; // half note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 1; keyIndex %= 12; // half note
    cout << chromatic[keyIndex] << endl << endl;
    string checkAgain;
    cout << "Find Again (y/n) >>> ";
    cin >> checkAgain;
    cout << endl;
    if (findAgain(checkAgain)) {
        goto majorScaleAgain;
    }
    cout << "--------------------------------------------\n\n";
}

void minorScale() {
    cout << "\n--------------| MINOR  SCALE |--------------\n\n";
    cout << "R = Root\nW = Whole Step\nH = Half Step\n\n";
    cout << "Major Scale Intervals  =  W  H  W  W  H  W  W\n\n";
    string key;
    minorScaleAgain:
    cout << "Enter Root Note >>> ";
    cin >> key;
    int keyIndex = findIndex(key);
    if (keyIndex == -1) {
        cout << "\"" << key << "\"" << " Invalid Note!!!" << endl << endl;
        return;
    }
    cout << endl << key << " Minor Scale  =  ";
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 1; keyIndex %= 12; // half note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 1; keyIndex %= 12; // half note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << chromatic[keyIndex] << endl << endl;
    string checkAgain;
    cout << "Find Again (y/n) >>> ";
    cin >> checkAgain;
    cout << endl;
    if (findAgain(checkAgain)) {
        goto minorScaleAgain;
    }
    cout << "--------------------------------------------\n\n";
}

void majorTriads() {
    cout << "\n--------------| MAJOR TRIADS |--------------\n\n";
    cout << "Major Triads  =  (Root)  +  (Major 3rd)  +  (Perfect 5th)\n\n";
    string key;
    majorTriadsAgain:
    cout << "Enter Root Note >>> ";
    cin >> key;
    int keyIndex = findIndex(key);
    if (keyIndex == -1) {
        cout << "\"" << key << "\"" << " Invalid Note!!!" << endl << endl;
        return;
    }
    cout << endl << key << " Major Triads  =  ";
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 4; keyIndex %= 12;
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 3; keyIndex %= 12;
    cout << chromatic[keyIndex] << endl << endl;
    string checkAgain;
    cout << "Find Again (y/n) >>> ";
    cin >> checkAgain;
    cout << endl;
    if (findAgain(checkAgain)) {
        goto majorTriadsAgain;
    }
    cout << "--------------------------------------------\n\n";
}

void minorTriads() {
    cout << "\n--------------| MINOR TRIADS |--------------\n\n";
    cout << "Major Triads  =  (Root)  +  (Minor 3rd)  +  (Perfect 5th)\n\n";
    string key;
    minorTriadsAgain:
    cout << "Enter Root Note >>> ";
    cin >> key;
    int keyIndex = findIndex(key);
    if (keyIndex == -1) {
        cout << "\"" << key << "\"" << " Invalid Note!!!" << endl << endl;
        return;
    }
    cout << endl << key << " Minor Triads  =  ";
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 3; keyIndex %= 12;
    cout << chromatic[keyIndex] << "  ";
    keyIndex += 4; keyIndex %= 12;
    cout << chromatic[keyIndex] << endl << endl;
    string checkAgain;
    cout << "Find Again (y/n) >>> ";
    cin >> checkAgain;
    cout << endl;
    if (findAgain(checkAgain)) {
        goto minorTriadsAgain;
    }
    cout << "--------------------------------------------\n\n";
}

void majorChordFamily() {
    cout << "\n-----------| MAJOR CHORD FAMILY |-----------\n\n";
    string key;
    anotherChordFamily:
    cout << "Enter Root Note >>> ";
    cin >> key;
    int keyIndex = findIndex(key);
    if (keyIndex == -1) {
        cout << "\"" << key << "\"" << " Invalid Note!!!" << endl << endl;
        return;
    }
    cout << endl << key << " Major Chord Family\n\n";
    cout << "I    =  " << chromatic[keyIndex] << " Major" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "ii   =  " << chromatic[keyIndex] << " minor" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "iii  =  " << chromatic[keyIndex] << " minor" << endl;
    keyIndex += 1; keyIndex %= 12; // half note
    cout << "IV   =  " << chromatic[keyIndex] << " Major" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "V    =  " << chromatic[keyIndex] << " Major" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "vi   =  " << chromatic[keyIndex] << " minor" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "vii\' =  " << chromatic[keyIndex] << " Diminished" << endl << endl;
    string checkAgain;
    cout << "Find Again (y/n) >>> ";
    cin >> checkAgain;
    cout << endl;
    if (findAgain(checkAgain)) {
        goto anotherChordFamily;
    }
    cout << "--------------------------------------------\n\n";
}

void minorChordFamily () {
    cout << "\n-----------| MINOR CHORD FAMILY |-----------\n\n";
    string key;
    anotherChordFamily:
    cout << "Enter Root Note >>> ";
    cin >> key;
    int keyIndex = findIndex(key);
    if (keyIndex == -1) {
        cout << "\"" << key << "\"" << " Invalid Note!!!" << endl << endl;
        return;
    }
    cout << endl << key << " Major Chord Family\n\n";
    cout << "i    =  " << chromatic[keyIndex] << " minor" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "ii\'  =  " << chromatic[keyIndex] << " Diminished" << endl;
    keyIndex += 1; keyIndex %= 12; // half note
    cout << "III  =  " << chromatic[keyIndex] << " Major" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "iv   =  " << chromatic[keyIndex] << " minor" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "v    =  " << chromatic[keyIndex] << " minor" << endl;
    keyIndex += 1; keyIndex %= 12; // half note
    cout << "VI   =  " << chromatic[keyIndex] << " Major" << endl;
    keyIndex += 2; keyIndex %= 12; // whole note
    cout << "VII  =  " << chromatic[keyIndex] << " Major" << endl << endl;
    string checkAgain;
    cout << "Find Again (y/n) >>> ";
    cin >> checkAgain;
    cout << endl;
    if (findAgain(checkAgain)) {
        goto anotherChordFamily;
    }
    cout << "--------------------------------------------\n\n";
}

void about() {
    cout << "\n------------------| ABOUT |-----------------\n\n";
    cout << "Music Theory Helper (C++ CLI Tool)\n\n";
    cout << "This program helps musicians, students and anyone exploring\n";
    cout << "and understanding fundamental music theory concepts.\n\n";
    cout << "Features include:\n";
    cout << "  - Major & Minor Scales with interval notation\n";
    cout << "  - Major & Minor Triads\n";
    cout << "  - Major & Minor Chord Families\n";
    cout << "  - User-friendly CLI interface for quick exploration\n\n";
    cout << "Built entirely in C++ using STL and modular functions,\n";
    cout << "emphasizing clarity, interactive design, and educational value.\n\n";
    cout << "Developer: Rudra Kaiser\n";
    cout << "Version: 1.0.0\n";
    cout << "Created with passion for music and coding.\n\n";
    cout << "--------------------------------------------\n\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    title();
    mainMenu();
    while (true) {
        string choice;
        cout << "Enter Choice >>> ";
        cin >> choice;
        if (choice == "1") {
            majorScale();
        } else if (choice == "2") {
            minorScale();
        } else if (choice == "3") {
            majorTriads();
        } else if (choice == "4") {
            minorTriads();
        } else if (choice == "5") {
            majorChordFamily();
        } else if (choice == "6") {
            minorChordFamily();
        } else if (choice == "7") {
            about();
        } else if (choice == "0") {
            cout << "\n-----------------| EXITED |-----------------\n\n";
            return 0;
        } else {
            cout << "Please Enter A Valid Choice!" << endl << endl;
        }
    }
}