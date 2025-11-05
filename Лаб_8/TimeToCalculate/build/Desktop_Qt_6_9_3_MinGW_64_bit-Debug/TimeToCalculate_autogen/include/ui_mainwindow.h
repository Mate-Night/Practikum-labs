/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_output;
    QGridLayout *grid_num_Layout;
    QPushButton *pushButton_num_2;
    QPushButton *pushButton_num_8;
    QPushButton *pushButton_num_9;
    QPushButton *pushButton_num_0;
    QPushButton *pushButton_num_5;
    QPushButton *pushButton_num_3;
    QPushButton *pushButton_num_6;
    QPushButton *pushButton_num_7;
    QPushButton *pushButton_num_4;
    QPushButton *pushButton_num_1;
    QPushButton *pushButton_addition;
    QPushButton *pushButton_subtraction;
    QPushButton *pushButton_percentage;
    QPushButton *pushButton_multiplication;
    QPushButton *pushButton_num_calculate;
    QPushButton *pushButton_num_dot;
    QPushButton *pushButton_num_allClear;
    QPushButton *pushButton_division;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_positive_negative;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(268, 389);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MailAttachment));
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #212121"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_output = new QLabel(centralwidget);
        label_output->setObjectName("label_output");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_output->sizePolicy().hasHeightForWidth());
        label_output->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font.setPointSize(48);
        font.setBold(true);
        font.setItalic(true);
        label_output->setFont(font);
        label_output->setFrameShape(QFrame::Shape::Box);
        label_output->setFrameShadow(QFrame::Shadow::Sunken);
        label_output->setTextFormat(Qt::TextFormat::RichText);
        label_output->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_output);


        verticalLayout->addLayout(horizontalLayout);

        grid_num_Layout = new QGridLayout();
        grid_num_Layout->setSpacing(4);
        grid_num_Layout->setObjectName("grid_num_Layout");
        grid_num_Layout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        grid_num_Layout->setContentsMargins(4, 2, 4, 2);
        pushButton_num_2 = new QPushButton(centralwidget);
        pushButton_num_2->setObjectName("pushButton_num_2");
        sizePolicy1.setHeightForWidth(pushButton_num_2->sizePolicy().hasHeightForWidth());
        pushButton_num_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        pushButton_num_2->setFont(font1);
        pushButton_num_2->setAutoFillBackground(false);
        pushButton_num_2->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_2, 3, 2, 1, 1);

        pushButton_num_8 = new QPushButton(centralwidget);
        pushButton_num_8->setObjectName("pushButton_num_8");
        sizePolicy1.setHeightForWidth(pushButton_num_8->sizePolicy().hasHeightForWidth());
        pushButton_num_8->setSizePolicy(sizePolicy1);
        pushButton_num_8->setFont(font1);
        pushButton_num_8->setAutoFillBackground(false);
        pushButton_num_8->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_8, 1, 2, 1, 1);

        pushButton_num_9 = new QPushButton(centralwidget);
        pushButton_num_9->setObjectName("pushButton_num_9");
        sizePolicy1.setHeightForWidth(pushButton_num_9->sizePolicy().hasHeightForWidth());
        pushButton_num_9->setSizePolicy(sizePolicy1);
        pushButton_num_9->setFont(font1);
        pushButton_num_9->setAutoFillBackground(false);
        pushButton_num_9->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_9, 1, 3, 1, 1);

        pushButton_num_0 = new QPushButton(centralwidget);
        pushButton_num_0->setObjectName("pushButton_num_0");
        sizePolicy1.setHeightForWidth(pushButton_num_0->sizePolicy().hasHeightForWidth());
        pushButton_num_0->setSizePolicy(sizePolicy1);
        pushButton_num_0->setFont(font1);
        pushButton_num_0->setAutoFillBackground(false);
        pushButton_num_0->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_0, 4, 2, 1, 1);

        pushButton_num_5 = new QPushButton(centralwidget);
        pushButton_num_5->setObjectName("pushButton_num_5");
        sizePolicy1.setHeightForWidth(pushButton_num_5->sizePolicy().hasHeightForWidth());
        pushButton_num_5->setSizePolicy(sizePolicy1);
        pushButton_num_5->setFont(font1);
        pushButton_num_5->setAutoFillBackground(false);
        pushButton_num_5->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_5, 2, 2, 1, 1);

        pushButton_num_3 = new QPushButton(centralwidget);
        pushButton_num_3->setObjectName("pushButton_num_3");
        sizePolicy1.setHeightForWidth(pushButton_num_3->sizePolicy().hasHeightForWidth());
        pushButton_num_3->setSizePolicy(sizePolicy1);
        pushButton_num_3->setFont(font1);
        pushButton_num_3->setAutoFillBackground(false);
        pushButton_num_3->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_3, 3, 3, 1, 1);

        pushButton_num_6 = new QPushButton(centralwidget);
        pushButton_num_6->setObjectName("pushButton_num_6");
        sizePolicy1.setHeightForWidth(pushButton_num_6->sizePolicy().hasHeightForWidth());
        pushButton_num_6->setSizePolicy(sizePolicy1);
        pushButton_num_6->setFont(font1);
        pushButton_num_6->setAutoFillBackground(false);
        pushButton_num_6->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_6, 2, 3, 1, 1);

        pushButton_num_7 = new QPushButton(centralwidget);
        pushButton_num_7->setObjectName("pushButton_num_7");
        sizePolicy1.setHeightForWidth(pushButton_num_7->sizePolicy().hasHeightForWidth());
        pushButton_num_7->setSizePolicy(sizePolicy1);
        pushButton_num_7->setFont(font1);
        pushButton_num_7->setAutoFillBackground(false);
        pushButton_num_7->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_7, 1, 0, 1, 1);

        pushButton_num_4 = new QPushButton(centralwidget);
        pushButton_num_4->setObjectName("pushButton_num_4");
        sizePolicy1.setHeightForWidth(pushButton_num_4->sizePolicy().hasHeightForWidth());
        pushButton_num_4->setSizePolicy(sizePolicy1);
        pushButton_num_4->setFont(font1);
        pushButton_num_4->setAutoFillBackground(false);
        pushButton_num_4->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_4, 2, 0, 1, 1);

        pushButton_num_1 = new QPushButton(centralwidget);
        pushButton_num_1->setObjectName("pushButton_num_1");
        sizePolicy1.setHeightForWidth(pushButton_num_1->sizePolicy().hasHeightForWidth());
        pushButton_num_1->setSizePolicy(sizePolicy1);
        pushButton_num_1->setFont(font1);
        pushButton_num_1->setAutoFillBackground(false);
        pushButton_num_1->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_1, 3, 0, 1, 1);

        pushButton_addition = new QPushButton(centralwidget);
        pushButton_addition->setObjectName("pushButton_addition");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_addition->sizePolicy().hasHeightForWidth());
        pushButton_addition->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font2.setPointSize(20);
        font2.setBold(true);
        pushButton_addition->setFont(font2);
        pushButton_addition->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_addition, 3, 4, 1, 1);

        pushButton_subtraction = new QPushButton(centralwidget);
        pushButton_subtraction->setObjectName("pushButton_subtraction");
        sizePolicy2.setHeightForWidth(pushButton_subtraction->sizePolicy().hasHeightForWidth());
        pushButton_subtraction->setSizePolicy(sizePolicy2);
        pushButton_subtraction->setFont(font2);
        pushButton_subtraction->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_subtraction, 2, 4, 1, 1);

        pushButton_percentage = new QPushButton(centralwidget);
        pushButton_percentage->setObjectName("pushButton_percentage");
        sizePolicy2.setHeightForWidth(pushButton_percentage->sizePolicy().hasHeightForWidth());
        pushButton_percentage->setSizePolicy(sizePolicy2);
        pushButton_percentage->setFont(font2);
        pushButton_percentage->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_percentage, 0, 2, 1, 1);

        pushButton_multiplication = new QPushButton(centralwidget);
        pushButton_multiplication->setObjectName("pushButton_multiplication");
        sizePolicy2.setHeightForWidth(pushButton_multiplication->sizePolicy().hasHeightForWidth());
        pushButton_multiplication->setSizePolicy(sizePolicy2);
        pushButton_multiplication->setFont(font2);
        pushButton_multiplication->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_multiplication, 1, 4, 1, 1);

        pushButton_num_calculate = new QPushButton(centralwidget);
        pushButton_num_calculate->setObjectName("pushButton_num_calculate");
        sizePolicy1.setHeightForWidth(pushButton_num_calculate->sizePolicy().hasHeightForWidth());
        pushButton_num_calculate->setSizePolicy(sizePolicy1);
        pushButton_num_calculate->setFont(font2);
        pushButton_num_calculate->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_num_calculate, 4, 4, 1, 1);

        pushButton_num_dot = new QPushButton(centralwidget);
        pushButton_num_dot->setObjectName("pushButton_num_dot");
        sizePolicy1.setHeightForWidth(pushButton_num_dot->sizePolicy().hasHeightForWidth());
        pushButton_num_dot->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font3.setPointSize(18);
        font3.setBold(true);
        pushButton_num_dot->setFont(font3);
        pushButton_num_dot->setStyleSheet(QString::fromUtf8("background-color: #424242"));

        grid_num_Layout->addWidget(pushButton_num_dot, 4, 3, 1, 1);

        pushButton_num_allClear = new QPushButton(centralwidget);
        pushButton_num_allClear->setObjectName("pushButton_num_allClear");
        sizePolicy1.setHeightForWidth(pushButton_num_allClear->sizePolicy().hasHeightForWidth());
        pushButton_num_allClear->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Comic Sans MS")});
        font4.setPointSize(14);
        font4.setBold(true);
        pushButton_num_allClear->setFont(font4);
        pushButton_num_allClear->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_num_allClear, 4, 0, 1, 1);

        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName("pushButton_division");
        sizePolicy2.setHeightForWidth(pushButton_division->sizePolicy().hasHeightForWidth());
        pushButton_division->setSizePolicy(sizePolicy2);
        pushButton_division->setFont(font2);
        pushButton_division->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_division, 0, 3, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName("pushButton_clear");
        sizePolicy2.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy2);
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_clear, 0, 4, 1, 1);

        pushButton_positive_negative = new QPushButton(centralwidget);
        pushButton_positive_negative->setObjectName("pushButton_positive_negative");
        sizePolicy2.setHeightForWidth(pushButton_positive_negative->sizePolicy().hasHeightForWidth());
        pushButton_positive_negative->setSizePolicy(sizePolicy2);
        pushButton_positive_negative->setFont(font2);
        pushButton_positive_negative->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 90, 141);"));

        grid_num_Layout->addWidget(pushButton_positive_negative, 0, 0, 1, 1);


        verticalLayout->addLayout(grid_num_Layout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calcy", nullptr));
        label_output->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_num_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_num_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_num_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_num_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_num_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_num_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_num_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_num_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_num_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_num_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_addition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_subtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_percentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_multiplication->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_num_calculate->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_num_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_num_allClear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_positive_negative->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
