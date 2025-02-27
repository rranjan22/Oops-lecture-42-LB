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
    
    //creation of object (of the class)
    //hero type object
    Hero ramesh;
    cout<<"Size of Ramesh is " <<sizeof(ramesh)<<endl;//8 (H/W)

    cout<<" Ramesh health is "<< ramesh.getHealth()<<endl;//garbage value
    //using setter
    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout<< "Health is: "<< ramesh.getHealth() <<endl;//70
    cout<< "Level is: "<< ramesh.level <<endl;

    return 0;
}