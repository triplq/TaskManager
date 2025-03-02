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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTableView *tasksView;
    QTableView *usersView;
    QPushButton *addTaskButton;

    void setupUi(QWidget *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName("AdminPage");
        AdminPage->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdminPage->sizePolicy().hasHeightForWidth());
        AdminPage->setSizePolicy(sizePolicy);
        AdminPage->setMinimumSize(QSize(800, 600));
        AdminPage->setMaximumSize(QSize(800, 600));
        widget = new QWidget(AdminPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-3, 3, 781, 581));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tasksView = new QTableView(widget);
        tasksView->setObjectName("tasksView");

        horizontalLayout->addWidget(tasksView);

        usersView = new QTableView(widget);
        usersView->setObjectName("usersView");

        horizontalLayout->addWidget(usersView);

        addTaskButton = new QPushButton(widget);
        addTaskButton->setObjectName("addTaskButton");

        horizontalLayout->addWidget(addTaskButton);


        retranslateUi(AdminPage);

        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QWidget *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Form", nullptr));
        addTaskButton->setText(QCoreApplication::translate("AdminPage", "Add Task", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
