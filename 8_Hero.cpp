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
        cout<< "Constructor Called" <<endl;
    }

    //Parameterised Constructor
    Hero(int health){
        //cout<< "this -> "<<this <<endl;
        this->health = health;
    }

    Hero(int health, int level){
        //cout<< "this -> "<<this <<endl;
        cout<<"Parameterised Constructor CALLED"<<endl;
        this->level = level;
        this->health = health;
    }

    void print(){
        cout << health <<endl;
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
    
    //object created statically
    Hero ramesh(10);
    //cout<< "Address of ramesh "<< &ramesh <<endl;
    ramesh.getHealth();
    ramesh.print();

    //dynamically
    Hero *h = new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();
    

    return 0;
}