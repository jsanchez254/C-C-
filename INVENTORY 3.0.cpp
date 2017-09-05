#include <iostream>
#include <vector> usingnamespacestd;

using namespace std;

int main()
{
   vector<string>inventory;
   inventory.push_back("Shield");
   inventory.push_back("Sword");
   inventory.push_back("Battle Axe");

   vector<string>:: iterator myIterator;
   vector<string>:: const_iterator iter;

   cout<<"Your items are: "<<endl;
   for(iter= inventory.begin();iter!=inventory.end();iter++){
    cout<<*iter<<endl;
   }
   cout<<"\nYou trade your shield for a Melio Macir: "<<endl;
   myIterator=inventory.begin();
   *myIterator="Melio Macir ";

   for(iter= inventory.begin();iter!=inventory.end();iter++){
    cout<<*iter<<endl;
   }
   cout<<"The item "<<*myIterator<<" has "<<(*myIterator).size()<<" characters in it"<<endl;
      cout<<"The item "<<*myIterator<<" has "<<myIterator->size()<<" characters in it"<<endl;

      cout<<"\nYou found a new item: "<<endl;
      inventory.insert(inventory.begin(),"Crossbow");

      for(iter= inventory.begin();iter!=inventory.end();iter++){
    cout<<*iter<<endl;
   }
    cout<<"\nYou've lost your sword "<<endl;
    inventory.erase(inventory.begin()+2);

    for(iter= inventory.begin();iter!=inventory.end();iter++){
    cout<<*iter<<endl;
   }

}

