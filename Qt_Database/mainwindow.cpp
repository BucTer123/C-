#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./testDB.db");
    if (db.open()) {
        qDebug("open");
    } else {
        qDebug("close");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE UZER(First INT,);");

    model = new QSqlTableModel(this, db);
    model->setTable("UZER");
    model->select();

    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

