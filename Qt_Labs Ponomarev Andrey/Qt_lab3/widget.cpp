
#include <widget.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    labe = new QLabel("Yes", this);
    butt1 = new QPushButton("Button 1", this);
    butt2 = new QPushButton("Button 2", this);
    flag1 = new QCheckBox("Flag 1", this);
    flag2 = new QCheckBox("Flag 2", this);
    flag3 = new QCheckBox("Flag 3", this);
    rdn1 = new QRadioButton("Radio 1", this);
    rdn2 = new QRadioButton("Radio 2", this);
    rdn3 = new QRadioButton("Radio 3", this);
    labe -> move(100,10);
    butt1 -> move(10,40);
    butt2 -> move(10,70);
    flag1 -> move(100,40);
    flag2 -> move(100,55);
    flag3 -> move(100,70);
    rdn1 -> move(160,40);
    rdn2 -> move(160,55);
    rdn3 -> move(160,70);

    connect (rdn1, SIGNAL(clicked()), this, SLOT(rad1()));
    connect (rdn2, SIGNAL(clicked()), this, SLOT(rad2()));
    connect (rdn3, SIGNAL(clicked()), this, SLOT(rad3()));
    connect (flag1, SIGNAL(clicked()), this, SLOT(flg1()));
    connect (flag2, SIGNAL(clicked()), this, SLOT(flg2()));
    connect (flag3, SIGNAL(clicked()), this, SLOT(flg3()));
    connect (butt1, SIGNAL(clicked()), this, SLOT(psh1()));
    connect (butt2, SIGNAL(clicked()), this, SLOT(psh2()));

}
void Widget::rad1()
{
    if(rdn1 -> isChecked())
    {
        flag1 -> setEnabled(false);

        flag2 -> setEnabled(true);

        flag3 -> setEnabled(true);
    }
    else flag1 -> setEnabled(true);

}
void Widget::rad2()
{
    if(rdn2 -> isChecked())
    {
        flag1 -> setEnabled(true);

        flag2 -> setEnabled(false);

        flag3 -> setEnabled(true);
    }
    else flag2 -> setEnabled(false);
}
void Widget::rad3()
{
    if(rdn3 -> isChecked())
    {
        flag1 -> setEnabled(true);

        flag2 -> setEnabled(true);

        flag3 -> setEnabled(false);
    }
    else flag3 -> setEnabled(false);
}
void Widget::flg1()
{
    if(flag1 -> isChecked())
    {
        rdn1 -> setEnabled(false);
        rdn2 -> setEnabled(true);
        rdn3 -> setEnabled(true);
    }
        else rdn1 -> setEnabled(true);
}
void Widget::flg2()
{
    if(flag2 -> isChecked())
    {
        rdn2 -> setEnabled(false);
        rdn1 -> setEnabled(true);
        rdn3 -> setEnabled(true);
    }
        else rdn2 -> setEnabled(true);
}
void Widget::flg3()
{
    if(flag3 -> isChecked())
    {


        rdn1 -> setEnabled(true);
        rdn2 -> setEnabled(true);
        rdn3 -> setEnabled(false);
    }
        else rdn3 -> setEnabled(true);
}

void Widget::text()
{
    if(!flag3 -> isChecked())
    {rdn1 -> setEnabled(true);}

}
void Widget::psh1()
{
    labe -> setText("Yes");
    //rdn1 -> setEnabled(true);
    //rdn2 -> setEnabled(true);
    //rdn3 -> setEnabled(true);
    //flag1 -> setEnabled(true);
    //flag2 -> setEnabled(true);
    //flag3 -> setEnabled(true);

    connect (rdn1, SIGNAL(clicked()), this, SLOT(rad1()));
    connect (rdn2, SIGNAL(clicked()), this, SLOT(rad2()));
    connect (rdn3, SIGNAL(clicked()), this, SLOT(rad3()));
    connect (flag1, SIGNAL(clicked()), this, SLOT(flg1()));
    connect (flag2, SIGNAL(clicked()), this, SLOT(flg2()));
    connect (flag3, SIGNAL(clicked()), this, SLOT(flg3()));
    connect (butt1, SIGNAL(clicked()), this, SLOT(psh1()));
    connect (butt2, SIGNAL(clicked()), this, SLOT(psh2()));

}
void Widget::psh2()
{
    labe -> setText("No");
   // rdn1 -> setEnabled(false);
    //rdn2 -> setEnabled(false);
    //rdn3 -> setEnabled(false);
    //flag1 -> setEnabled(false);
    //flag2 -> setEnabled(false);
    //flag3 -> setEnabled(false);

    disconnect (rdn1, SIGNAL(clicked()), this, SLOT(rad1()));
    disconnect (rdn2, SIGNAL(clicked()), this, SLOT(rad2()));
    disconnect (rdn3, SIGNAL(clicked()), this, SLOT(rad3()));
    disconnect (flag1, SIGNAL(clicked()), this, SLOT(flg1()));
    disconnect (flag2, SIGNAL(clicked()), this, SLOT(flg2()));
    disconnect (flag3, SIGNAL(clicked()), this, SLOT(flg3()));
    disconnect (butt2, SIGNAL(clicked()), this, SLOT(psh2()));

}


Widget::~Widget()
{}

