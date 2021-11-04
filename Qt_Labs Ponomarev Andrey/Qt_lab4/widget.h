#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include <QLineEdit>
#include <QSpinBox>
#include <QLabel>
#include <QIntValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    QLineEdit *line;
    QSpinBox *spin1;
    QLabel *labe1;
    QIntValidator *val;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void setTitle(const QString &t);
    void Top(int a);
    void el();
};
#endif // WIDGET_H
