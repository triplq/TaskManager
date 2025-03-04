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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserPage
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTableView *tasksView;
    QVBoxLayout *verticalLayout;
    QPushButton *doneButton;
    QPushButton *showButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UserPage)
    {
        if (UserPage->objectName().isEmpty())
            UserPage->setObjectName("UserPage");
        UserPage->resize(800, 600);
        UserPage->setMinimumSize(QSize(800, 600));
        UserPage->setMaximumSize(QSize(800, 600));
        widget = new QWidget(UserPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 4, 771, 591));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tasksView = new QTableView(widget);
        tasksView->setObjectName("tasksView");

        horizontalLayout->addWidget(tasksView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        doneButton = new QPushButton(widget);
        doneButton->setObjectName("doneButton");
        doneButton->setMaximumSize(QSize(400, 16777215));

        verticalLayout->addWidget(doneButton);

        showButton = new QPushButton(widget);
        showButton->setObjectName("showButton");

        verticalLayout->addWidget(showButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(UserPage);

        doneButton->setDefault(true);


        QMetaObject::connectSlotsByName(UserPage);
    } // setupUi

    void retranslateUi(QWidget *UserPage)
    {
        UserPage->setWindowTitle(QCoreApplication::translate("UserPage", "Form", nullptr));
        doneButton->setText(QCoreApplication::translate("UserPage", "Done", nullptr));
        showButton->setText(QCoreApplication::translate("UserPage", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserPage: public Ui_UserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPAGE_H
