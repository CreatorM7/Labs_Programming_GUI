#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "random"
#include "QRandomGenerator"

int glob = 0;

Window::Window(QWidget *parent)
    : QMainWindow(parent)
{
    resize(300, 450);
    text1 = new QLabel("Осторожно-расчет!",this);

    list1 = new QListWidget(this);
    list2 = new QListWidget(this);

    butt1 = new QPushButton("Start", this);

    lcd1 = new QLCDNumber(10, this);

    slide1 = new QSlider(Qt::Horizontal, this);
    slide1 -> setRange(0,5);



    text1 -> move(70,10);
    list1 -> move(10, 50);
    list1 -> resize(50,130);
    for(int i = 1; i <= 5; i++)
    {
        QString b = QString::number(i);
        list1 -> addItem(b);
    }
    list2 -> move(130, 50);
    list2 -> resize(50,130);
    for(int i = 1; i <= 5; i++)
    {
        QString b = QString::number(i);
        list2 -> addItem(b);
    }
    butt1 -> move(10, 180);

    lcd1 -> move(10, 250);

    slide1 -> move(10, 295);



    connect(butt1, SIGNAL(pressed()),this, SLOT(press()));




}



void Window :: press()
{
    glob ++;

    if(glob%2 == 0)
    {
       killTimer(*chek);
    }else
    {
    int a = slide1->value();
    startTimer(a*1000);
    }


}

void Window::timerEvent(QTimerEvent *event)
{
    int r = qrand()%5;
    QListWidgetItem *text1 = list1 ->takeItem(r);
    text1 ->setText(text1->text());

    list2->insertItem(6,text1);


    QListWidgetItem *text2 = list2 ->takeItem(r);
     text2 ->setText(text2->text());
    list1->insertItem(r,text2);
    list2->insertItem(r,text1);

    lcd1 ->display(r+1);

    event->timerId();
    *chek = event->timerId();
}

Window::~Window()
{
}
