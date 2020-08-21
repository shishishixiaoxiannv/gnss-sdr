// SPDX-FileCopyrightText: 2017 Google Inc.
// SPDX-License-Identifier: Apache-2.0

#ifndef CPU_FEATURES_TEST_HWCAPS_FOR_TESTING_H_
#define CPU_FEATURES_TEST_HWCAPS_FOR_TESTING_H_

#include "internal/hwcaps.h"

namespace cpu_features
{
void SetHardwareCapabilities(uint32_t hwcaps, uint32_t hwcaps2);
void SetPlatformTypes(const char *platform, const char *base_platform);

}  // namespace cpu_features

#endif  // CPU_FEATURES_TEST_HWCAPS_FOR_TESTING_H_
