/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QTreeView *treeView;
    QTreeView *treeView_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1036, 604);
        Dialog->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Pictures/2f7102a877fbe969737669732912b6f3.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog->setWindowIcon(icon);
        Dialog->setAutoFillBackground(true);
        Dialog->setSizeGripEnabled(false);
        Dialog->setModal(false);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 540, 1021, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Desktop/\321\201\320\276\320\267\320\264\320\260\321\202\321\214.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);

        horizontalLayout->addWidget(pushButton_6);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Desktop/\321\201\321\207\320\274.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../Desktop/\320\262\321\201\321\202\320\260\320\262\320\270\321\202\321\214.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../Desktop/\321\203\320\264\320\260\320\273\320\270\321\202\321\214.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../Desktop/\321\201\320\277\321\200\320\260\320\262\320\272\320\260.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8(""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Desktop/\320\262\321\213\321\205\320\276\320\264.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon6);

        horizontalLayout->addWidget(pushButton_5);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 1021, 521));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeView = new QTreeView(layoutWidget1);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout_2->addWidget(treeView);

        treeView_2 = new QTreeView(layoutWidget1);
        treeView_2->setObjectName(QString::fromUtf8("treeView_2"));

        horizontalLayout_2->addWidget(treeView_2);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\277\320\260\320\277\320\272\321\203", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" text-decoration: underline; color:#ff0000;\">\320\237\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 \320\275\320\260 \320\272\320\275\320\276\320\277\320\272\321\203, \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\267\320\260\320\272\321\200\320\276\320\265\321\202\321\201\321\217</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
