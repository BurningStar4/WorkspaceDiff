#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Create the treehouse.
    treehouse = new TreeHouse();
}

MainWindow::~MainWindow()
{
    delete treehouse;
    delete ui;
}

void MainWindow::cleanAndExit()
{
    // Call frees
    exit(1);
}

void MainWindow::menuOpenFile()
{
    // Open the file open dialog
    QString fileName = QFileDialog::getOpenFileName(this, tr(""),
                                                    "",
                                                    tr("Workspace Files (*.wsx)"));

    // Pass filename to XMLReader
    // Create QTreeWidget and add to treehouse

    // As part of prototype demo, display the QTreeWidget.
}

void MainWindow::on_actionExit_triggered()
{
    cleanAndExit();
}

void MainWindow::on_actionOpen_triggered()
{
    menuOpenFile();
}
