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

    connect(helloPage, &HelloPage::SigninPageClicked, this, &MainWindow::showSigninPage);
    connect(helloPage, &HelloPage::SignupPageClicked, this, &MainWindow::showSignupPage);
}

void MainWindow::showSigninPage()
{
    SigninPage *signinPage = new SigninPage();
    ui->stackedWidget->addWidget(signinPage);
    ui->stackedWidget->setCurrentWidget(signinPage);

    connect(signinPage, &SigninPage::backClicked, this, &MainWindow::showHelloPage);
    connect(signinPage, &SigninPage::adminConnect, this, &MainWindow::showAdminPage);
    connect(signinPage, &SigninPage::userConnect, this, &MainWindow::showUserPage);
}

void MainWindow::showAdminPage()
{
    AdminPage *adminPage = new AdminPage();
    ui->stackedWidget->addWidget(adminPage);
    ui->stackedWidget->setCurrentWidget(adminPage);
}

void MainWindow::showUserPage(const QString& user)
{
    UserPage *userPage = new UserPage(this, user);
    ui->stackedWidget->addWidget(userPage);
    ui->stackedWidget->setCurrentWidget(userPage);
}

void MainWindow::showSignupPage()
{
    SignupPage *signupPage = new SignupPage();
    ui->stackedWidget->addWidget(signupPage);
    ui->stackedWidget->setCurrentWidget(signupPage);

    connect(signupPage, &SignupPage::backClicked, this, &MainWindow::showHelloPage);
}

// void MainWindow::closeEvent(QCloseEvent *event)
// {
//     TaskManager::close_db();
//     close()
// }
