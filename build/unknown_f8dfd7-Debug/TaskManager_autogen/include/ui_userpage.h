/********************************************************************************
** Form generated from reading UI file 'userpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPAGE_H
#define UI_USERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPage
{
public:
    QTableView *tasksView;

    void setupUi(QWidget *UserPage)
    {
        if (UserPage->objectName().isEmpty())
            UserPage->setObjectName("UserPage");
        UserPage->resize(800, 600);
        UserPage->setMinimumSize(QSize(800, 600));
        UserPage->setMaximumSize(QSize(800, 600));
        tasksView = new QTableView(UserPage);
        tasksView->setObjectName("tasksView");
        tasksView->setGeometry(QRect(0, 10, 781, 571));

        retranslateUi(UserPage);

        QMetaObject::connectSlotsByName(UserPage);
    } // setupUi

    void retranslateUi(QWidget *UserPage)
    {
        UserPage->setWindowTitle(QCoreApplication::translate("UserPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPage: public Ui_UserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
