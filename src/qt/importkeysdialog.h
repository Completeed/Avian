// Copyright (c) 2021 The Ravencoin Lite Core developers 
// Copyright (c) 2021 The Dogecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

<<<<<<< HEAD
#ifndef AVIAN_QT_IMPORTKEYS_H
#define AVIAN_QT_IMPORTKEYS_H
=======
#ifndef RAVENLITE_QT_IMPORTKEYS_H
#define RAVENLITE_QT_IMPORTKEYS_H
>>>>>>> 5c221fd42c641eee3fbeae37afdd33a8d39efec4
class CWallet;
class CBlockIndex;

#include <QDialog>
#include <QThread>

class ImportKeysDialog;
class PlatformStyle;

namespace Ui {
class ImportKeysDialog;
}

/** Preferences dialog. */
class ImportKeysDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ImportKeysDialog(const PlatformStyle *_platformStyle, QWidget *parent = 0);
    ~ImportKeysDialog();

Q_SIGNALS:
    void stopExecutor();
    void rescanWallet(CWallet*, CBlockIndex*);

private:
    Ui::ImportKeysDialog *ui;
    const PlatformStyle *platformStyle;
    QThread thread;
    CWallet *pwalletMain = NULL;

private Q_SLOTS:
    /* set OK button state (enabled / disabled) */
    void setOkButtonState(bool fState);
    void on_resetButton_clicked();
    void on_okButton_clicked();
    void on_cancelButton_clicked();
    void resetDialogValues();

    /* import a private key */
    bool importKey();
};

<<<<<<< HEAD
#endif // AVIAN_QT_IMPORTKEYS_H
=======
#endif // RAVENLITE_QT_IMPORTKEYS_H
>>>>>>> 5c221fd42c641eee3fbeae37afdd33a8d39efec4
