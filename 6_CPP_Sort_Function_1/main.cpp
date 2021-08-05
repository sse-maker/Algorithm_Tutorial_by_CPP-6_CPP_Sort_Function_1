//
//  main.cpp
//  6_C++_Sort()_Function_1
//
//  Created by 세광 on 2021/08/05.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
public:
    Student(string name, int score) {
        this->name = name;
        this->score = score;
    }
    
    bool operator<(Student &rhs) {
        return this->score < rhs.score;
    }
    
    const string GetName() const { return name; }
    const int GetScore() const { return score; }
    
private:
    string name;
    int score;
};

int main() {
    Student students[] = {
        Student("A", 90),
        Student("B", 93),
        Student("C", 97),
        Student("D", 87),
        Student("E", 92)
    };
    
    sort(students, students + 5); // class 안에 정렬 기준을 따로 정의해주었기 때문에 sort() 함수에 두 개의 인자값만 넣어주면 됨
    for (auto elem : students) cout << elem.GetName() << ", " << elem.GetScore() << endl;
}
