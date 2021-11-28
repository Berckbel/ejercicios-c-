#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<string> wordSplit(string text){

  vector<string>words = {};
  string word = "";

  while(text.find(' ') < 184){
    word = text.substr(0, text.find(' '));
    words.push_back(word);
    text.replace(0, text.find(' ') + 1, "");
    word = "";
  }
  words.push_back(text);
  return words;
}

bool isInArray(vector<string> array, objetive){

    for(int i=0; i<array.size(); i++){
        if(array[i].equals(objetive)){

        }
    }
}

vector<pair<string, int>> wordRepetitions(vector<string> words){
  vector<pair<string, int>> dict(words.size());
  vector<pair<int, string>> map_words(words.size());

  for(int i=0;i<words.size(); i++){
    map_words[i] = {i, words[i]};
  }

  return dict;
}

int main()
{
    vector<string> words;
    vector<pair<string, int>> dict = {};
    words = wordSplit("Hola mundo este es un texto de prueba hola hola mundo mundo");
    dict = wordRepetitions(words);
    for (int i=0; i<dict.size(); i++){
      cout << dict[i].first << " : " << dict[i].second << endl;
    }
}
