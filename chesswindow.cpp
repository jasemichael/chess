#include "chesswindow.h"

ChessWindow::ChessWindow() : QMainWindow() {
    QPainter *painter = new QPainter();
    QGraphicsScene *gc = new QGraphicsScene();
    painter->drawRect(20, 20, 20, 20);
    painter->setWindow(20, 20, 20, 20);
    painter->drawRect(5, 5, 5, 5);
    gc->addRect(new QRect(20, 20, 20, 20));
    //setCentralWidget(painter);
}
