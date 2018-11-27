#include "inputdialog.h"
#include <QDebug>
#include <QPointer>


InputDialog::InputDialog(QWidget *parent, const QString &title, InputDialog::Mode inputMode)
	: QDialog(parent, Qt::WindowTitleHint | Qt::WindowCloseButtonHint), caps(false), mode(inputMode), closeWhenDone(false), maxLength(-1)
{
	ui.setupUi(this);
	setAttribute(Qt::WA_DeleteOnClose); // Let Qt takes care of the deletion by itself.

	if (title != 0)
		this->setWindowTitle(title);

	if (mode == InputDialog::Mode_AlphabetOnly) 
	{
		ui.pb_number->setEnabled(false);
	} 
	else if (mode == InputDialog::Mode_NumberOnly)
	{
		ui.stackedWidget->setCurrentIndex(InputDialog::Page_Number);
		ui.pb_number_abc->setEnabled(false);
	}

	setupSignal();
	ui.label_status->hide();
}

InputDialog::~InputDialog()
{
	
}

void InputDialog::setFilter(const QString &f)
{
	filter = f;
	ui.label_status->show();
}

void InputDialog::setText(const QString &s)
{
	ui.pte->insertPlainText(s);
}

void InputDialog::setCloseWhenDone(bool b)
{
	closeWhenDone = b;
}

void InputDialog::setMaxLength(int len)
{
	maxLength = len;
	ui.label_status->show();
}
void InputDialog::insert()
{
	if (ui.pte->toPlainText().count() == maxLength) 
	{
		ui.label_status->setText("Reach the maximun length.");
		return;
	}

	QPushButton *button = qobject_cast<QPushButton*>(sender());
	QVariant val = button->property("value");
	QChar c = val.toChar();

	if (filter.length() > 0)
	{
		if (!filter.contains(QString(c)))
		{
			ui.label_status->setText("Invalid input.");
			return;
		}
		ui.label_status->setText("Valid.");
	}

	if (caps)
	{
		c = c.toUpper(); // do nothing when pass in symbol
	}

	sendKeyEvent(c.unicode());
}

void InputDialog::del()
{
	sendKeyEvent(Qt::Key_Backspace);
}

void InputDialog::sendKeyEvent(int key)
{
    QKeyEvent keyPress(QEvent::KeyPress, key, Qt::NoModifier, QString(key));
    QApplication::sendEvent(ui.pte, &keyPress);

    QKeyEvent keyRelease(QEvent::KeyRelease, key, Qt::NoModifier, QString());
    QApplication::sendEvent(ui.pte, &keyRelease);
}

void InputDialog::togglePage()
{
	int i = ui.stackedWidget->currentIndex();
	if (InputDialog::Page_Alphabet == i)
	{
		ui.stackedWidget->setCurrentIndex(InputDialog::Page_Number);
	}
	else
	{
		ui.stackedWidget->setCurrentIndex(InputDialog::Page_Alphabet);
	}
}

void InputDialog::toggleCaps()
{
	if (!caps)
	{
		ui.pb_a->setText("A");
		ui.pb_b->setText("B");
		ui.pb_c->setText("C");
		ui.pb_d->setText("D");
		ui.pb_e->setText("E");
		ui.pb_f->setText("F");
		ui.pb_g->setText("G");
		ui.pb_h->setText("H");
		ui.pb_i->setText("I");
		ui.pb_j->setText("J");
		ui.pb_k->setText("K");
		ui.pb_l->setText("L");
		ui.pb_m->setText("M");
		ui.pb_n->setText("N");
		ui.pb_o->setText("O");
		ui.pb_p->setText("P");
		ui.pb_q->setText("Q");
		ui.pb_r->setText("R");
		ui.pb_s->setText("S");
		ui.pb_t->setText("T");
		ui.pb_u->setText("U");
		ui.pb_v->setText("V");
		ui.pb_w->setText("W");
		ui.pb_x->setText("X");
		ui.pb_y->setText("Y");
		ui.pb_z->setText("Z");
		ui.pb_caps->setText("CAPS");
		ui.pb_number_abc->setText("ABC");
	} else {
		ui.pb_a->setText("a");
		ui.pb_b->setText("b");
		ui.pb_c->setText("c");
		ui.pb_d->setText("d");
		ui.pb_e->setText("e");
		ui.pb_f->setText("f");
		ui.pb_g->setText("g");
		ui.pb_h->setText("h");
		ui.pb_i->setText("i");
		ui.pb_j->setText("j");
		ui.pb_k->setText("k");
		ui.pb_l->setText("l");
		ui.pb_m->setText("m");
		ui.pb_n->setText("n");
		ui.pb_o->setText("o");
		ui.pb_p->setText("p");
		ui.pb_q->setText("q");
		ui.pb_r->setText("r");
		ui.pb_s->setText("s");
		ui.pb_t->setText("t");
		ui.pb_u->setText("u");
		ui.pb_v->setText("v");
		ui.pb_w->setText("w");
		ui.pb_x->setText("x");
		ui.pb_y->setText("y");
		ui.pb_z->setText("z");
		ui.pb_caps->setText("caps");
		ui.pb_number_abc->setText("abc");
	}
	caps = !caps;
}

void InputDialog::done()
{
	emit done(ui.pte->toPlainText());
	if (closeWhenDone)
	{
		close();
	}
}

void InputDialog::setupSignal()
{
	if (mode != InputDialog::Mode_NumberOnly) 
	{
		connect(ui.pb_a, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_b, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_c, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_d, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_e, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_f, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_g, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_h, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_i, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_j, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_k, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_l, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_m, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_n, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_o, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_p, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_q, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_r, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_s, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_t, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_u, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_v, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_w, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_x, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_y, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_z, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_space, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_caps, SIGNAL(clicked()), this, SLOT(toggleCaps()));
		connect(ui.pb_number, SIGNAL(clicked()), this, SLOT(togglePage()));
		connect(ui.pb_del, SIGNAL(clicked()), this, SLOT(del()));
		connect(ui.pb_done, SIGNAL(clicked()), this, SLOT(done()));
	}

	if (mode != InputDialog::Mode_AlphabetOnly)
	{
		connect(ui.pb_number_1, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_2, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_3, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_4, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_5, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_6, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_7, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_8, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_9, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_0, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_acute, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_ampersand, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_asterisk, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_at, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_back_slash, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_close_bracket, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_colon, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_comma, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_dollor_sign, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_dot, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_double_acute, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_exclamation_mark, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_hyphen, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_number_sign, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_open_bracket, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_percentage, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_plus, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_question_mark, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_sym_underscore, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_space, SIGNAL(clicked()), this, SLOT(insert()));
		connect(ui.pb_number_abc, SIGNAL(clicked()), this, SLOT(togglePage()));
		connect(ui.pb_number_del, SIGNAL(clicked()), this, SLOT(del()));
		connect(ui.pb_number_done, SIGNAL(clicked()), this, SLOT(done()));
	}
}

