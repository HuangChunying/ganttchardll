#include "ganttchardll.h"

#include "ui_mygantt.h"

Ganttchardll::Ganttchardll(QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Ganttchardll::setHtmlPath(QString htmlPath)
{
    ui->ganttChart->setContextMenuPolicy(Qt::NoContextMenu);
    ui->ganttChart->load(QUrl(htmlPath));

}

Ganttchardll::~Ganttchardll()
{
    delete ui;
}

