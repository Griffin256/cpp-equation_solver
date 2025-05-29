#include <iostream>
#include <vector>

using namespace std;

int length;
int sum;

void readArray(const vector<int>& grades) {
    for(size_t i = 0; i < grades.size(); i++) {
        cout << grades[i];
        if(i != grades.size()- 1) {
            cout << " , ";
        }
    }
    cout << " }" << endl;
}
int main() {
    cout << "Enter the number of grades ";
    cin >> length;
    vector<int> grades(length);
    //input scores
    for(int i = 0; i < length; i++) {
        cout << "Grades: "<< i+1 <<": ";
        cin >> grades[i];
        sum += grades[i];
    }

    cout << "The elements are: {";
    readArray(grades);
    cout << "Average: "<< sum/static_cast<double>(length) << endl;

    return 0;
}
