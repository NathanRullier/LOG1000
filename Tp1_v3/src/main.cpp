/* 
 * File:   main.cpp
 * Author: bram
 *
 * Created on November 8, 2015, 8:39 PM
 */

#include <iostream>
#include "HashMap.h"
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
  HashMap mymap = HashMap();
  
  ifstream fichierLecture;
  string nomFichier = argv[1];

  fichierLecture.open((char*)&nomFichier);

  string motLu = "temp";
  while(!fichierLecture.eof()){
    fichierLecture >> motLu;
    cout << motLu + " ";
  }

  //utilisation normale
  int nbPlusEleve = 0;
  std::string mot = "";
  for (unsigned i = 0; i < mymap.getKeys().size(); i++)
  {
	  if(mymap.compteur(mymap.getKeys()[i]) > nbPlusEleve){\
		  nbPlusEleve = mymap.compteur(mymap.getKeys()[i]);
		  mot = mymap.getKeys()[i];
		  } 
  }
  
  
  
  HashMap hmap;
  hmap.put("v1",1);
  hmap.put("v3",1);
  hmap.put("v11",1);
  hmap.put("v13",13);
  
  int value;
  bool res = hmap.get("v13", value);
  if (res)
    cout << value << endl;
  
  hmap.remove("v1");
  res = hmap.get("v1", value);
  if (res)
    cout << "ERROR: " << value << endl;

  std::vector<std::string> keys=hmap.getKeys();
  for(unsigned i=0;i<keys.size();i++){
    cout << keys[i] << endl;
  }
  
  return 0;
}

