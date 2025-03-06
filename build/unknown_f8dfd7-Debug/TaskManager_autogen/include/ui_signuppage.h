/********************************************************************************
** Form generated from reading UI file 'signuppage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPAGE_H
#define UI_SIGNUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QPushButton *okButton;
    QPushButton *backButton;

    void setupUi(QWidget *SignupPage)
    {
        if (SignupPage->objectName().isEmpty())
            SignupPage->setObjectName("SignupPage");
        SignupPage->resize(800, 600);
        SignupPage->setMinimumSize(QSize(800, 600));
        SignupPage->setMaximumSize(QSize(800, 600));
        layoutWidget = new QWidget(SignupPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(220, 160, 218, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName("nameEdit");

        gridLayout->addWidget(nameEdit, 0, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(passwordEdit, 1, 1, 1, 2);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 2, 0, 1, 2);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(SignupPage);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SignupPage);
    } // setupUi

    void retranslateUi(QWidget *SignupPage)
    {
        SignupPage->setWindowTitle(QCoreApplication::translate("SignupPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("SignupPage", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("SignupPage", "\320\230\320\274\321\217:", nullptr));
        label_3->setText(QCoreApplication::translate("SignupPage", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        okButton->setText(QCoreApplication::translate("SignupPage", "OK", nullptr));
        backButton->setText(QCoreApplication::translate("SignupPage", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupPage: public Ui_SignupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPAGE_H
