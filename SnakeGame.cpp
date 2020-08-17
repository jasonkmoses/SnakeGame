//  snake game
//  Created by jason Moses on 2019/09/13.
//  Copyright Â© 2019 jason Moses. All rights reserved.

//################################
//CODE STILL UNDER CONSTRUCTION!!!!
//################################

#include <iostream>
#include <random>
#include <cstdlib>
#include <curses.h>
#include <time.h>
#include <unistd.h>
#include <iterator>
#include <algorithm>
#include <fstream>
#include <vector>
#include <numeric>
const int width = 80, height = 16;
int x , y;
static int Fruitx;
static int Fruity;
enum eDricet {STOP=0,GO=true};
static eDricet dir;
static bool PRINTED_OR_NOT;
const int SIZE_OF_ARRAY = 20;
const int SIZE_OF_NAME_ARRAY = 20;
static int max = 80;
static int min = 16;
std::vector<bool> amountOfMoves(100000);
std::vector<int> numberOfmovesVertical(10000);
std::vector<int> numberOfmovesHorizontal(10000);
std::vector<int> storedRandomXValue(1000000);
std::vector<int> storedRandomYValue(100000);
std::string name;
std::ifstream ofile;
int Inp;
std::string Names_To_Printed[SIZE_OF_NAME_ARRAY];
std::vector<std::string> head(SIZE_OF_ARRAY);
std::string NAMES[SIZE_OF_NAME_ARRAY];
std::string scoreArray[SIZE_OF_NAME_ARRAY];
static std::string fruit = "@";
void loadCredits() {
for (int r=0;r==15;r++) {
while (r < 13){ std::cout<<"      \n";}}
std::cout<<"Thank you for playing this simple snake game :)\n";
std::cout<<"\n";
std::cout<<"***********************************************\n";
std::cout<<"\n";
std::cout<<"***********************************************\n";
std::cout<<"\n";
std::cout<<"Developer: Jason K Moses\n"; }
bool gameOVER;
bool GameOver(){
gameOVER = true;
return gameOVER;}
void Setup(int horzontial,int vertical){
//Code in this function forms a cartesian plane where every point on the plane can be mapped with a if statement y and x.
Fruitx = rand()%max;
Fruity = rand()%min;
double diff;
int score;
std::srand(std::time(0));
gameOVER = false;
dir = STOP;
    for (int i = 0; i < width; i++) {
      if (horzontial != width) {}
      else {
        std::cout<<"err"; }
        std::cout<<"#"; }
    for (y = 0; y < height; y++) {
        for (x = 0 ; x < width; x++) {
            if (x == 79 || x == 0) {
               std::cout<<"#"; }
            else if (x == 2 && y == 1) {
                std::cout<<"S"; }
            else if(x == 3 && y==1) {
               std::cout<<"C";}
            else if(x==4 && y==1) {
               std::cout<<"O";}
            else if (x==5 && y==1) {
               std::cout<<"R";}
            else if (x==6 && y==1) {
               std::cout<<"E";}
            else if (x==7 && y==1) {
               std::cout<<":";}
            else if (x==8 && y==1) {
              for (int w=0;Fruitx==(39 + horzontial) && (8 + vertical)==Fruity; w++) {
               score = w;
               std::cout<<score;}}
            else if (x==39 + horzontial && y==8 + vertical) {
              bool inpu = true;
              head[0] = "$";
              std::cout<<head.at(0);}
              else if (x == Fruitx && y == Fruity) {
                PRINTED_OR_NOT = true;
                int n = amountOfMoves.size();
                if (PRINTED_OR_NOT == true) { //Statement does not excute
                // std::cout<<storedRandomXValue[0]<<std::endl;
                std::cout<<fruit;
                }
                if (amountOfMoves[n-1] == true) {
                  std::cout<<fruit;}
                else {std::cout<<fruit;}
                //This code will add to the array making the snake larger +++ ;) only when fruit is touched
                for (int t=0;Fruitx==39+horzontial && Fruity==8+vertical;t++){
                   head[t] = "$";}}
                else if (horzontial==-39 || horzontial==39 || vertical==-8 || vertical==8) {
                gameOVER = GameOver();
                if(gameOVER==true){printf("gameOver\n");
                std::ifstream namesFile2Refrences;
                std::ofstream recordFile;
                namesFile2Refrences.open("/Users/jasonmoses/Desktop/C++/names.txt",std::ios::in);
                for (int m=0;m<1 && gameOVER==true;++m) {
                  std::string names[SIZE_OF_NAME_ARRAY];
                  names[m]=NAMES[m];
                  std::string STR;
                  (m==0)?STR=" "+names[m]+",":STR=","+names[m];
                  namesFile2Refrences>>STR;
                  std::string RecordNamesCorresponding[SIZE_OF_NAME_ARRAY];
                  recordFile.open("YOUR PATH TO Records.txt",std::ios::app | std::ios::out);
                  RecordNamesCorresponding[m] = scoreArray[m] + " " + names[m];
                  recordFile << RecordNamesCorresponding[m];
                  recordFile.close();
                }namesFile2Refrences.close();}
              } else if (39 + horzontial == Fruitx && 8 + vertical == Fruity) {
                printf("Got fruit\n");
              }
              else {
             std::cout<<" ";}}}
    for (int l=0; l < width; l++) {
        std::cout<<"#";}}
