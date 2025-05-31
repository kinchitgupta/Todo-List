#include<iostream>
using namespace std; //using constructor 
class student{
    public:
string name;
int roll;
float grade;
student (string s, int r, float g){
    name = s;
    roll = r;
    grade = g;
//parameterised constructor
}
int age;  
student (string s, int r,float g, int a){
    name =s;
    roll = r;
    grade = g;
    age = a;
 }
};
void print (student s){
    cout<<s.name<<" "<<s.roll<<" "<<s.grade<<" "<<endl;
}
void change (student s){
    s.name = "jkjkjydntdtny";
    s.roll = 54;
}
int main(){
    student s1( "kinnjnkjnkh", 45, 6.23);

    student s2("jktbjk",45 ,7.35);
 //if we arranged this without constructor then its called defualt constructor because it works automatically.and if we called default contructor "student(){ } "  we can use both default and parameterised constructor at the same time .
// you make more constructor like multipal constructor what did i did in student 3 i also did something
 student s3("gjhghdsfu" , 948,4.00,79);
 student s4 = s2;
 s4.name="uiopy"; //deap copy
 student s5(s1); // copy constructor
 print(s1);
 print(s2);
 print(s3);
 print(s4);
 print(s5);
}
