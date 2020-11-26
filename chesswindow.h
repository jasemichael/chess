#ifndef CHESSWINDOW_H
#define CHESSWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

class ChessWindow : public QMainWindow
{
    Q_OBJECT
public:
    ChessWindow();
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    int squareSize;
signals:

};
#endif // CHESSWINDOW_H
