# include<iostream>
#include<string.h>
using namespace std;

//Explicitly
class Hero{

    //properties/data members
    private:
    int health;

    public:
    //char name[100]; not a good practice
    char *name;//allocated in heap for good memory allocation
    char level;
    static int timeToComplete;

    //constructor explicitly
    Hero(){
        cout<< "Simple constructor called" <<endl;
        name = new char[100]; //initialize dynamically
    }

    //Parameterised Constructor
    Hero(int health){
       //cout<< "this -> "<<this <<endl;
        this->health = health;
    }

    Hero(int health, int level){
        //cout<< "this -> "<<this <<endl;
        this->level = level;
        this->health = health;
    }

    //copy constructor explicitly
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout <<"[ Name: "<< this->name << " ,";
        cout <<"Health: "<< this->health << " ,";
        cout <<"Level: "<< this->level <<" ]";
        cout<<endl <<endl;
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

    void  setName(char name[]){
        strcpy(this->name, name);
    }

    //Destructor
    ~Hero(){
        cout << "Destructor called"<<endl; 
    }

};

int Hero::timeToComplete = 5;

int main(){
    
    cout<< Hero::timeToComplete <<endl;

    Hero a;
    cout<< a.timeToComplete <<endl;

    Hero b;
    b.timeToComplete = 10;
    cout<< a.timeToComplete<<endl;
    cout<< b.timeToComplete<<endl;

    return 0;
}