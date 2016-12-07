#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolBar>
#include "infodialog.h"
#include "sessionwindow.h"
#include "sessionpredialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAbout_triggered();

    void on_actionNew_session_triggered();

private:
    Ui::MainWindow *ui;
    InfoDialog* info;
    SessionWindow* session;
    SessionPreDialog* sessPreDialog;
};

#endif // MAINWINDOW_H
