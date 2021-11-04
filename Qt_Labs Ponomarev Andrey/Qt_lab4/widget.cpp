#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,150);
    line = new QLineEdit(this);
    spin1 = new QSpinBox(this);
    labe1 = new QLabel("&text", this);
    val = new QIntValidator(0,999,this);
    labe1 -> move(10,10);
    labe1 -> setBuddy(line);
    line -> setValidator(val);
    line -> move(10,40);
    spin1 -> move(120,40);
    spin1 -> setMinimum(0);
    spin1 -> setMaximum(100);
    spin1 -> setSingleStep(1);
    spin1 -> setPrefix("{ ");
    spin1 -> setSuffix(" }");


    connect(spin1, SIGNAL(valueChanged(QString)), line, SLOT(setText(QString)));
    connect(line, SIGNAL(textEdited(QString)), this, SLOT(el()));
    connect(line, SIGNAL(textChanged(QString)), this, SLOT(setTitle(const QString &)));
}

void Widget :: setTitle(const QString &t)
{
    setWindowTitle(t);
}
void Widget :: Top(int a)
{
    spin1 -> setMaximum(a);
}
void Widget :: el()
{
    QString a = line -> text();
    int b = a.toInt();
    spin1 -> setValue(b);
}

Widget::~Widget()
{

}
