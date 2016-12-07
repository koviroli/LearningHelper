#include "sessionpredialog.h"
#include "ui_sessionpredialog.h"

SessionPreDialog::SessionPreDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SessionPreDialog)
{
    ui->setupUi(this);

}

SessionPreDialog::~SessionPreDialog()
{
    delete ui;
}

//void SessionPreDialog::on_buttonBox_accepted()
//{
//    if(ui->lineEdit_lang1->text().isEmpty() || ui->lineEdit_lang2->text().isEmpty())
//    {

//    }
//    else
//    {
//        sessionWindow = new SessionWindow(this, ui->lineEdit_lang1->text(), ui->lineEdit_lang2->text());/*, ui->lineEdit_lang1->text(), ui->lineEdit_lang2->text());*/
//        sessionWindow->show();
//    }
//}

void SessionPreDialog::on_pushButton_clicked()
{
        if(ui->lineEdit_lang1->text().remove(" ").isEmpty() || ui->lineEdit_lang2->text().remove(" ").isEmpty())
        {
            QMessageBox::information(this, "Warning", "Language1 or Language2 is empty.");
        }
        else
        {
            sessionWindow = new SessionWindow(this, ui->lineEdit_lang1->text(), ui->lineEdit_lang2->text());/*, ui->lineEdit_lang1->text(), ui->lineEdit_lang2->text());*/
            sessionWindow->show();
        }
}
