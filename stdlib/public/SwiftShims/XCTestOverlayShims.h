//===--- XCTestOverlayShims.h -----------------------------------*- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2017 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_STDLIB_SHIMS_XCTEST_OVERLAY_H
#define SWIFT_STDLIB_SHIMS_XCTEST_OVERLAY_H

@import Foundation;

@class XCTestCase;

XCTestCase * _Nonnull _XCTCurrentTestCase(void);

NSDictionary<NSString *, NSString *> * _Nonnull
_XCTRunThrowableBlockBridge(void (^ _Nonnull NS_NOESCAPE block)());

#endif // SWIFT_STDLIB_SHIMS_XCTEST_OVERLAY_H

