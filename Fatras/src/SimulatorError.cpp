// This file is part of the Acts project.
//
// Copyright (C) 2020 CERN for the benefit of the Acts project
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "ActsFatras/Kernel/detail/SimulatorError.hpp"

namespace ActsFatras {
namespace detail {
namespace {

// Define a custom error code category derived from std::error_category
class SimulatorErrorCategory final : public std::error_category {
 public:
  const char*
  name() const noexcept final {
    return "SimulatorError";
  }
  std::string
  message(int c) const final {
    switch (static_cast<SimulatorError>(c)) {
      case SimulatorError::eInvalidInputParticleId:
        return "Input particle id with non-zero generation or sub-particle";
      default:
        return "unknown";
    }
  }
};

const SimulatorErrorCategory s_simulatorErrorCategory;

}  // namespace

std::error_code
make_error_code(SimulatorError e) {
  return {static_cast<int>(e), s_simulatorErrorCategory};
}

}  // namespace detail
}  // namespace ActsFatras
