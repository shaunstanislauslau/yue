// Copyright 2016 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the license that can be found in the
// LICENSE file.

#include "nativeui/layout/fill_layout.h"

namespace nu {

FillLayout::FillLayout() {
}

FillLayout::~FillLayout() {
}

void FillLayout::Layout(Container* host) {
  if (host->child_count() > 0)
    host->child_at(0)->SetBounds(host->GetBounds());
}

}  // namespace nu