#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include "ui_inputdialog.h"


class InputDialog : public QDialog
{
	Q_OBJECT

public:
	enum Mode {
		Mode_Default,
		Mode_AlphabetOnly,
		Mode_NumberOnly,
	};

	enum Page {
		Page_Alphabet,
		Page_Number
	};

	InputDialog(QWidget *parent = 0,  const QString &title = 0, InputDialog::Mode InputDialog = InputDialog::Mode_Default);
	~InputDialog();

	const int mode;
	bool caps;
	QString filter;
	bool closeWhenDone;
	int maxLength;

private:
	Ui::InputDialog ui;
	void setupSignal();

signals:
	void done(const QString &text);

public slots:
	void setFilter(const QString & fileter);
	void setText(const QString & s);
	void setCloseWhenDone(bool);
	void setMaxLength(int);

private slots:
	void insert();
	void del();
	void sendKeyEvent(int key);
	void togglePage();
	void toggleCaps();
	void done();
};

#endif // INPUTDIALOG_H
