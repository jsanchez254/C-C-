#include <iostream>
#include <vector>
#include <algorithm> //usingnamespacestd;
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout<<"List of scores: "<<endl;
    vector<int>::const_iterator iter;
    vector<int> scores;
    scores.push_back(7500);
    scores.push_back(3500);
    scores.push_back(1500);

    for(iter=scores.begin();iter!=scores.end();iter++){
        cout<<*iter<<endl;

    }
    cout<<"\nFinding a score : "<<endl;
    int score;
    cout<<"Enter a score to find :";
    cin>>score;
    iter=find(scores.begin(),scores.end(),score);

    if(iter!=scores.end()){
        cout<<"Score was found! "<<endl;
    }
    else{
        cout<<"Score was not found"<<endl;
    }
    cout<<"\nChanging scores' order..."<<endl;
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(),scores.end());

    for(iter=scores.begin();iter!=scores.end();iter++){
        cout<<*iter<<endl;

    }
    cout<<"\n Now scores will be sorted in an ascending order : "<<endl;
    sort(scores.begin(),scores.end());

    for(iter=scores.begin();iter!=scores.end();iter++){
        cout<<*iter<<endl;

    }

    cout<<"\nNow a word will be shuffled: "<<endl;
    string word= "world";
    random_shuffle(word.begin(),word.end());
    cout<<word<<endl;
    sort(word.begin(),word.end());
    cout<<word<<endl;

}
