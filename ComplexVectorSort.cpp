#include<bits/stdc++.h>
using namespace std;

int calculate_TotalMarks(vector<int>marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string,vector<int> >s1,pair<string,vector<int> >s2)
{
    vector<int>m1 = s1.second;
    vector<int>m2 = s2.second;
    return calculate_TotalMarks(m1) > calculate_TotalMarks(m2);
}

int main()
{
    vector<pair<string,vector<int> > > student_marks = {
        {"Rohan",{10,20,11}},
        {"Prateek",{10,21,33}},
        {"Vivek",{32,11,4}},
        {"Rijul",{10,13,29}}
    };

    sort(student_marks.begin(),student_marks.end(),compare);

    for(auto s : student_marks)
    {
        cout << s.first << " " << calculate_TotalMarks(s.second) << endl;
    }

    return 0;

    
    
}