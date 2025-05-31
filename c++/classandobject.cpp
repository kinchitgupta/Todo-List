#include<iostream>
using namespace std;
 class person {
public:
     string name;
     int age;
     double height;
};
void print ( person p){
     cout<<p.name<<" "<<p.age<<" "<<p.height<<" "<<endl;
};
void change (person& p){
     p.name = "killer";
     p.age = 56;
     p.height = 6.00000000000;
};
int main(){
     person p1;
     p1.name = "kinchit";
     p1.age= 6;
     p1.height= 7.8;
     print (p1);
     change (p1);
     print (p1);
}


  