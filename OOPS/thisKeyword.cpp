#include <iostream>
using namespace std;
class Pokemon{
        public:
        string name;
        string type;
        int hp;

        Pokemon(string name, string type,int hp){
            this->name = name;
            this->type  = type; 
           this->hp = hp;


        }

        void print(){
            cout<<name<<endl;
            cout<<type<<endl;
            cout<<hp<<endl;
            


        };
        
    };


int main() {

    Pokemon p1("pikachu", "electric", 70);
    Pokemon p2("charizard", "fire", 120);

    p2.print();

    return 0;
}