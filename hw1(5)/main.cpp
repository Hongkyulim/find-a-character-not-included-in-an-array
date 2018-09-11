#include <iostream>

using namespace std;

int find_char(char* , char);

int main(){
    char name[] = "hongkyuHONGKYU";
    char guess;
    cout<<"Guess a letter in my name and type in a letter : ";
    cin>>guess;
    
    cout<<find_char(name, guess);
    
    cout<<endl;
    
    return 0;
}

int find_char(char* name, char guessedChar){
    size_t size = sizeof(name)/sizeof(name[0]);
    for(int i =0; i<size; i++){
        if(guessedChar == name[i]){
            return 1;
        }
    }
    return 0;
}
