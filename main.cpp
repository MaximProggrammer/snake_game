#include <iostream>

using namespace std;


bool gameOver;
const int width = 21;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;


void Setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void draw(){
    system("cls");
    for(int i = 0; i < width; i++){
        cout << "#";
    }
    cout << endl;

    for(int i = 0; i < height; i++){
        cout << "#";
        for(int j = 0; j < width; j++){
            cout << " ";
        }
    }
    cout << endl;

    for(int i = 0; i < width; i++){
        cout << "#";
    }
    cout << endl;
}

void Input(){

}

void logic(){

}

int main() {
    Setup();

    while (!gameOver){
        logic();
        draw();
        Input();
    }

    return 0;
}