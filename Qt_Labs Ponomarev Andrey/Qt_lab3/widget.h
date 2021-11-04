#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QRadioButton>
#include <QCheckBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    QPushButton *butt1;
    QPushButton *butt2;
    QLabel *labe;
    QCheckBox *flag1;
    QCheckBox *flag2;
    QCheckBox *flag3;
    QRadioButton *rdn1;
    QRadioButton *rdn2;
    QRadioButton *rdn3;


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void rad1();
    void rad2();
    void rad3();
    void flg1();
    void flg2();
    void flg3();
    void text();
    void psh1();
    void psh2();

};
#endif // WIDGET_H
