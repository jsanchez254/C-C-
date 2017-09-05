#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int eraseComment=0;//makes explanation dissapear through an if statement
    bool YES;
 do{
 enum fields {WORD,HINT,NUM_FIELDS};
 const int NUM_WORDS=5;
 int num;
 string guess;
 string yesOrNot;


 const  string WORDS[NUM_WORDS][NUM_FIELDS]{{"TOWEL", "It is used in bathrooms"},{"TACO","Delicious type of mexican food"},
                                           {"MUGLY", "Crazy pair of girls who wander Agulilla's streets"}, {"POKEMON","GO!!!"},
                                           {"BEER","Useful to get drunk"}};

      srand(static_cast<unsigned int>(time(0)));
    num=rand();
    int wordAndHint=(num%NUM_WORDS)+1;
    string theWord=WORDS[wordAndHint][WORD]; //word to guess
    string theHint=WORDS[wordAndHint][HINT];//hint given

    string jumble=theWord;
    int length=jumble.size();
    for(int i=0;i<length;i++){ // jumbles all the words
        int index1=(rand()%length);
        int index2=(rand()%length);
        char temp= jumble[index1];
        jumble[index1]=jumble[index2];
        jumble[index2]=temp;

    }
if(eraseComment==0){
 cout<<"Hello there and welcome! This game is called jumble and asks you to guess a word that has just been jumbled!" <<endl;
 cout<<"How interesting, don't you think? I'll give you a hint to make it easier for you to guess.Anyways, enough talk, let's get to the game. The word you need to guess is: \n"<<endl;
}
if(eraseComment>0){
    cout<<"It seems like you wanna try again huh? okay HERE WE GO! "<<endl;
}
 cout<<"Word: "<<endl;
 cout<<jumble<<"\nHint: \n"<<theHint<<endl;
 cout<<"Type now: ";
 cin>> guess;

 if(guess == theWord){
    cout<<"YES THAT'S IT YOU GOT IT MY FRIEND, THE WORD WAS INDEED " <<theWord<<endl;

 }
 else{
    cout<<"oooh I'm sorry but unfortunetly that's not it "<<endl;
 }
 cout<<"To continue playing press 'YE' or 'y', to quit press any key"<<endl;
 cin>>yesOrNot;
 if(yesOrNot=="YE" || yesOrNot=="y"){
    YES=true;
    eraseComment=100;

 }
 else{
    YES=false;
 }
 }while(YES);
}
