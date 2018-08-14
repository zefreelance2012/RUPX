// Copyright (c) 2011-2013 The Bitcoin developers
// Copyright (c) 2017 The Rupaya developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RUPAYA_QT_OPENURIDIALOG_H
#define RUPAYA_QT_OPENURIDIALOG_H

#include <QDialog>

namespace Ui
{
class OpenURIDialog;
}

class OpenURIDialog : public QDialog
{
    Q_OBJECT

public:
    explicit OpenURIDialog(QWidget* parent);
    ~OpenURIDialog();

    QString getURI();

protected slots:
    void accept();

private slots:
    void on_selectFileButton_clicked();

private:
    Ui::OpenURIDialog* ui;
};

#endif // RUPAYA_QT_OPENURIDIALOG_H
