/**
 * @file mainwindow.h
 * @brief Library over the interface of the calculator window
 *
 * @author Tomas Lukac (xlukac16)
 * Team: QWERTZ
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../Header Files/hfunc_lib.h"
#include <QWidget>
#include <QtGui>
#include <QKeyEvent>

//Interface lib

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @class MainWindow
 * */
class MainWindow : public QMainWindow// public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr); /**< Window constructor */
    ~MainWindow(); /**< Window destructor */

    Higher_Func func; /**< Instance of 'Higher_Func' class */
    bool help=false; /** Help screen toggle */


public slots:
    void add_0(); /**< Press button 0 */
    void add_1(); /**< Press button 1 */
    void add_2(); /**< Press button 2 */
    void add_3(); /**< Press button 3 */
    void add_4(); /**< Press button 4 */
    void add_5(); /**< Press button 5 */
    void add_6(); /**< Press button 6 */
    void add_7(); /**< Press button 7 */
    void add_8(); /**< Press button 8 */
    void add_9(); /**< Press button 9 */
    void add_dot(); /**< Press button '.' */
    void add_pi(); /**< Press button 'pi' */
    void add_e(); /**< Press button 'e' */

    void add_ans(); /**< Press button 'ANS' */

    void add_plus(); /**< Press button '+' */
    void add_minus(); /**< Press button '-' */
    void add_mul(); /**< Press button '*' */
    void add_div(); /**< Press button '/' */

    void add_power(); /**< Press button '^' */
    void add_root(); /**< Press button 'root' */
    void add_log(); /**< Press button 'log' */
    void add_fact(); /**< Press button '!' */

    void move_left(); /**< Press button '<' */
    void move_right(); /**< Press button '>' */
    void fdel(); /**< Press button 'DEL' - delete last character/operation */
    void ac(); /**< Press button 'AC' - clear input string*/

    void solveU(); /**< Press button '=' - solve equation */

    void help_me(); /**< Press button '?' - print info */
private:
    
    Ui::MainWindow *ui; /**< ... */

}; // class MainWindow


#endif // MAINWINDOW_H

/*** END OF FILE mainwindow.h ***/
