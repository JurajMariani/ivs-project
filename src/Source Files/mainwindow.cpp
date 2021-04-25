/**
 * @file mainwindow.cpp
 * @brief Implementation of functions over the interface of the calculator window
 *
 * @author Tomas Lukac (xlukac16)
 * Team: QWERTZ
 */


#include "../Header Files/mainwindow.h"
#include "../ui_mainwindow.h"
#include <QLineEdit>
#include <QDebug>
#include <string>
#include <iostream>
#include <QKeyEvent>

/**
 * Main Window Function
 * @brief Main Window constructor
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    ui->button_root->setText(QStringLiteral("n\u221A"));
    ui->button_pi->setText(QStringLiteral("\u03C0"));

    connect(ui->button_0, &QPushButton::clicked ,this,&MainWindow::add_0);
    connect(ui->button_1, &QPushButton::clicked ,this,&MainWindow::add_1);
    connect(ui->button_2, &QPushButton::clicked ,this,&MainWindow::add_2);
    connect(ui->button_3, &QPushButton::clicked ,this,&MainWindow::add_3);
    connect(ui->button_4, &QPushButton::clicked ,this,&MainWindow::add_4);
    connect(ui->button_5, &QPushButton::clicked ,this,&MainWindow::add_5);
    connect(ui->button_6, &QPushButton::clicked ,this,&MainWindow::add_6);
    connect(ui->button_7, &QPushButton::clicked ,this,&MainWindow::add_7);
    connect(ui->button_8, &QPushButton::clicked ,this,&MainWindow::add_8);
    connect(ui->button_9, &QPushButton::clicked ,this,&MainWindow::add_9);
    connect(ui->button_ans, &QPushButton::clicked ,this,&MainWindow::add_ans);
    connect(ui->button_dot, &QPushButton::clicked ,this,&MainWindow::add_dot);
    connect(ui->button_pi, &QPushButton::clicked ,this,&MainWindow::add_pi);
    connect(ui->button_e, &QPushButton::clicked ,this,&MainWindow::add_e);


    connect(ui->button_left, &QPushButton::clicked ,this,&MainWindow::move_left);
    connect(ui->button_right, &QPushButton::clicked ,this,&MainWindow::move_right);
    connect(ui->button_del, &QPushButton::clicked ,this,&MainWindow::fdel);
    connect(ui->button_ac, &QPushButton::clicked ,this,&MainWindow::ac);

    connect(ui->button_plus, &QPushButton::clicked ,this,&MainWindow::add_plus);
    connect(ui->button_minus, &QPushButton::clicked ,this,&MainWindow::add_minus);
    connect(ui->button_mul, &QPushButton::clicked ,this,&MainWindow::add_mul);
    connect(ui->button_div, &QPushButton::clicked ,this,&MainWindow::add_div);

    connect(ui->button_power, &QPushButton::clicked ,this,&MainWindow::add_power);
    connect(ui->button_root, &QPushButton::clicked ,this,&MainWindow::add_root);
    connect(ui->button_log, &QPushButton::clicked ,this,&MainWindow::add_log);
    connect(ui->button_fact, &QPushButton::clicked ,this,&MainWindow::add_fact);

    connect(ui->button_equals, &QPushButton::clicked ,this,&MainWindow::solveU);

    connect(ui->button_help, &QPushButton::clicked ,this,&MainWindow::help_me);


}

/**
 * ~Main Window Function
 * @brief Main Window Destructor
 */
MainWindow::~MainWindow()
{
    delete ui;
}


/**
 * Solve U Function
 * @brief What happens when you press '=' - solve
 */
void MainWindow::solveU()
{
    QString in=ui->in_out_window->text();
    std::string input=in.toStdString();
    //std::string output = "test";
    std::string output = func.solve(input);
    QString out = QString::fromStdString(output);
    ui->in_out_window->setText(out);
}


/**
 * Move Left Function
 * @brief Press button '<'
 */
void MainWindow::move_left()
{
    ui->in_out_window->cursorBackward(false,1);
}


/**
 * Move Right Function
 * @brief Press button '>'
 */
void MainWindow::move_right()
{
    ui->in_out_window->cursorForward(false,1);
}


