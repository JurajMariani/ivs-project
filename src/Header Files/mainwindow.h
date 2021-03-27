#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//Interface lib

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void add_0();
    void add_1();
    void add_2();
    void add_3();
    void add_4();
    void add_5();
    void add_6();
    void add_7();
    void add_8();
    void add_9();
    void add_dot();

    void add_ans();

    void add_plus();
    void add_minus();
    void add_mul();
    void add_div();

    void add_power();
    void add_root();
    void add_ln();

    void move_left();
    void move_right();
    void fdel();
    void ac();

    void solve();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
