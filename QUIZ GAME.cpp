#include <iostream>
#include "sumCalc.h"
using namespace std;

int main()
{

 int points [10]={0,0,0,0,0,0,0,0,0,0};    //will store scores(needs to be given values to every single box in order to print out
 int sum1, sum2 ;  // stores player's scores
 string player1, player2, bip, lastQuestion;
 string answer;
 sumCalc kechu;

 int z=0; // switch between players when asking questions


 cout<<"This is quiz about Diega. This quiz is challenging since it requires you to know certain aspects of Diega Ga." <<endl;
 cout<<"Are you READY? " <<endl;
 cout<<"<<<Press any key to continue>>>(/0-0)/"<<endl;
 cin>>bip;

 cout<<"Player 1, enter your name: "<<endl;
 cin>>player1;
 cout<<"Player 2, enter your name: "<<endl;
 cin>>player2;

cout<<"OKAY, " <<player1<< " and "<<player2<<" It's time to begin, " <<player1;
cout<<" will go first, followed by " <<player2<<"."<<endl;
cout<<"READY... " <<player1<< " GO!"<<endl;

for(int i=0;i<2;i++){
if(z==1){
cout<<"\nNow YOU, "<<player2<< " READY... GOOOOOOOOOOOOO!!"<<endl;
}
for(int j=0; j<1;j++){
cout<< "What is Dieguito's favorite game ?" <<endl;
cout<< " a) Minecraft \n b) Terraria \n c) Kirby"<<endl;
cin>>answer;

if(answer=="b" || answer=="B"){
  cout<< "CORRECT" <<endl;
  points[0]=1;

}
else{
cout<<"INCORRECT YOU DING DONG" <<endl;
  points[0]=0;

}
cout<< "What does Dieguito's breath smells like ?" <<endl;
cout<< " a) mortaldad \n b) poop \n c) Donkey"<<endl;
cin>>answer;
if(answer=="a" || answer=="A"){
  cout<< "CORRECT" <<endl;
  points[1]=1;

}
else{
cout<<"INCORRECT YOU DING DONG" <<endl;
  points[1]=0;


}
cout<< "What is Dieguito's main in super smash bros ?" <<endl;
cout<< " a) Kirby \n b) Meta knight \n c) Pikachu"<<endl;
cin>>answer;
if(answer=="b" || answer=="B"){
  cout<< "CORRECT" <<endl;
  points[2]=1;

}
else{
cout<<"INCORRECT YOU DING DONG" <<endl;
  points[2]=0;


}

cout<< "What is Dieguito's favorite food ?" <<endl;
cout<< " a) Tacos de carne azada with guacamole \n b) Tacos de carne azada \n c) Pizza"<<endl;
cin>>answer;
if(answer=="b" || answer=="B"){
  cout<< "CORRECT" <<endl;
  points[3]=1;

}
else{
cout<<"INCORRECT YOU DING DONG" <<endl;
  points[3]=0;


}
cout<< "What is Diega's favorite type of bird ?" <<endl;
cout<< " a) Alcon \n b) Colibri \n c) Aguila "<<endl;
cin>>answer;
if(answer=="b" || answer=="B"){
  cout<< "CORRECT" <<endl;
  points[4]=1;

}
else{
cout<<"INCORRECT YOU DING DONG" <<endl;
  points[4]=0;


}
cout<< "What is Dieguito's favorite color ?" <<endl;
cout<< " a) Blue \n b) Red \n c) Yellow "<<endl;
cin>>answer;
if(answer=="b" || answer=="B"){
  cout<< "CORRECT" <<endl;
  points[5]=1;

}
else{
cout<<"INCORRECT YOU DING DONG" <<endl;
  points[5]=0;


}
z++;

if(z==1){
cout<<player1<< "'s score was ";
kechu.calcScores(points);
sum1=kechu.calcScores(points);


}
if(z==2){
cout<<player2<< "'s score was ";
kechu.printCrap(points);
sum2=kechu.calcScores(points);
}
}

}
cout<<"\n AND THE WINNER FOR KNOWING BETTER DIEGA GA IS... ";
if(sum1> sum2){

 cout<<player1<< "!!!!!!!!! \n";

}
if(sum1<sum2){
 cout<<player2<< "!!!!!!!!!!!!!!!!!!!!!! \n";
}

else{
 cout<<"Alright, it seems like both of you know Diega ga very well and have managed to get the same score :"<<endl;
 cout<<"|"<<player1<<"|   "<<"|"<<player2<<"|"<<endl;
 cout<<"  -"<<sum1<<"-   "<<"  -"<<sum2<<"-"<<endl;
 cout<<"\n NOW I WILL ASK YOU ONE LAST QUESTION TO SEE WHO KNOWS DIEGA GA BETTER,";
 cout<<player1<<" will go first, followed by " <<player2<<"."<<endl;
}
cout<<player1<<"..."<<"GOOOOOOOOOOOOO!!"<<endl;
cout<<"What is Dieguito's favorite stuffed animal?(it's only one word)"<<endl;
cin>>lastQuestion;
if(lastQuestion=="Memo"||lastQuestion=="Memito"||lastQuestion=="memito"||lastQuestion=="memo"){
    sum1+=1;
}
cout<<player2<<"..."<<"GOOOOOOOOOOOOO!!"<<endl;
cout<<"What is Dieguito's favorite stuffed animal?(it's only one word)"<<endl;
cin>>lastQuestion;
if(lastQuestion=="Memo"||lastQuestion=="Memito"||lastQuestion=="memito"||lastQuestion=="memo"){
    sum2+=1;
}
cout<<"\n AND THE WINNER FOR KNOWING BETTER DIEGA GA IS (now for sure)... ";
if(sum1> sum2){

 cout<<player1<< "!!!!!!!!! \n \n YOU DID IT GA FAN";


}
if(sum1<sum2){
 cout<<player2<< "!!!!!!!!!!!!!!!!!!!!!! \n \n YOU DID IT GA FAN!";
}
if(sum1==sum2){
cout<<" or maybe not.ALRIGHT, BOTH OF YOU SCORED THE SAME AGAIN SO I'LL JUST CALL IT A DRAWN YOU DIEGA GA FANS...UNTIL LATER BYE BYE.";
}
}












