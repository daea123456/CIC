// Copyright (c) 2011-2014 The CICcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CICCOINADDRESSVALIDATOR_H
#define CICCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CICcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CICcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** CICcoin address widget validator, checks for a valid CICcoin address.
 */
class CICcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CICcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // CICCOINADDRESSVALIDATOR_H
