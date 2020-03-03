#include <iostream>
using namespace std;
// Классы и объекты
int main(){
   setlocale(LC_ALL, "Russian");	
   class myClass {
   	public:
   		int a;
   		int b;
   		int summa(){
   			int sum=a+b;
   			return sum;
		   }
   };
   
   myClass exam;
   exam.a = 2;
   exam.b = 2;
   cout<<exam.summa();
   return 0;  
}
