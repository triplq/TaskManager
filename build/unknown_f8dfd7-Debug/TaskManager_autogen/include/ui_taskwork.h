/********************************************************************************
** Form generated from reading UI file 'taskwork.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKWORK_H
#define UI_TASKWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskWork
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *taskEdit;
    QCheckBox *statusBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *okButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TaskWork)
    {
        if (TaskWork->objectName().isEmpty())
            TaskWork->setObjectName("TaskWork");
        TaskWork->resize(240, 320);
        TaskWork->setMinimumSize(QSize(240, 320));
        TaskWork->setMaximumSize(QSize(240, 320));
        widget = new QWidget(TaskWork);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 221, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName("nameEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        taskEdit = new QLineEdit(widget);
        taskEdit->setObjectName("taskEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, taskEdit);

        statusBox = new QCheckBox(widget);
        statusBox->setObjectName("statusBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, statusBox);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        okButton = new QPushButton(widget);
        okButton->setObjectName("okButton");

        horizontalLayout->addWidget(okButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TaskWork);
        QObject::connect(pushButton_2, &QPushButton::clicked, TaskWork, qOverload<>(&QDialog::close));

        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(TaskWork);
    } // setupUi

    void retranslateUi(QDialog *TaskWork)
    {
        TaskWork->setWindowTitle(QCoreApplication::translate("TaskWork", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TaskWork", "\320\230\320\274\321\217:", nullptr));
        label_2->setText(QCoreApplication::translate("TaskWork", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265:", nullptr));
        statusBox->setText(QCoreApplication::translate("TaskWork", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\276", nullptr));
        okButton->setText(QCoreApplication::translate("TaskWork", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TaskWork", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskWork: public Ui_TaskWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKWORK_H
