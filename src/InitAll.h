// Copyright 2023 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef TORCH_MLIR_INITALL_H
#define TORCH_MLIR_INITALL_H

#include "mlir/IR/Dialect.h"

namespace mlir {
namespace torch {

void registerAllDialects(mlir::DialectRegistry &registry);
void registerAllPasses();

}  // namespace torch
}  // namespace mlir

#endif  // TORCH_MLIR_INITALL_H
