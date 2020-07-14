// This file is part of the Acts project.
//
// Copyright (C) 2019 CERN for the benefit of the Acts project
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "ACTFW/ContextualDetector/PayloadDetector.hpp"
#include "ACTFW/Propagation/PropagationExampleBase.hpp"

/// @brief main executable
///
/// @param argc The argument count
/// @param argv The argument list
int
main(int argc, char* argv[]) {
  // --------------------------------------------------------------------------------
  PayloadDetector detector;

  // now process it
  return propagationExample(argc, argv, detector);
}
