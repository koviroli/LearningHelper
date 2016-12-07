#ifndef DIALOGADDCOLUMN_H
#define DIALOGADDCOLUMN_H

#include <QDialog>

namespace Ui {
class DialogAddColumn;
}

class DialogAddColumn : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddColumn(QWidget *parent = 0);
    ~DialogAddColumn();

    QString getTextFieldValue();

signals:
    void getNewColumnName(QString s);

private slots:
    void on_btn_addColAccept_clicked();

private:
    Ui::DialogAddColumn *ui;
};

#endif // DIALOGADDCOLUMN_H
