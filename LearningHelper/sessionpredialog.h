#ifndef SESSIONPREDIALOG_H
#define SESSIONPREDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "sessionwindow.h"

namespace Ui {
class SessionPreDialog;
}

class SessionPreDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SessionPreDialog(QWidget *parent = 0);
    ~SessionPreDialog();

private slots:
//    void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::SessionPreDialog *ui;
    SessionWindow* sessionWindow;
    QMessageBox* msgbox;
};

#endif // SESSIONPREDIALOG_H
