#include<bits/stdc++.h>
using namespace std;

class School{
    public:
    string name;
    char senctio;
    int cls, id, meth, eng; 
};

bool cmp(School l, School r){
    return  l.eng == r.eng ? l.meth == r.meth ? l.id < r.id : l.meth > r.meth : l.eng > r.eng;
}


int main(){
    int n;
    cin >> n;
    School student[n];

    for(int i=0; i<n; i++){
        cin >> student[i].name >> student[i].cls >> student[i].senctio >> student[i].id >> student[i].meth >> student[i].eng;
    }


    sort(student, student+n, cmp);


    for(int i=0; i<n; i++){
        cout << student[i].name << " " <<  student[i].cls << " " <<  student[i].senctio << " " << student[i].id  << " " << student[i].meth << " " << student[i].eng << endl;
    }

}