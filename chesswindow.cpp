#include "chesswindow.h"
#include "pawn.h"
#include <iostream>

ChessWindow::ChessWindow() : QMainWindow() {
    setWindowState(Qt::WindowMaximized);
    update();
}

void ChessWindow::paintEvent(QPaintEvent *event){
    QPainter *painter = new QPainter(this);
    QColor *white = new QColor(250, 250, 250);
    QColor *black = new QColor(50, 50, 50);
    squareSize = 100;
    for(int row = 0; row < 8; row++){
        for(int column = 0; column < 8; column++){
            QColor color = *white;
            if((row+column)%2 == 0){
                color = *black;
            }
            QRect rect = QRect(width()/2-(4*squareSize)+(row*squareSize), height()/2-(4*squareSize)+(column*squareSize), squareSize, squareSize);
            painter->fillRect(rect, color);
            Pawn *pawn = new Pawn();
            /*
            if(column == 1){
                image = new Pawn();
            } */
            QImage *image = pawn;
            painter->drawImage(rect, *image);
        }
    }
    painter->end();
}

void ChessWindow::resizeEvent(QResizeEvent *event){
    update();
}
