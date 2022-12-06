#include <iostream>

using namespace std;

class Lecture {
    public:
        int Num;
        
        Lecture(int num){
            Num = num;
        }
        
        void printNum(){
            cout << Num << " Leqtures was conducted" << endl;
        }
        
        void method(){
            cout << "Lecture class's method" << endl;
        }
};

class Study {
    public:
        int Hours;
        
        Study(int hours){
            Hours = hours;
        }
        
        int multiply(){
            return Hours * 2;
        }
        
        void studyTime(){
            cout << "You need to study " << multiply() << " hours" << endl;
            cout << endl;
        }
        
        void method(){
            cout << "Study class's method" << endl;
        }
};

class Child: public Lecture, public Study {
    public:
        
        Child(int num): Lecture(num), Study(num){
            
        } 
        
        void printEverything(){
            printNum();
            studyTime();
        }
        
        void method(){
            cout << "Child class's method" << endl;
        }
};

int main()
{
    Child obj(5);
    
    obj.printEverything();
    
    obj.Lecture::method();
    obj.Study::method();
    obj.method();
    
    return 0;
}