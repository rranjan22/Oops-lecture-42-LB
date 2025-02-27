# include<iostream>
using namespace std;

//Explicitly
class Hero{

    //properties/data members
    public:
    int health;
    
    private:
    char level;

    void print(){
        cout << level <<endl;
    }

};

int main(){
    
    //creation of object (of the class)
    //hero type object
    Hero ramesh;

    cout<< "Health is: "<< ramesh.health <<endl;
    cout<< "Level is: "<< ramesh.level <<endl;

    //cout<<"size : "<< sizeof(h1) <<endl;
    return 0;
}