/********************************************************************************
** Form generated from reading UI file 'hellopage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOPAGE_H
#define UI_HELLOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloPage
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *signinButton;
    QPushButton *signupButton;

    void setupUi(QWidget *HelloPage)
    {
        if (HelloPage->objectName().isEmpty())
            HelloPage->setObjectName("HelloPage");
        HelloPage->resize(800, 600);
        HelloPage->setMinimumSize(QSize(800, 600));
        HelloPage->setMaximumSize(QSize(800, 600));
        verticalLayoutWidget = new QWidget(HelloPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 761, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        signinButton = new QPushButton(verticalLayoutWidget);
        signinButton->setObjectName("signinButton");

        horizontalLayout->addWidget(signinButton);

        signupButton = new QPushButton(verticalLayoutWidget);
        signupButton->setObjectName("signupButton");

        horizontalLayout->addWidget(signupButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HelloPage);

        QMetaObject::connectSlotsByName(HelloPage);
    } // setupUi

    void retranslateUi(QWidget *HelloPage)
    {
        HelloPage->setWindowTitle(QCoreApplication::translate("HelloPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("HelloPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:48pt;\">\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214 \320\262 TaskManager</span></p></body></html>", nullptr));
        signinButton->setText(QCoreApplication::translate("HelloPage", "Sign in", nullptr));
        signupButton->setText(QCoreApplication::translate("HelloPage", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloPage: public Ui_HelloPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOPAGE_H
