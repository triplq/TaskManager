#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    showHelloPage();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showHelloPage()
{
    HelloPage *helloPage = new HelloPage();
    ui->stackedWidget->addWidget(helloPage);
    ui->stackedWidget->setCurrentWidget(helloPage);

    connect(helloPage, &HelloPage::SigninWindowClicked, this, &MainWindow::showSigninWindow);
}

void MainWindow::showSigninWindow()
{
    SigninWindow *signinWindow = new SigninWindow();
    ui->stackedWidget->addWidget(signinWindow);
    ui->stackedWidget->setCurrentWidget(signinWindow);

    connect(signinWindow, &SigninWindow::backClicked, this, &MainWindow::showHelloPage);
    connect(signinWindow, &SigninWindow::adminConnect, this, &MainWindow::showAdminPage);
}

void MainWindow::showAdminPage()
{
    adminpage *adminPage = new adminpage();
    ui->stackedWidget->addWidget(adminPage);
    ui->stackedWidget->setCurrentWidget(adminPage);
}
