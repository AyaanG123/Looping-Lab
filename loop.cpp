//Ayaan Gill
//Nov 5
//Looping
//Extra: Random Number
#include <iostream>
using namespace std;
#include <string>
int main() {
    
    string quote[7];
    int energy = 5;
    int supplies = 0;
    int day = 0;
    int choice;//declaring everything
    
    for(int i=0; i<7; i++){
        cout<<"enter a motivation quote:";
        getline(cin, quote[i]);//setting the array as the motivational quotes
    }
    
    cout<<"Here are this weeks quotes:"<<endl;
    for(int i=0; i<7; i++){
        cout<<quote[i]<<endl;//printing the quotes using a for loop
    }
    
    
    
    while(energy > 0 && supplies < 10){
        day++;
        cout<<"Day: "<<day<<endl;
        
        cout<<"Do you want to search for supplies or rest?(1 for supplies, 2 for rest)"<<endl;
        cin>>choice;
        
        if(choice == 1){
            energy-=1;
            supplies++;
        }
        else if(choice == 2){
            energy+=2;
        }
    }
    
    if(supplies == 10){
            cout<<"YOU SURVIVED!!!"<<endl;
        }
    else{
            cout<<"You ran out of energy and did in fact not make it"<<endl;
        }
        //while the conditions are met, the loop will run; if not it will end
        
        
    srand((unsigned)time(0)); //random number
    int i;
    i = (rand()%999)+100;
    int code;
    char idk;
        
    do{
        cout<<i<<endl;
        cout<<"Enter the 3 digit code: ";
        cin>>code;
        
        if(code != i){
        cout<<"Try again?(y/n)"<<endl;
        cin>>idk;
        }
        
        if(code == i){
        cout<<"You did it yay!";
        return 0;
        }
        
        
    }while(idk == 'y');
    cout<<"The box remains locked";
    
    //depending on input, the code runs or stops
    
    
    
    
    
}
