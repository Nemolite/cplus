#include <iostream>
using namespace std;
// Классы и объекты
int main(){
   setlocale(LC_ALL, "Russian");	
   class myClass {
   	public:
   		int a;
   };
   
   myClass exam;
   exam.a = 5;
   cout<<exam.a;
   return 0;  
}
