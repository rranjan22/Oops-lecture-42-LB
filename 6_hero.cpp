# include<iostream>
using namespace std;

//Explicitly
class Hero{

    //properties/data members
    private:
    int health;

    public:
    char level;

    void print(){
        cout << level <<endl;
    }

    //Getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    //Setter
    void setHealth(int h){

        // if(name == "A"){
        //  health = h;
        // }

        health = h;

    }
    void setLevel(char ch){
        level = ch;
    }


};

int main(){
    
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<< " Level is " << a.level<< endl;
    cout<< " Health is " << a.getHealth() << endl;

    //dynamically
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<< " Level is " << (*b).level<< endl;
    cout<< " Health is " << (*b).getHealth() << endl;

    cout<< " Level is " << b->level<< endl;
    cout<< " Health is " << b->getHealth() << endl;

    return 0;
}