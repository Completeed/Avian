// Copyright (c) 2014 The Bitcoin Core developers
// Copyright (c) 2017 The Raven Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef RAVEN_ZMQ_ZMQCONFIG_H
#define RAVEN_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
<<<<<<< HEAD
#include "config/avian-config.h"
=======
#include "config/ravenlite-config.h"
>>>>>>> 5c221fd42c641eee3fbeae37afdd33a8d39efec4
#endif

#include <stdarg.h>
#include <string>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include "primitives/block.h"
#include "primitives/transaction.h"

void zmqError(const char *str);

#endif // RAVEN_ZMQ_ZMQCONFIG_H
