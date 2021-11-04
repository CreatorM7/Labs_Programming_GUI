#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QSlider>
#include <QPushButton>
#include <QLCDNumber>
#include <QLabel>
#include <QString>



QT_BEGIN_NAMESPACE
namespace Ui { class Window; }
QT_END_NAMESPACE

class Window : public QMainWindow
{
    Q_OBJECT
    QListWidget *list1;
    QListWidget *list2;
    QLabel *text1;
    QSlider *slide1;
    QPushButton *butt1;
    QLCDNumber *lcd1;
    int *chek;

public:
    Window(QWidget *parent = nullptr);
    ~Window();
public slots:
    void press();
    void timerEvent(QTimerEvent *event);


};
#endif // WINDOW_H
