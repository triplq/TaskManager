/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SigninWindow
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QPushButton *okButton;
    QPushButton *backButton;

    void setupUi(QWidget *SigninWindow)
    {
        if (SigninWindow->objectName().isEmpty())
            SigninWindow->setObjectName("SigninWindow");
        SigninWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SigninWindow->sizePolicy().hasHeightForWidth());
        SigninWindow->setSizePolicy(sizePolicy);
        SigninWindow->setMinimumSize(QSize(800, 600));
        SigninWindow->setMaximumSize(QSize(800, 600));
        widget = new QWidget(SigninWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 120, 260, 139));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName("nameEdit");

        gridLayout_3->addWidget(nameEdit, 1, 1, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setFrame(true);

        gridLayout_3->addWidget(passwordEdit, 2, 1, 1, 2);

        okButton = new QPushButton(widget);
        okButton->setObjectName("okButton");

        gridLayout_3->addWidget(okButton, 3, 0, 1, 2);

        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");

        gridLayout_3->addWidget(backButton, 3, 2, 1, 1);


        retranslateUi(SigninWindow);

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(SigninWindow);
    } // setupUi

    void retranslateUi(QWidget *SigninWindow)
    {
        SigninWindow->setWindowTitle(QCoreApplication::translate("SigninWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("SigninWindow", "\320\222\320\276\320\271\320\264\320\270\321\202\320\265 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("SigninWindow", "\320\230\320\274\321\217:", nullptr));
        label_3->setText(QCoreApplication::translate("SigninWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        okButton->setText(QCoreApplication::translate("SigninWindow", "OK", nullptr));
        backButton->setText(QCoreApplication::translate("SigninWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SigninWindow: public Ui_SigninWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
