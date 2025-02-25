/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupWindow
{
public:
    QPushButton *backButton;

    void setupUi(QWidget *SignupWindow)
    {
        if (SignupWindow->objectName().isEmpty())
            SignupWindow->setObjectName("SignupWindow");
        SignupWindow->resize(240, 320);
        backButton = new QPushButton(SignupWindow);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(130, 130, 100, 32));

        retranslateUi(SignupWindow);

        QMetaObject::connectSlotsByName(SignupWindow);
    } // setupUi

    void retranslateUi(QWidget *SignupWindow)
    {
        SignupWindow->setWindowTitle(QCoreApplication::translate("SignupWindow", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("SignupWindow", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignupWindow: public Ui_SignupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
