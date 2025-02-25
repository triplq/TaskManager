/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminpage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tasksView;
    QTableView *usersView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QWidget *adminpage)
    {
        if (adminpage->objectName().isEmpty())
            adminpage->setObjectName("adminpage");
        adminpage->resize(800, 600);
        layoutWidget = new QWidget(adminpage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(5, 11, 771, 561));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tasksView = new QTableView(layoutWidget);
        tasksView->setObjectName("tasksView");

        horizontalLayout->addWidget(tasksView);

        usersView = new QTableView(layoutWidget);
        usersView->setObjectName("usersView");

        horizontalLayout->addWidget(usersView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(adminpage);

        QMetaObject::connectSlotsByName(adminpage);
    } // setupUi

    void retranslateUi(QWidget *adminpage)
    {
        adminpage->setWindowTitle(QCoreApplication::translate("adminpage", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("adminpage", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminpage", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("adminpage", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("adminpage", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("adminpage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpage: public Ui_adminpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
