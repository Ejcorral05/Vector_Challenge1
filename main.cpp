#include <iostream>
#include <vector>
using namespace std;
auto operator<=>(const vector<double> & num, int rhs);

void Grade(vector<double> &num) {
    // a vector that pushes a double variable

    double user;
    cin >> user;
    if (user > 100) {
        num.push_back(user);
    }else {
        cout << "User number should be between 0 and 100" << endl;


    }
}

void AllG(vector<double> &num){

for (size_t i = 0; i < num.size(); ++i) {
    cout << num[i] << " ";
}

}


void H2L(vector<double> &num) {
    double i;
    double lNum;
    double HNum;
    // starting the doubles with 0
    lNum = num[0.0];
    HNum = num[0.0];

    for (size_t i = 1; i < num.size(); i++) {
        if (num[i] <= lNum) {
            lNum = num[i];
        }
        if (num[i] <= HNum) {
            HNum = num[i];
        }
    }
}





int main() {
    int num;
    vector<double> useNum;

    do {
        // Display menu
        cout << "Menu" << endl;
        cout << "1. Add a Grade" << endl;
        cout << "2. Display All Grades" << endl;
        cout << "3. Calculate Average Grade" << endl;
        cout << "4. Find Highest and Lowest" << endl;
        cout << "5. Count Grades Above Threshold "<<  endl;
        cout << "6. Quit " << endl;
        cin >> num;
        // using a switch to diplay each case that has been created
        switch (num) {
            case 1:
                cout << "Add any number grade 0-100." << endl;
                Grade(useNum);
                cout << endl;
                break;
            case 2:
                cout << "Displaying all the grades" << endl;
                Grade;

                                cout << Grade << endl;
                break;
                case 3:
                cout << "Calculating the average grade " << endl;
                AllG(useNum);
                cout << endl;
                break;
                case 4:
                cout << "Get the average grades of Highest and Lowest" << endl;
H2L(useNum);
                cout << endl;

                break;
                case 5:
                cout << "Get the average grades of Count Above Threshold " << endl;
                
                break;

            case 6:
                cout << "Quit" << endl;

                break;

            default:
                cout << "Invalid Input" << endl;
        }
    }while ( num != 6);


    return 0;


}
