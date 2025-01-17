/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

namespace fl::detail {

/**
 * Initialize stack tracing with backward-cpp. No-op if Flashlight is not built
 * with backward-cpp.
 */
void initBackward();

} // namespace fl::detail
