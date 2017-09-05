#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>


using namespace std;

int main()
{
const int MAX_WRONG=8;
vector<string> WORDS;
WORDS.push_back("ZOOLOGY");
WORDS.push_back("EUPHORIA");
WORDS.push_back("PRESIDENT");

int wrong=0;
char guess;
string used="";

srand(static_cast<unsigned int>(time (0)));
random_shuffle(WORDS.begin(),WORDS.end());
const string THE_WORD =WORDS[0];

cout<<"                                           WELCOME TO HANGMAN!"<<endl;
string soFar(THE_WORD.size(),'-');
cout<<" The word you will be guessing today is: "<< soFar<<endl;



while((wrong<MAX_WRONG)&&(soFar!=THE_WORD)){
cout<<" \n So far you have "<<MAX_WRONG-wrong<< " guesses left"<<endl;
cout<<" <<The word so far is: "<<soFar<<">>";

cout<<" \n\n Take a guess(only one letter at a time)"<<endl;
cin>>guess;
guess=toupper(guess);//makes lowercase uppercase

while(used.find(guess)!=string::npos){
    cout<<" You've already guessed "<<guess<<endl;
    cout<<" Enter another word: "; cin>>guess;
    guess=toupper(guess);

}used+=guess;
if(THE_WORD.find(guess)!=string::npos){
    cout<<" That's right MY FRIEND "<<guess<<" is in the word"<<endl;

    for(int i=0;i<THE_WORD.length();++i){
 if(THE_WORD[i]==guess){
soFar[i]=guess;
}
}
}
else{
    cout<<"NOPE,"<<guess<<" is not in the word"<<endl;
    ++wrong;
}
}

if(wrong==MAX_WRONG){
    cout<<" YOU'VE REACHED THE MAXIMUM NUMBER OF MISTAKES. YOU'VE BEEN HANGED "<<endl;
}
else{
    cout<<" YOU DID, YOU GUESSED THE WORD!!! "<<THE_WORD<<endl;
}


return 0;
}