/**
 * Del Function
 * @brief Press button 'DEL'
 * Removes the last character/sign/operation
 */
void MainWindow::fdel()
{
    ui->in_out_window->backspace();
}


/**
 * AC Function
 * @brief Press button 'AC'
 * Clears the whole string in calculator window
 */
void MainWindow::ac()
{
    ui->in_out_window->clear();
}


/**
 * Add Plus Function
 * @brief Press button '+'
 */
void MainWindow::add_plus()
{
    ui->in_out_window->insert(" + ");
}


/**
 * Add Minus Function
 * @brief Press button '-'
 */
void MainWindow::add_minus()
{
    ui->in_out_window->insert(" - ");
}


/**
 * Add Mul Function
 * @brief Press button '*'
 */
void MainWindow::add_mul()
{
    ui->in_out_window->insert(" * ");
}


/**
 * Add Div Function
 * @brief Press button '/'
 */
void MainWindow::add_div()
{
    ui->in_out_window->insert(" / ");
}


/**
 * Add Power Function
 * @brief Press button '^'
 */
void MainWindow::add_power()
{
    ui->in_out_window->insert(" ^ ");
}


/**
 * Add Root Function
 * @brief Press button 'root'
 */
void MainWindow::add_root()
{
    ui->in_out_window->insert(QStringLiteral(" \u221A "));
}


/**
 * Add Log Function
 * @brief Press button 'log'
 */
void MainWindow::add_log()
{
    ui->in_out_window->insert(" log ");
}


/**
 * Add (Me)Zero Function
 * @brief Press button '0'
 */
void MainWindow::add_0()
{
    ui->in_out_window->insert("0");
}


/**
 * Add One Function
 * @brief Press button '1'
 */
void MainWindow::add_1()
{
    ui->in_out_window->insert("1");
}


/**
 * Add Two Function
 * @brief Press button '2'
 */
void MainWindow::add_2()
{
    ui->in_out_window->insert("2");
}


/**
 * Add Three Function
 * @brief Press button '3'
 */
void MainWindow::add_3()
{
    ui->in_out_window->insert("3");
}


/**
 * Add Four Function
 * @brief Press button '4'
 */
void MainWindow::add_4()
{
    ui->in_out_window->insert("4");
}


/**
 * Add Five Function
 * @brief Press button '5'
 */
void MainWindow::add_5()
{
    ui->in_out_window->insert("5");
}


/**
 * Add Six Function
 * @brief Press button '6'
 */
void MainWindow::add_6()
{
    ui->in_out_window->insert("6");
}


/**
 * Add seven Function
 * @brief Press button '7'
 */
void MainWindow::add_7()
{
    ui->in_out_window->insert("7");
}


/**
 * Add Eight Function
 * @brief Press button '8'
 */
void MainWindow::add_8()
{
    ui->in_out_window->insert("8");
}


/**
 * Add Nine Function
 * @brief Press button '9'
 */
void MainWindow::add_9()
{
    ui->in_out_window->insert("9");
}


/**
 * Add Ans Function
 * @brief Press button 'ans'
 */
void MainWindow::add_ans()
{
    ui->in_out_window->insert("ans");
}


/**
 * Add Dot Function
 * @brief Press button '.'
 */
void MainWindow::add_dot()
{
    ui->in_out_window->insert(".");
}


/**
 * Add Pi Function
 * @brief Press button 'pi'
 */
void MainWindow::add_pi()
{
    ui->in_out_window->insert("pi");
}


/**
 * Add E Function
 * @brief Press button 'e'
 */
void MainWindow::add_e()
{
    ui->in_out_window->insert("e");
}


/**
 * Add Fact Function
 * @brief Press button '!'
 */
void MainWindow::add_fact()
{
    ui->in_out_window->insert(" ! ");
}


/**
 * Help Me Function
 * @brief Press button '?'
 */
void MainWindow::help_me()
{
    //please?
}


/**
 * Key Press Event Function
 * @brief Press button event
 */
void MainWindow::KeyPressEvent(QKeyEvent *event){
    add_e();
    if(event->key() == Qt::Key_U){
        add_e();
    }
}


