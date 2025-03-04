/********************************************************************************
** Form generated from reading UI file 'taskworkdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKWORKDIALOG_H
#define UI_TASKWORKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskworkDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *taskEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *statusBox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *TaskworkDialog)
    {
        if (TaskworkDialog->objectName().isEmpty())
            TaskworkDialog->setObjectName("TaskworkDialog");
        TaskworkDialog->resize(240, 320);
        layoutWidget = new QWidget(TaskworkDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 11, 197, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName("nameEdit");

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        taskEdit = new QLineEdit(layoutWidget);
        taskEdit->setObjectName("taskEdit");

        gridLayout->addWidget(taskEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        statusBox = new QCheckBox(layoutWidget);
        statusBox->setObjectName("statusBox");

        horizontalLayout->addWidget(statusBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName("okButton");

        verticalLayout->addWidget(okButton);


        retranslateUi(TaskworkDialog);

        QMetaObject::connectSlotsByName(TaskworkDialog);
    } // setupUi

    void retranslateUi(QDialog *TaskworkDialog)
    {
        TaskworkDialog->setWindowTitle(QCoreApplication::translate("TaskworkDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TaskworkDialog", "\320\230\320\274\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("TaskworkDialog", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265", nullptr));
        statusBox->setText(QCoreApplication::translate("TaskworkDialog", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        okButton->setText(QCoreApplication::translate("TaskworkDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskworkDialog: public Ui_TaskworkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWORKDIALOG_H
