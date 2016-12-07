#ifndef SESSIONWINDOW_H
#define SESSIONWINDOW_H

#include <QDialog>
#include "dialogaddcolumn.h"

namespace Ui {
class SessionWindow;
}

class SessionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SessionWindow(QWidget *parent = 0);
    explicit SessionWindow(QWidget *parent = 0, QString tableheader1="", QString tableheader2="");
    ~SessionWindow();

private slots:

    void addNewColumn();
    void on_btnAddLanguage_clicked();

private:
    QStringList* headerLabels;
    Ui::SessionWindow *ui;
    DialogAddColumn* dialog_addColumn;
};

#endif // SESSIONWINDOW_H
