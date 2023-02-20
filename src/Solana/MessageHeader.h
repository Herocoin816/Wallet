// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include <cstdint> // << std::uint8_t

struct MessageHeader {
    // The number of signatures required for this message to be considered
    // valid. The signatures must match the first `numRequiredSignatures` of
    // `accountKeys`.
    uint8_t numRequiredSignatures = 0;
    // The last numCreditOnlySignedAccounts of the signed keys are
    // credit-only accounts.
    uint8_t numCreditOnlySignedAccounts = 0;
    // The last numCreditOnlyUnsignedAccounts of the unsigned keys are
    // credit-only accounts.
    uint8_t numCreditOnlyUnsignedAccounts = 0;
};
