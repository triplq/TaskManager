/********************************************************************************
** Form generated from reading UI file 'completedtaskspage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETEDTASKSPAGE_H
#define UI_COMPLETEDTASKSPAGE_H

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

class Ui_CompletedTasksPage
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTableView *tasksView;
    QVBoxLayout *verticalLayout;
    QPushButton *closeButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CompletedTasksPage)
    {
        if (CompletedTasksPage->objectName().isEmpty())
            CompletedTasksPage->setObjectName("CompletedTasksPage");
        CompletedTasksPage->resize(480, 640);
        CompletedTasksPage->setMinimumSize(QSize(480, 640));
        CompletedTasksPage->setMaximumSize(QSize(480, 640));
        widget = new QWidget(CompletedTasksPage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(1, 4, 461, 631));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tasksView = new QTableView(widget);
        tasksView->setObjectName("tasksView");

        horizontalLayout->addWidget(tasksView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        closeButton = new QPushButton(widget);
        closeButton->setObjectName("closeButton");
        closeButton->setMaximumSize(QSize(60, 16777215));

        verticalLayout->addWidget(closeButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(CompletedTasksPage);
        QObject::connect(closeButton, &QPushButton::clicked, CompletedTasksPage, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(CompletedTasksPage);
    } // setupUi

    void retranslateUi(QWidget *CompletedTasksPage)
    {
        CompletedTasksPage->setWindowTitle(QCoreApplication::translate("CompletedTasksPage", "Form", nullptr));
        closeButton->setText(QCoreApplication::translate("CompletedTasksPage", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompletedTasksPage: public Ui_CompletedTasksPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETEDTASKSPAGE_H
