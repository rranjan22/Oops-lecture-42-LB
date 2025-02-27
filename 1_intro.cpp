# include<iostream>
using namespace std;

class Hero{ //Hero type one class is made

    //properties
    int health;

};

int main(){
    
    //creation of object (of the class)
    //hero type object
    Hero h1;

    //it will take the size of its properties
    cout<<"size : "<< sizeof(h1) <<endl;//4 -> int health;, 1 ->in case of empty class
    return 0;
}