#include "dialogaddcolumn.h"
#include "ui_dialogaddcolumn.h"

DialogAddColumn::DialogAddColumn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddColumn)
{
    ui->setupUi(this);
}

DialogAddColumn::~DialogAddColumn()
{
    delete ui;
}

QString DialogAddColumn::getTextFieldValue()
{
    return ui->textField_newLang->text();
}

void DialogAddColumn::on_btn_addColAccept_clicked()
{
    if(ui->textField_newLang->text().isEmpty())
    {
        reject();
    }
    else
    {
        accept();
    }
}
