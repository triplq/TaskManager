/********************************************************************************
** Form generated from reading UI file 'signinpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINPAGE_H
#define UI_SIGNINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SigninPage
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QPushButton *okButton;
    QPushButton *backButton;

    void setupUi(QWidget *SigninPage)
    {
        if (SigninPage->objectName().isEmpty())
            SigninPage->setObjectName("SigninPage");
        SigninPage->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SigninPage->sizePolicy().hasHeightForWidth());
        SigninPage->setSizePolicy(sizePolicy);
        SigninPage->setMinimumSize(QSize(800, 600));
        SigninPage->setMaximumSize(QSize(800, 600));
        layoutWidget = new QWidget(SigninPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(200, 128, 216, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName("nameEdit");

        gridLayout->addWidget(nameEdit, 1, 1, 1, 2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        passwordEdit = new QLineEdit(layoutWidget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(passwordEdit, 2, 1, 1, 2);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 3, 0, 1, 2);

        backButton = new QPushButton(layoutWidget);
        backButton->setObjectName("backButton");

        gridLayout->addWidget(backButton, 3, 2, 1, 1);


        retranslateUi(SigninPage);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SigninPage);
    } // setupUi

    void retranslateUi(QWidget *SigninPage)
    {
        SigninPage->setWindowTitle(QCoreApplication::translate("SigninPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("SigninPage", "\320\222\320\276\320\271\320\264\320\270\321\202\320\265 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("SigninPage", "\320\230\320\274\321\217:", nullptr));
        label_3->setText(QCoreApplication::translate("SigninPage", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        okButton->setText(QCoreApplication::translate("SigninPage", "OK", nullptr));
        backButton->setText(QCoreApplication::translate("SigninPage", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SigninPage: public Ui_SigninPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINPAGE_H