void Input(){
//Just incase a user taps one of the input buttons twice
std::string aaValue="aa";
std::string ddValue="dd";
std::string wwValue="ww";
std::string ssValue="ss";
std::string input;
std::cin>>input;
//For loop code tracks which key user types into the ternimal then accumulates it in an array which gets placed
//into setup function and takes the form, of horzontial and vertical look at setup function above
for (int i = 0; (input == "a" || input==aaValue) && gameOVER == false; i++){
    std::cin>>input;
    std::cout<<"\a"<<std::endl;
    numberOfmovesVertical[i] = -i;
    if (i == 5) {
    amountOfMoves[amountOfMoves.size() - 1] = true;}
    else {amountOfMoves[i] = false;}
      Setup(accumulate(numberOfmovesVertical.begin(),numberOfmovesVertical.end(),0)+1
      ,accumulate(numberOfmovesHorizontal.begin(),numberOfmovesHorizontal.end(),0)-1);}
      //moving downwards must move through a lopp almost when possible
for (int i = 0; (input == "d" || input==ddValue) &&
    gameOVER == false; i++){
    numberOfmovesVertical[i] = +i;
    std::cin>>input;
    std::cout<<"\a"<<std::endl;
    if (i == 5) {
    amountOfMoves[amountOfMoves.size() - 1] = true;}
    else {amountOfMoves[i] = false;}
    Setup(accumulate(numberOfmovesVertical.begin(),numberOfmovesVertical.end(),0)-1
    ,accumulate(numberOfmovesHorizontal.begin(),numberOfmovesHorizontal.end(),0)-1);}
    //moving leftwards must move through a lopp almost when possible
for (int i = 0; (input == "s" || input==ssValue) &&
    gameOVER == false; i++){
    numberOfmovesHorizontal[i] = +i;
    std::cin>>input;
    std::cout<<"\a"<<std::endl;
    if (i == 5) {
    amountOfMoves[amountOfMoves.size() - 1] = true;}
    else {amountOfMoves[i] = false;}
    Setup(accumulate(numberOfmovesVertical.begin(),numberOfmovesVertical.end(),0)-1,
accumulate(numberOfmovesHorizontal.begin(),numberOfmovesHorizontal.end(),0)+1);}
    //moving upwards must move through a lopp almost when possible
for (int i = 0; (input == "w" || input==wwValue) &&
    gameOVER == false; i++){
    numberOfmovesHorizontal[i] = -i;
    std::cin>>input;
    std::cout<<"\a"<<std::endl;
    if (i == 5) {
    amountOfMoves[amountOfMoves.size() - 1] = true;}
    else {amountOfMoves[i] = false;}
    Setup(accumulate(numberOfmovesVertical.begin(),numberOfmovesVertical.end(),0)-1
,accumulate(numberOfmovesHorizontal.begin(),numberOfmovesHorizontal.end(),0)-1);}
    //No move
  for (int i = 0; input==""; i++) {
    std::cin>>input;
    std::cout<<"\a"<<std::endl;
     numberOfmovesVertical[i] = 0;
     numberOfmovesHorizontal[i] = 0;
    Setup(accumulate(numberOfmovesVertical.begin(),numberOfmovesVertical.end(),0),
    accumulate(numberOfmovesHorizontal.begin(),numberOfmovesHorizontal.end(),0)); }}
void StartGame(){printf(
"Game Started type 'a' once and press enter and then type 'a' again and press enter\n"
);Input();}
void SideMenu(){printf(
  "WELCOMNE TO THE MENU PLZ ENTER NAME BELOW NOW.\n"
);std::cin>>name;
if(true){
std::ofstream outputFile;
outputFile.open("/Users/jasonmoses/Desktop/C++/names.txt",std::ios::app|
std::ios::out|std::ios::in);
for(int p=0;p<1 && name!="";p++){
    NAMES[p] = name;
    std::string str;
    (p==0)?str=NAMES[p]+" ":str=","+NAMES[p]+" ";
    outputFile<<str;
    }outputFile.close();}
std::cout<<"Please Select a option only write the number"<<std::endl;
std::cout<<"1.) Start Game\n";
std::cout<<"2.) Records\n";
std::cout<<"3.) Exit Game\n";
std::cout<<"4.) Credits\n";
std::cin>>Inp;
switch(Inp){
  case 1:StartGame();break;
  case 2:
  ofile.open("Records.txt");
  for (int e = 0; e < SIZE_OF_NAME_ARRAY; e++) {
   ofile >> Names_To_Printed[e];
   std::cout<<Names_To_Printed[e];}
  break;
  case 3:exit(0);break;
  case 4:loadCredits();break;}}
int main(){
storedRandomXValue.push_back(Fruitx);
storedRandomYValue.push_back(Fruity);
std::cout << a;
std::cout<<"Snake Game  ðŸ"<<std::endl;
std::cout<<"Made by Jason Moses \n";
std::cout<<"Created in C++ \n";
std::cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"<<std::endl;
if(true){SideMenu();}
else(std::cout<<"take back to main menu!!!"); return 0;}
