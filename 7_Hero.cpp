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
    
    //object created statically
    cout<< "Hi" <<endl;
    Hero ramesh;
    cout<< "Hello" <<endl;

    //dynamically
    Hero *h = new Hero();
    

    return 0;
}