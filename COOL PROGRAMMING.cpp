#include <iostream>
#include <fstream>

using namespace std;
int whatTheyWant ();
void display(int x);

int main()
{
   int whatTheyGet;

   whatTheyGet= whatTheyWant();
   while(whatTheyGet != 4){
    switch(whatTheyGet){
     case 1: display(1); break;
     case 2: display(2); break;
     case 3: display(3); break;
    }
    whatTheyGet= whatTheyWant();

   }
}

int whatTheyWant(){
int choice;
cout<<"\n1 for helpful items " <<endl;
cout<<"2 for plain items" <<endl;
cout<<"3 for harmful items " <<endl;
cout<<"4 to quit the program \n" <<endl;
cin>>choice;
return choice;

}

void display(int x){
ifstream kechuFile("filez.txt");
string name;
int power;
if(x==2){
while(kechuFile>> name>> power){
    if(power==0){
        cout<<name<<" "<<power<<endl;

    }
}
}
  if(x==1){
   while(kechuFile>> name>> power){
    if(power>0){
        cout<<name<<" "<<power<<endl;

    }
   }
  }
   if(x==3){
while(kechuFile>> name>> power){
    if(power<0){
        cout<<name<<" "<<power<<endl;

    }
}

}

}




