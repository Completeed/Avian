// Copyright (c) 2021 The Ravencoin Lite developers
// Copyright (c) 2021 Shafil Alam
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

<<<<<<< HEAD
#ifndef AVIAN_QT_PEERDIALOG_H
#define AVIAN_QT_PEERDIALOG_H
=======
#ifndef RAVENLITE_QT_PEERDIALOG_H
#define RAVENLITE_QT_PEERDIALOG_H
>>>>>>> 5c221fd42c641eee3fbeae37afdd33a8d39efec4

#include <QObject>
#include <QWidget>
#include <string>
#include "guiutil.h"

class PeerTools;

namespace Ui {
    class AddPeerDialog;
    class RemovePeerDialog;
    class TestPeerDialog;
}

/** Class to manage peers */
class PeerTools : public QObject
{
    Q_OBJECT

public:
    static QString ManagePeer(QString type, QString peer);
    static bool CheckPeerAddress(QString address); 
    static bool CheckIPAddress(QString ip);
    static bool CheckDNS(QString dns);
    static QString GetPort();
};

/** "Add peer" dialog box */
class AddPeerDialog : public QWidget
{
    Q_OBJECT

public:
    explicit AddPeerDialog(QWidget *parent);
    ~AddPeerDialog();
private:
    Ui::AddPeerDialog *ui;
private Q_SLOTS:
    void on_addPeer_clicked();
};

/** "Test peer" dialog box */
class TestPeerDialog : public QWidget
{
    Q_OBJECT

public:
    explicit TestPeerDialog(QWidget *parent);
    ~TestPeerDialog();
private:
    Ui::TestPeerDialog *ui;
private Q_SLOTS:
    void on_testPeer_clicked();
};

#endif
