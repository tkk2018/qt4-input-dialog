/********************************************************************************
** Form generated from reading UI file 'inputdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDIALOG_H
#define UI_INPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *pte;
    QStackedWidget *stackedWidget;
    QWidget *page_abc;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *abc_row_1;
    QPushButton *pb_q;
    QPushButton *pb_w;
    QPushButton *pb_e;
    QPushButton *pb_r;
    QPushButton *pb_t;
    QPushButton *pb_y;
    QPushButton *pb_u;
    QPushButton *pb_i;
    QPushButton *pb_o;
    QPushButton *pb_p;
    QHBoxLayout *abc_row_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_a;
    QPushButton *pb_s;
    QPushButton *pb_d;
    QPushButton *pb_f;
    QPushButton *pb_g;
    QPushButton *pb_h;
    QPushButton *pb_j;
    QPushButton *pb_k;
    QPushButton *pb_l;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *abc_row_3;
    QPushButton *pb_caps;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_z;
    QPushButton *pb_x;
    QPushButton *pb_c;
    QPushButton *pb_v;
    QPushButton *pb_b;
    QPushButton *pb_n;
    QPushButton *pb_m;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_del;
    QHBoxLayout *abc_row_4;
    QPushButton *pb_number;
    QPushButton *pb_space;
    QPushButton *pb_done;
    QWidget *page_number;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *number_row_1;
    QPushButton *pb_number_1;
    QPushButton *pb_number_2;
    QPushButton *pb_number_3;
    QPushButton *pb_number_4;
    QPushButton *pb_number_5;
    QPushButton *pb_number_6;
    QPushButton *pb_number_7;
    QPushButton *pb_number_8;
    QPushButton *pb_number_9;
    QPushButton *pb_number_0;
    QHBoxLayout *number_row_2;
    QPushButton *pb_sym_exclamation_mark;
    QPushButton *pb_sym_at;
    QPushButton *pb_sym_number_sign;
    QPushButton *pb_sym_dollor_sign;
    QPushButton *pb_sym_percentage;
    QPushButton *pb_sym_ampersand;
    QPushButton *pb_sym_plus;
    QPushButton *pb_sym_question_mark;
    QPushButton *pb_sym_back_slash;
    QPushButton *pb_sym_dot;
    QHBoxLayout *number_row_3;
    QPushButton *pb_sym_asterisk;
    QPushButton *pb_sym_underscore;
    QPushButton *pb_sym_double_acute;
    QPushButton *pb_sym_acute;
    QPushButton *pb_sym_open_bracket;
    QPushButton *pb_sym_close_bracket;
    QPushButton *pb_sym_hyphen;
    QPushButton *pb_sym_colon;
    QPushButton *pb_sym_comma;
    QPushButton *pb_number_del;
    QHBoxLayout *number_row_4;
    QPushButton *pb_number_abc;
    QPushButton *pb_number_space;
    QPushButton *pb_number_done;
    QLabel *label_status;

    void setupUi(QDialog *InputDialog)
    {
        if (InputDialog->objectName().isEmpty())
            InputDialog->setObjectName(QString::fromUtf8("InputDialog"));
        InputDialog->resize(442, 239);
        verticalLayout = new QVBoxLayout(InputDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        pte = new QPlainTextEdit(InputDialog);
        pte->setObjectName(QString::fromUtf8("pte"));
        pte->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(pte);

        stackedWidget = new QStackedWidget(InputDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 0));
        page_abc = new QWidget();
        page_abc->setObjectName(QString::fromUtf8("page_abc"));
        verticalLayout_2 = new QVBoxLayout(page_abc);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        abc_row_1 = new QHBoxLayout();
        abc_row_1->setSpacing(6);
        abc_row_1->setObjectName(QString::fromUtf8("abc_row_1"));
        pb_q = new QPushButton(page_abc);
        pb_q->setObjectName(QString::fromUtf8("pb_q"));
        pb_q->setMinimumSize(QSize(35, 0));
        pb_q->setProperty("value", QVariant(QChar(113)));

        abc_row_1->addWidget(pb_q);

        pb_w = new QPushButton(page_abc);
        pb_w->setObjectName(QString::fromUtf8("pb_w"));
        pb_w->setMinimumSize(QSize(35, 0));
        pb_w->setProperty("value", QVariant(QChar(119)));

        abc_row_1->addWidget(pb_w);

        pb_e = new QPushButton(page_abc);
        pb_e->setObjectName(QString::fromUtf8("pb_e"));
        pb_e->setMinimumSize(QSize(35, 0));
        pb_e->setProperty("value", QVariant(QChar(101)));

        abc_row_1->addWidget(pb_e);

        pb_r = new QPushButton(page_abc);
        pb_r->setObjectName(QString::fromUtf8("pb_r"));
        pb_r->setMinimumSize(QSize(35, 0));
        pb_r->setProperty("value", QVariant(QChar(114)));

        abc_row_1->addWidget(pb_r);

        pb_t = new QPushButton(page_abc);
        pb_t->setObjectName(QString::fromUtf8("pb_t"));
        pb_t->setMinimumSize(QSize(35, 0));
        pb_t->setProperty("value", QVariant(QChar(116)));

        abc_row_1->addWidget(pb_t);

        pb_y = new QPushButton(page_abc);
        pb_y->setObjectName(QString::fromUtf8("pb_y"));
        pb_y->setMinimumSize(QSize(35, 0));
        pb_y->setProperty("value", QVariant(QChar(121)));

        abc_row_1->addWidget(pb_y);

        pb_u = new QPushButton(page_abc);
        pb_u->setObjectName(QString::fromUtf8("pb_u"));
        pb_u->setMinimumSize(QSize(35, 0));
        pb_u->setProperty("value", QVariant(QChar(117)));

        abc_row_1->addWidget(pb_u);

        pb_i = new QPushButton(page_abc);
        pb_i->setObjectName(QString::fromUtf8("pb_i"));
        pb_i->setMinimumSize(QSize(35, 0));
        pb_i->setProperty("value", QVariant(QChar(105)));

        abc_row_1->addWidget(pb_i);

        pb_o = new QPushButton(page_abc);
        pb_o->setObjectName(QString::fromUtf8("pb_o"));
        pb_o->setMinimumSize(QSize(35, 0));
        pb_o->setProperty("value", QVariant(QChar(111)));

        abc_row_1->addWidget(pb_o);

        pb_p = new QPushButton(page_abc);
        pb_p->setObjectName(QString::fromUtf8("pb_p"));
        pb_p->setMinimumSize(QSize(35, 0));
        pb_p->setProperty("value", QVariant(QChar(112)));

        abc_row_1->addWidget(pb_p);


        verticalLayout_2->addLayout(abc_row_1);

        abc_row_2 = new QHBoxLayout();
        abc_row_2->setSpacing(6);
        abc_row_2->setObjectName(QString::fromUtf8("abc_row_2"));
        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        abc_row_2->addItem(horizontalSpacer_2);

        pb_a = new QPushButton(page_abc);
        pb_a->setObjectName(QString::fromUtf8("pb_a"));
        pb_a->setMinimumSize(QSize(35, 0));
        pb_a->setProperty("value", QVariant(QChar(97)));

        abc_row_2->addWidget(pb_a);

        pb_s = new QPushButton(page_abc);
        pb_s->setObjectName(QString::fromUtf8("pb_s"));
        pb_s->setMinimumSize(QSize(35, 0));
        pb_s->setProperty("value", QVariant(QChar(115)));

        abc_row_2->addWidget(pb_s);

        pb_d = new QPushButton(page_abc);
        pb_d->setObjectName(QString::fromUtf8("pb_d"));
        pb_d->setMinimumSize(QSize(35, 0));
        pb_d->setProperty("value", QVariant(QChar(100)));

        abc_row_2->addWidget(pb_d);

        pb_f = new QPushButton(page_abc);
        pb_f->setObjectName(QString::fromUtf8("pb_f"));
        pb_f->setMinimumSize(QSize(35, 0));
        pb_f->setProperty("value", QVariant(QChar(102)));

        abc_row_2->addWidget(pb_f);

        pb_g = new QPushButton(page_abc);
        pb_g->setObjectName(QString::fromUtf8("pb_g"));
        pb_g->setMinimumSize(QSize(35, 0));
        pb_g->setProperty("value", QVariant(QChar(103)));

        abc_row_2->addWidget(pb_g);

        pb_h = new QPushButton(page_abc);
        pb_h->setObjectName(QString::fromUtf8("pb_h"));
        pb_h->setMinimumSize(QSize(35, 0));
        pb_h->setProperty("value", QVariant(QChar(104)));

        abc_row_2->addWidget(pb_h);

        pb_j = new QPushButton(page_abc);
        pb_j->setObjectName(QString::fromUtf8("pb_j"));
        pb_j->setMinimumSize(QSize(35, 0));
        pb_j->setProperty("value", QVariant(QChar(106)));

        abc_row_2->addWidget(pb_j);

        pb_k = new QPushButton(page_abc);
        pb_k->setObjectName(QString::fromUtf8("pb_k"));
        pb_k->setMinimumSize(QSize(35, 0));
        pb_k->setProperty("value", QVariant(QChar(107)));

        abc_row_2->addWidget(pb_k);

        pb_l = new QPushButton(page_abc);
        pb_l->setObjectName(QString::fromUtf8("pb_l"));
        pb_l->setMinimumSize(QSize(35, 0));
        pb_l->setProperty("value", QVariant(QChar(108)));

        abc_row_2->addWidget(pb_l);

        horizontalSpacer_4 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        abc_row_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(abc_row_2);

        abc_row_3 = new QHBoxLayout();
        abc_row_3->setSpacing(6);
        abc_row_3->setObjectName(QString::fromUtf8("abc_row_3"));
        pb_caps = new QPushButton(page_abc);
        pb_caps->setObjectName(QString::fromUtf8("pb_caps"));
        pb_caps->setMinimumSize(QSize(35, 0));

        abc_row_3->addWidget(pb_caps);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        abc_row_3->addItem(horizontalSpacer);

        pb_z = new QPushButton(page_abc);
        pb_z->setObjectName(QString::fromUtf8("pb_z"));
        pb_z->setMinimumSize(QSize(35, 0));
        pb_z->setProperty("value", QVariant(QChar(122)));

        abc_row_3->addWidget(pb_z);

        pb_x = new QPushButton(page_abc);
        pb_x->setObjectName(QString::fromUtf8("pb_x"));
        pb_x->setMinimumSize(QSize(35, 0));
        pb_x->setProperty("value", QVariant(QChar(120)));

        abc_row_3->addWidget(pb_x);

        pb_c = new QPushButton(page_abc);
        pb_c->setObjectName(QString::fromUtf8("pb_c"));
        pb_c->setMinimumSize(QSize(35, 0));
        pb_c->setProperty("value", QVariant(QChar(99)));

        abc_row_3->addWidget(pb_c);

        pb_v = new QPushButton(page_abc);
        pb_v->setObjectName(QString::fromUtf8("pb_v"));
        pb_v->setMinimumSize(QSize(35, 0));
        pb_v->setProperty("value", QVariant(QChar(118)));

        abc_row_3->addWidget(pb_v);

        pb_b = new QPushButton(page_abc);
        pb_b->setObjectName(QString::fromUtf8("pb_b"));
        pb_b->setMinimumSize(QSize(35, 0));
        pb_b->setProperty("value", QVariant(QChar(98)));

        abc_row_3->addWidget(pb_b);

        pb_n = new QPushButton(page_abc);
        pb_n->setObjectName(QString::fromUtf8("pb_n"));
        pb_n->setMinimumSize(QSize(35, 0));
        pb_n->setProperty("value", QVariant(QChar(110)));

        abc_row_3->addWidget(pb_n);

        pb_m = new QPushButton(page_abc);
        pb_m->setObjectName(QString::fromUtf8("pb_m"));
        pb_m->setMinimumSize(QSize(35, 0));
        pb_m->setProperty("value", QVariant(QChar(109)));

        abc_row_3->addWidget(pb_m);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        abc_row_3->addItem(horizontalSpacer_3);

        pb_del = new QPushButton(page_abc);
        pb_del->setObjectName(QString::fromUtf8("pb_del"));
        pb_del->setMinimumSize(QSize(35, 0));
        pb_del->setAutoRepeat(true);

        abc_row_3->addWidget(pb_del);


        verticalLayout_2->addLayout(abc_row_3);

        abc_row_4 = new QHBoxLayout();
        abc_row_4->setSpacing(6);
        abc_row_4->setObjectName(QString::fromUtf8("abc_row_4"));
        pb_number = new QPushButton(page_abc);
        pb_number->setObjectName(QString::fromUtf8("pb_number"));
        pb_number->setMinimumSize(QSize(35, 0));

        abc_row_4->addWidget(pb_number);

        pb_space = new QPushButton(page_abc);
        pb_space->setObjectName(QString::fromUtf8("pb_space"));
        pb_space->setMinimumSize(QSize(30, 0));
        pb_space->setProperty("value", QVariant(QChar(32)));

        abc_row_4->addWidget(pb_space);

        pb_done = new QPushButton(page_abc);
        pb_done->setObjectName(QString::fromUtf8("pb_done"));
        pb_done->setMinimumSize(QSize(35, 0));

        abc_row_4->addWidget(pb_done);

        abc_row_4->setStretch(0, 1);
        abc_row_4->setStretch(1, 8);
        abc_row_4->setStretch(2, 1);

        verticalLayout_2->addLayout(abc_row_4);

        stackedWidget->addWidget(page_abc);
        page_number = new QWidget();
        page_number->setObjectName(QString::fromUtf8("page_number"));
        verticalLayout_3 = new QVBoxLayout(page_number);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        number_row_1 = new QHBoxLayout();
        number_row_1->setSpacing(6);
        number_row_1->setObjectName(QString::fromUtf8("number_row_1"));
        pb_number_1 = new QPushButton(page_number);
        pb_number_1->setObjectName(QString::fromUtf8("pb_number_1"));
        pb_number_1->setMinimumSize(QSize(35, 0));
        pb_number_1->setProperty("value", QVariant(QChar(49)));

        number_row_1->addWidget(pb_number_1);

        pb_number_2 = new QPushButton(page_number);
        pb_number_2->setObjectName(QString::fromUtf8("pb_number_2"));
        pb_number_2->setMinimumSize(QSize(35, 0));
        pb_number_2->setProperty("value", QVariant(QChar(50)));

        number_row_1->addWidget(pb_number_2);

        pb_number_3 = new QPushButton(page_number);
        pb_number_3->setObjectName(QString::fromUtf8("pb_number_3"));
        pb_number_3->setMinimumSize(QSize(35, 0));
        pb_number_3->setProperty("value", QVariant(QChar(51)));

        number_row_1->addWidget(pb_number_3);

        pb_number_4 = new QPushButton(page_number);
        pb_number_4->setObjectName(QString::fromUtf8("pb_number_4"));
        pb_number_4->setMinimumSize(QSize(35, 0));
        pb_number_4->setProperty("value", QVariant(QChar(52)));

        number_row_1->addWidget(pb_number_4);

        pb_number_5 = new QPushButton(page_number);
        pb_number_5->setObjectName(QString::fromUtf8("pb_number_5"));
        pb_number_5->setMinimumSize(QSize(35, 0));
        pb_number_5->setProperty("value", QVariant(QChar(53)));

        number_row_1->addWidget(pb_number_5);

        pb_number_6 = new QPushButton(page_number);
        pb_number_6->setObjectName(QString::fromUtf8("pb_number_6"));
        pb_number_6->setMinimumSize(QSize(35, 0));
        pb_number_6->setProperty("value", QVariant(QChar(54)));

        number_row_1->addWidget(pb_number_6);

        pb_number_7 = new QPushButton(page_number);
        pb_number_7->setObjectName(QString::fromUtf8("pb_number_7"));
        pb_number_7->setMinimumSize(QSize(35, 0));
        pb_number_7->setProperty("value", QVariant(QChar(55)));

        number_row_1->addWidget(pb_number_7);

        pb_number_8 = new QPushButton(page_number);
        pb_number_8->setObjectName(QString::fromUtf8("pb_number_8"));
        pb_number_8->setMinimumSize(QSize(35, 0));
        pb_number_8->setProperty("value", QVariant(QChar(56)));

        number_row_1->addWidget(pb_number_8);

        pb_number_9 = new QPushButton(page_number);
        pb_number_9->setObjectName(QString::fromUtf8("pb_number_9"));
        pb_number_9->setMinimumSize(QSize(35, 0));
        pb_number_9->setProperty("value", QVariant(QChar(57)));

        number_row_1->addWidget(pb_number_9);

        pb_number_0 = new QPushButton(page_number);
        pb_number_0->setObjectName(QString::fromUtf8("pb_number_0"));
        pb_number_0->setMinimumSize(QSize(35, 0));
        pb_number_0->setProperty("value", QVariant(QChar(48)));

        number_row_1->addWidget(pb_number_0);


        verticalLayout_3->addLayout(number_row_1);

        number_row_2 = new QHBoxLayout();
        number_row_2->setSpacing(6);
        number_row_2->setObjectName(QString::fromUtf8("number_row_2"));
        pb_sym_exclamation_mark = new QPushButton(page_number);
        pb_sym_exclamation_mark->setObjectName(QString::fromUtf8("pb_sym_exclamation_mark"));
        pb_sym_exclamation_mark->setMinimumSize(QSize(35, 0));
        pb_sym_exclamation_mark->setProperty("value", QVariant(QChar(33)));

        number_row_2->addWidget(pb_sym_exclamation_mark);

        pb_sym_at = new QPushButton(page_number);
        pb_sym_at->setObjectName(QString::fromUtf8("pb_sym_at"));
        pb_sym_at->setMinimumSize(QSize(35, 0));
        pb_sym_at->setProperty("value", QVariant(QChar(64)));

        number_row_2->addWidget(pb_sym_at);

        pb_sym_number_sign = new QPushButton(page_number);
        pb_sym_number_sign->setObjectName(QString::fromUtf8("pb_sym_number_sign"));
        pb_sym_number_sign->setMinimumSize(QSize(35, 0));
        pb_sym_number_sign->setProperty("value", QVariant(QChar(35)));

        number_row_2->addWidget(pb_sym_number_sign);

        pb_sym_dollor_sign = new QPushButton(page_number);
        pb_sym_dollor_sign->setObjectName(QString::fromUtf8("pb_sym_dollor_sign"));
        pb_sym_dollor_sign->setMinimumSize(QSize(35, 0));
        pb_sym_dollor_sign->setProperty("value", QVariant(QChar(36)));

        number_row_2->addWidget(pb_sym_dollor_sign);

        pb_sym_percentage = new QPushButton(page_number);
        pb_sym_percentage->setObjectName(QString::fromUtf8("pb_sym_percentage"));
        pb_sym_percentage->setMinimumSize(QSize(35, 0));
        pb_sym_percentage->setProperty("value", QVariant(QChar(37)));

        number_row_2->addWidget(pb_sym_percentage);

        pb_sym_ampersand = new QPushButton(page_number);
        pb_sym_ampersand->setObjectName(QString::fromUtf8("pb_sym_ampersand"));
        pb_sym_ampersand->setMinimumSize(QSize(35, 0));
        pb_sym_ampersand->setProperty("value", QVariant(QChar(38)));

        number_row_2->addWidget(pb_sym_ampersand);

        pb_sym_plus = new QPushButton(page_number);
        pb_sym_plus->setObjectName(QString::fromUtf8("pb_sym_plus"));
        pb_sym_plus->setMinimumSize(QSize(35, 0));
        pb_sym_plus->setProperty("value", QVariant(QChar(43)));

        number_row_2->addWidget(pb_sym_plus);

        pb_sym_question_mark = new QPushButton(page_number);
        pb_sym_question_mark->setObjectName(QString::fromUtf8("pb_sym_question_mark"));
        pb_sym_question_mark->setMinimumSize(QSize(35, 0));
        pb_sym_question_mark->setProperty("value", QVariant(QChar(63)));

        number_row_2->addWidget(pb_sym_question_mark);

        pb_sym_back_slash = new QPushButton(page_number);
        pb_sym_back_slash->setObjectName(QString::fromUtf8("pb_sym_back_slash"));
        pb_sym_back_slash->setMinimumSize(QSize(35, 0));
        pb_sym_back_slash->setProperty("value", QVariant(QChar(47)));

        number_row_2->addWidget(pb_sym_back_slash);

        pb_sym_dot = new QPushButton(page_number);
        pb_sym_dot->setObjectName(QString::fromUtf8("pb_sym_dot"));
        pb_sym_dot->setMinimumSize(QSize(35, 0));
        pb_sym_dot->setProperty("value", QVariant(QChar(46)));

        number_row_2->addWidget(pb_sym_dot);


        verticalLayout_3->addLayout(number_row_2);

        number_row_3 = new QHBoxLayout();
        number_row_3->setSpacing(6);
        number_row_3->setObjectName(QString::fromUtf8("number_row_3"));
        pb_sym_asterisk = new QPushButton(page_number);
        pb_sym_asterisk->setObjectName(QString::fromUtf8("pb_sym_asterisk"));
        pb_sym_asterisk->setMinimumSize(QSize(35, 0));
        pb_sym_asterisk->setProperty("value", QVariant(QChar(42)));

        number_row_3->addWidget(pb_sym_asterisk);

        pb_sym_underscore = new QPushButton(page_number);
        pb_sym_underscore->setObjectName(QString::fromUtf8("pb_sym_underscore"));
        pb_sym_underscore->setMinimumSize(QSize(35, 0));
        pb_sym_underscore->setProperty("value", QVariant(QChar(95)));

        number_row_3->addWidget(pb_sym_underscore);

        pb_sym_double_acute = new QPushButton(page_number);
        pb_sym_double_acute->setObjectName(QString::fromUtf8("pb_sym_double_acute"));
        pb_sym_double_acute->setMinimumSize(QSize(35, 0));
        pb_sym_double_acute->setProperty("value", QVariant(QChar(34)));

        number_row_3->addWidget(pb_sym_double_acute);

        pb_sym_acute = new QPushButton(page_number);
        pb_sym_acute->setObjectName(QString::fromUtf8("pb_sym_acute"));
        pb_sym_acute->setMinimumSize(QSize(35, 0));
        pb_sym_acute->setProperty("value", QVariant(QChar(39)));

        number_row_3->addWidget(pb_sym_acute);

        pb_sym_open_bracket = new QPushButton(page_number);
        pb_sym_open_bracket->setObjectName(QString::fromUtf8("pb_sym_open_bracket"));
        pb_sym_open_bracket->setMinimumSize(QSize(35, 0));
        pb_sym_open_bracket->setProperty("value", QVariant(QChar(40)));

        number_row_3->addWidget(pb_sym_open_bracket);

        pb_sym_close_bracket = new QPushButton(page_number);
        pb_sym_close_bracket->setObjectName(QString::fromUtf8("pb_sym_close_bracket"));
        pb_sym_close_bracket->setMinimumSize(QSize(35, 0));
        pb_sym_close_bracket->setProperty("value", QVariant(QChar(41)));

        number_row_3->addWidget(pb_sym_close_bracket);

        pb_sym_hyphen = new QPushButton(page_number);
        pb_sym_hyphen->setObjectName(QString::fromUtf8("pb_sym_hyphen"));
        pb_sym_hyphen->setMinimumSize(QSize(35, 0));
        pb_sym_hyphen->setProperty("value", QVariant(QChar(45)));

        number_row_3->addWidget(pb_sym_hyphen);

        pb_sym_colon = new QPushButton(page_number);
        pb_sym_colon->setObjectName(QString::fromUtf8("pb_sym_colon"));
        pb_sym_colon->setMinimumSize(QSize(35, 0));
        pb_sym_colon->setProperty("value", QVariant(QChar(58)));

        number_row_3->addWidget(pb_sym_colon);

        pb_sym_comma = new QPushButton(page_number);
        pb_sym_comma->setObjectName(QString::fromUtf8("pb_sym_comma"));
        pb_sym_comma->setMinimumSize(QSize(35, 0));
        pb_sym_comma->setProperty("value", QVariant(QChar(44)));

        number_row_3->addWidget(pb_sym_comma);

        pb_number_del = new QPushButton(page_number);
        pb_number_del->setObjectName(QString::fromUtf8("pb_number_del"));
        pb_number_del->setMinimumSize(QSize(35, 0));
        pb_number_del->setAutoRepeat(true);

        number_row_3->addWidget(pb_number_del);


        verticalLayout_3->addLayout(number_row_3);

        number_row_4 = new QHBoxLayout();
        number_row_4->setSpacing(6);
        number_row_4->setObjectName(QString::fromUtf8("number_row_4"));
        pb_number_abc = new QPushButton(page_number);
        pb_number_abc->setObjectName(QString::fromUtf8("pb_number_abc"));
        pb_number_abc->setMinimumSize(QSize(35, 0));

        number_row_4->addWidget(pb_number_abc);

        pb_number_space = new QPushButton(page_number);
        pb_number_space->setObjectName(QString::fromUtf8("pb_number_space"));
        pb_number_space->setProperty("value", QVariant(QChar(32)));

        number_row_4->addWidget(pb_number_space);

        pb_number_done = new QPushButton(page_number);
        pb_number_done->setObjectName(QString::fromUtf8("pb_number_done"));
        pb_number_done->setMinimumSize(QSize(35, 0));

        number_row_4->addWidget(pb_number_done);

        number_row_4->setStretch(0, 1);
        number_row_4->setStretch(1, 8);
        number_row_4->setStretch(2, 1);

        verticalLayout_3->addLayout(number_row_4);

        stackedWidget->addWidget(page_number);

        verticalLayout->addWidget(stackedWidget);

        label_status = new QLabel(InputDialog);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setMinimumSize(QSize(0, 0));
        label_status->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_status);


        retranslateUi(InputDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InputDialog);
    } // setupUi

    void retranslateUi(QDialog *InputDialog)
    {
        InputDialog->setWindowTitle(QApplication::translate("InputDialog", "inputdialog", 0, QApplication::UnicodeUTF8));
        pb_q->setText(QApplication::translate("InputDialog", "q", 0, QApplication::UnicodeUTF8));
        pb_w->setText(QApplication::translate("InputDialog", "w", 0, QApplication::UnicodeUTF8));
        pb_e->setText(QApplication::translate("InputDialog", "e", 0, QApplication::UnicodeUTF8));
        pb_r->setText(QApplication::translate("InputDialog", "r", 0, QApplication::UnicodeUTF8));
        pb_t->setText(QApplication::translate("InputDialog", "t", 0, QApplication::UnicodeUTF8));
        pb_y->setText(QApplication::translate("InputDialog", "y", 0, QApplication::UnicodeUTF8));
        pb_u->setText(QApplication::translate("InputDialog", "u", 0, QApplication::UnicodeUTF8));
        pb_i->setText(QApplication::translate("InputDialog", "i", 0, QApplication::UnicodeUTF8));
        pb_o->setText(QApplication::translate("InputDialog", "o", 0, QApplication::UnicodeUTF8));
        pb_p->setText(QApplication::translate("InputDialog", "p", 0, QApplication::UnicodeUTF8));
        pb_a->setText(QApplication::translate("InputDialog", "a", 0, QApplication::UnicodeUTF8));
        pb_s->setText(QApplication::translate("InputDialog", "s", 0, QApplication::UnicodeUTF8));
        pb_d->setText(QApplication::translate("InputDialog", "d", 0, QApplication::UnicodeUTF8));
        pb_f->setText(QApplication::translate("InputDialog", "f", 0, QApplication::UnicodeUTF8));
        pb_g->setText(QApplication::translate("InputDialog", "g", 0, QApplication::UnicodeUTF8));
        pb_h->setText(QApplication::translate("InputDialog", "h", 0, QApplication::UnicodeUTF8));
        pb_j->setText(QApplication::translate("InputDialog", "j", 0, QApplication::UnicodeUTF8));
        pb_k->setText(QApplication::translate("InputDialog", "k", 0, QApplication::UnicodeUTF8));
        pb_l->setText(QApplication::translate("InputDialog", "l", 0, QApplication::UnicodeUTF8));
        pb_caps->setText(QApplication::translate("InputDialog", "caps", 0, QApplication::UnicodeUTF8));
        pb_z->setText(QApplication::translate("InputDialog", "z", 0, QApplication::UnicodeUTF8));
        pb_x->setText(QApplication::translate("InputDialog", "x", 0, QApplication::UnicodeUTF8));
        pb_c->setText(QApplication::translate("InputDialog", "c", 0, QApplication::UnicodeUTF8));
        pb_v->setText(QApplication::translate("InputDialog", "v", 0, QApplication::UnicodeUTF8));
        pb_b->setText(QApplication::translate("InputDialog", "b", 0, QApplication::UnicodeUTF8));
        pb_n->setText(QApplication::translate("InputDialog", "n", 0, QApplication::UnicodeUTF8));
        pb_m->setText(QApplication::translate("InputDialog", "m", 0, QApplication::UnicodeUTF8));
        pb_del->setText(QApplication::translate("InputDialog", "Del", 0, QApplication::UnicodeUTF8));
        pb_number->setText(QApplication::translate("InputDialog", "123", 0, QApplication::UnicodeUTF8));
        pb_space->setText(QApplication::translate("InputDialog", "Space", 0, QApplication::UnicodeUTF8));
        pb_done->setText(QApplication::translate("InputDialog", "Done", 0, QApplication::UnicodeUTF8));
        pb_number_1->setText(QApplication::translate("InputDialog", "1", 0, QApplication::UnicodeUTF8));
        pb_number_2->setText(QApplication::translate("InputDialog", "2", 0, QApplication::UnicodeUTF8));
        pb_number_3->setText(QApplication::translate("InputDialog", "3", 0, QApplication::UnicodeUTF8));
        pb_number_4->setText(QApplication::translate("InputDialog", "4", 0, QApplication::UnicodeUTF8));
        pb_number_5->setText(QApplication::translate("InputDialog", "5", 0, QApplication::UnicodeUTF8));
        pb_number_6->setText(QApplication::translate("InputDialog", "6", 0, QApplication::UnicodeUTF8));
        pb_number_7->setText(QApplication::translate("InputDialog", "7", 0, QApplication::UnicodeUTF8));
        pb_number_8->setText(QApplication::translate("InputDialog", "8", 0, QApplication::UnicodeUTF8));
        pb_number_9->setText(QApplication::translate("InputDialog", "9", 0, QApplication::UnicodeUTF8));
        pb_number_0->setText(QApplication::translate("InputDialog", "0", 0, QApplication::UnicodeUTF8));
        pb_sym_exclamation_mark->setText(QApplication::translate("InputDialog", "!", 0, QApplication::UnicodeUTF8));
        pb_sym_at->setText(QApplication::translate("InputDialog", "@", 0, QApplication::UnicodeUTF8));
        pb_sym_number_sign->setText(QApplication::translate("InputDialog", "#", 0, QApplication::UnicodeUTF8));
        pb_sym_dollor_sign->setText(QApplication::translate("InputDialog", "$", 0, QApplication::UnicodeUTF8));
        pb_sym_percentage->setText(QApplication::translate("InputDialog", "%", 0, QApplication::UnicodeUTF8));
        pb_sym_ampersand->setText(QApplication::translate("InputDialog", "&&", 0, QApplication::UnicodeUTF8));
        pb_sym_plus->setText(QApplication::translate("InputDialog", "+", 0, QApplication::UnicodeUTF8));
        pb_sym_question_mark->setText(QApplication::translate("InputDialog", "?", 0, QApplication::UnicodeUTF8));
        pb_sym_back_slash->setText(QApplication::translate("InputDialog", "/", 0, QApplication::UnicodeUTF8));
        pb_sym_dot->setText(QApplication::translate("InputDialog", ".", 0, QApplication::UnicodeUTF8));
        pb_sym_asterisk->setText(QApplication::translate("InputDialog", "*", 0, QApplication::UnicodeUTF8));
        pb_sym_underscore->setText(QApplication::translate("InputDialog", "_", 0, QApplication::UnicodeUTF8));
        pb_sym_double_acute->setText(QApplication::translate("InputDialog", "\"", 0, QApplication::UnicodeUTF8));
        pb_sym_acute->setText(QApplication::translate("InputDialog", "'", 0, QApplication::UnicodeUTF8));
        pb_sym_open_bracket->setText(QApplication::translate("InputDialog", "(", 0, QApplication::UnicodeUTF8));
        pb_sym_close_bracket->setText(QApplication::translate("InputDialog", ")", 0, QApplication::UnicodeUTF8));
        pb_sym_hyphen->setText(QApplication::translate("InputDialog", "-", 0, QApplication::UnicodeUTF8));
        pb_sym_colon->setText(QApplication::translate("InputDialog", ":", 0, QApplication::UnicodeUTF8));
        pb_sym_comma->setText(QApplication::translate("InputDialog", ",", 0, QApplication::UnicodeUTF8));
        pb_number_del->setText(QApplication::translate("InputDialog", "Del", 0, QApplication::UnicodeUTF8));
        pb_number_abc->setText(QApplication::translate("InputDialog", "abc", 0, QApplication::UnicodeUTF8));
        pb_number_space->setText(QApplication::translate("InputDialog", "Space", 0, QApplication::UnicodeUTF8));
        pb_number_done->setText(QApplication::translate("InputDialog", "Done", 0, QApplication::UnicodeUTF8));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InputDialog: public Ui_InputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDIALOG_H
