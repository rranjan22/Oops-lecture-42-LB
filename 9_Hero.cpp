# include<iostream>
using namespace std;

//Explicitly
class Hero{

    //properties/data members
    private:
    int health;

    public:
    char level;

    //constructor explicitly
    Hero(){
        cout<< "Simple constructor called" <<endl;
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
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout <<"Health "<< this->health <<endl;
        cout <<"Level "<< this->level <<endl;
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
    
    Hero S(70, 'C');
    S.print();
    // S.setHealth(70);
    // S.setLevel('C');

    //Copy constuctor
    Hero R(S);
    R.print();


    return 0;
}