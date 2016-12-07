#include "sessionwindow.h"
#include "ui_sessionwindow.h"

#include <QDebug>

SessionWindow::SessionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SessionWindow)
{
    ui->setupUi(this);
    ui->wordsTable->setRowCount(2);
    ui->wordsTable->setColumnCount(2);
    ui->wordsTable->horizontalHeader()->setStretchLastSection(true);
    headerLabels = new QStringList();
    ui->wordsTable->setHorizontalHeaderLabels(*headerLabels);

}

SessionWindow::SessionWindow(QWidget *parent, QString tableheader1, QString tableheader2) :
    QDialog(parent), ui(new Ui::SessionWindow)
{
    ui->setupUi(this);
    ui->wordsTable->setRowCount(1);
    ui->wordsTable->setColumnCount(2);
    ui->wordsTable->horizontalHeader()->setStretchLastSection(true);
    headerLabels = new QStringList({tableheader1, tableheader2});
    ui->wordsTable->setHorizontalHeaderLabels(*headerLabels);

}

SessionWindow::~SessionWindow()
{
    delete ui;
}

void SessionWindow::addNewColumn()
{
    headerLabels->push_back(dialog_addColumn->getTextFieldValue());
    ui->wordsTable->setColumnCount(ui->wordsTable->columnCount() + 1);
    ui->wordsTable->setHorizontalHeaderLabels(*headerLabels);
    ui->wordsTable->repaint();
    this->repaint();
}

void SessionWindow::on_btnAddLanguage_clicked()
{
    dialog_addColumn = new DialogAddColumn(this);
    connect(dialog_addColumn, SIGNAL(accepted()), this, SLOT(addNewColumn()));
    dialog_addColumn->show();
}
