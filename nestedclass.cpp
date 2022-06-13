//nested class 
#include<iostream>
using namespace std;
class A{
public:
 //declaring nested class
 class B{
 private:
  int num;
      
 public:
  void setData(int n1){
     num = n1;
   }
      
  void showData(){
     cout << "The number is: " << num;
   }
 };
};

int main(){ 
 A :: B obj1;       // :: used to create object of nested class 
 obj1.setData(51);
 obj1.showData();
 return 0;
}