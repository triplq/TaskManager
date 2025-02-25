#include "hellopage.h"
#include "ui_hellopage.h"

HelloPage::HelloPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::HelloPage)
{
    ui->setupUi(this);

    connect(ui->signinButton, &QPushButton::clicked, this, &HelloPage::SigninWindowClicked);
}

HelloPage::~HelloPage()
{
    delete ui;
}
