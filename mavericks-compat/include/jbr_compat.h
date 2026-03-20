// Compatibility defines for building JBR with macOS 10.9 SDK

#ifndef JBR_COMPAT_H
#define JBR_COMPAT_H

// Skip for assembly files
#ifdef __ASSEMBLER__
#else

// ============================================================
// NSWindowStyleMask (10.12+) -> old names
// ============================================================
#ifndef NSWindowStyleMaskBorderless
#define NSWindowStyleMaskBorderless NSBorderlessWindowMask
#endif
#ifndef NSWindowStyleMaskTitled
#define NSWindowStyleMaskTitled NSTitledWindowMask
#endif
#ifndef NSWindowStyleMaskClosable
#define NSWindowStyleMaskClosable NSClosableWindowMask
#endif
#ifndef NSWindowStyleMaskMiniaturizable
#define NSWindowStyleMaskMiniaturizable NSMiniaturizableWindowMask
#endif
#ifndef NSWindowStyleMaskResizable
#define NSWindowStyleMaskResizable NSResizableWindowMask
#endif
#ifndef NSWindowStyleMaskTexturedBackground
#define NSWindowStyleMaskTexturedBackground NSTexturedBackgroundWindowMask
#endif
#ifndef NSWindowStyleMaskFullScreen
#define NSWindowStyleMaskFullScreen (1 << 14)
#endif
#ifndef NSWindowStyleMaskFullSizeContentView
#define NSWindowStyleMaskFullSizeContentView (1 << 15)
#endif
#ifndef NSWindowStyleMaskUtilityWindow
#define NSWindowStyleMaskUtilityWindow NSUtilityWindowMask
#endif
#ifndef NSWindowStyleMaskNonactivatingPanel
#define NSWindowStyleMaskNonactivatingPanel NSNonactivatingPanelMask
#endif

// ============================================================
// NSEventType (10.12+) -> old names
// ============================================================
#ifndef NSEventTypeKeyUp
#define NSEventTypeKeyUp NSKeyUp
#endif
#ifndef NSEventTypeKeyDown
#define NSEventTypeKeyDown NSKeyDown
#endif
#ifndef NSEventTypeLeftMouseDown
#define NSEventTypeLeftMouseDown NSLeftMouseDown
#endif
#ifndef NSEventTypeLeftMouseUp
#define NSEventTypeLeftMouseUp NSLeftMouseUp
#endif
#ifndef NSEventTypeRightMouseDown
#define NSEventTypeRightMouseDown NSRightMouseDown
#endif
#ifndef NSEventTypeRightMouseUp
#define NSEventTypeRightMouseUp NSRightMouseUp
#endif
#ifndef NSEventTypeMouseMoved
#define NSEventTypeMouseMoved NSMouseMoved
#endif
#ifndef NSEventTypeFlagsChanged
#define NSEventTypeFlagsChanged NSFlagsChanged
#endif
#ifndef NSEventTypeScrollWheel
#define NSEventTypeScrollWheel NSScrollWheel
#endif
#ifndef NSEventTypeOtherMouseDown
#define NSEventTypeOtherMouseDown NSOtherMouseDown
#endif
#ifndef NSEventTypeOtherMouseUp
#define NSEventTypeOtherMouseUp NSOtherMouseUp
#endif
#ifndef NSEventTypeLeftMouseDragged
#define NSEventTypeLeftMouseDragged NSLeftMouseDragged
#endif
#ifndef NSEventTypeRightMouseDragged
#define NSEventTypeRightMouseDragged NSRightMouseDragged
#endif
#ifndef NSEventTypeOtherMouseDragged
#define NSEventTypeOtherMouseDragged NSOtherMouseDragged
#endif

// ============================================================
// NSEventModifierFlag (10.12+) -> old names
// ============================================================
#ifndef NSEventModifierFlagCapsLock
#define NSEventModifierFlagCapsLock NSAlphaShiftKeyMask
#endif
#ifndef NSEventModifierFlagShift
#define NSEventModifierFlagShift NSShiftKeyMask
#endif
#ifndef NSEventModifierFlagControl
#define NSEventModifierFlagControl NSControlKeyMask
#endif
#ifndef NSEventModifierFlagOption
#define NSEventModifierFlagOption NSAlternateKeyMask
#endif
#ifndef NSEventModifierFlagCommand
#define NSEventModifierFlagCommand NSCommandKeyMask
#endif
#ifndef NSEventModifierFlagDeviceIndependentFlagsMask
#define NSEventModifierFlagDeviceIndependentFlagsMask NSDeviceIndependentModifierFlagsMask
#endif

// ============================================================
// NSEventMask (10.12+) -> old names
// ============================================================
#ifndef NSEventMaskAny
#define NSEventMaskAny NSAnyEventMask
#endif
#ifndef NSEventMaskKeyUp
#define NSEventMaskKeyUp NSKeyUpMask
#endif

// ============================================================
// NSAlertStyle (10.12+) -> old names
// ============================================================
#ifndef NSAlertStyleWarning
#define NSAlertStyleWarning NSWarningAlertStyle
#endif
#ifndef NSAlertStyleCritical
#define NSAlertStyleCritical NSCriticalAlertStyle
#endif
#ifndef NSAlertStyleInformational
#define NSAlertStyleInformational NSInformationalAlertStyle
#endif

// ============================================================
// NSCompositingOperation (10.12+) -> old names
// ============================================================
#ifndef NSCompositingOperationSourceOver
#define NSCompositingOperationSourceOver NSCompositeSourceOver
#endif
#ifndef NSCompositingOperationCopy
#define NSCompositingOperationCopy NSCompositeCopy
#endif

// ============================================================
// Virtual key codes (missing from old Carbon headers)
// ============================================================
#ifndef kVK_RightCommand
#define kVK_RightCommand 0x36
#endif

// ============================================================
// More NSWindowStyleMask values
// ============================================================
#ifndef NSWindowStyleMaskUnifiedTitleAndToolbar
#define NSWindowStyleMaskUnifiedTitleAndToolbar NSUnifiedTitleAndToolbarWindowMask
#endif
#ifndef NSWindowStyleMaskHUDWindow
#define NSWindowStyleMaskHUDWindow (1 << 13)
#endif
#ifndef NSWindowStyleMaskDocModalWindow
#define NSWindowStyleMaskDocModalWindow NSDocModalWindowMask
#endif

// ============================================================
// NSWindowTitle visibility (10.10+)
// ============================================================
#ifndef NSWindowTitleVisible
#define NSWindowTitleVisible 0
#endif
#ifndef NSWindowTitleHidden
#define NSWindowTitleHidden 1
#endif

// ============================================================
// NSEventType mouse enter/exit (10.12+)
// ============================================================
#ifndef NSEventTypeMouseEntered
#define NSEventTypeMouseEntered NSMouseEntered
#endif
#ifndef NSEventTypeMouseExited
#define NSEventTypeMouseExited NSMouseExited
#endif

// ============================================================
// NSWindowLevel / NSWindowStyleMask (10.12+ typedef)
// ============================================================
#ifndef NSWindowLevel
typedef int NSWindowLevel;
#endif
#ifndef NSWindowStyleMask
typedef unsigned long NSWindowStyleMask;
#endif
#ifndef NSAccessibilityOrientation
typedef long NSAccessibilityOrientation;
#endif
#ifndef NSRunLoopMode
typedef void *NSRunLoopMode;
#endif

// ============================================================
// NSWindowTabbingMode (10.12+)
// ============================================================
#ifdef __OBJC__
#ifndef NSWindowTabbingModeAutomatic
enum { NSWindowTabbingModeAutomatic = 0, NSWindowTabbingModePreferred = 1, NSWindowTabbingModeDisallowed = 2 };
typedef long NSWindowTabbingMode;
#endif
#endif

#ifndef NSOperatingSystemVersion
typedef struct { long majorVersion; long minorVersion; long patchVersion; } NSOperatingSystemVersion;
#endif

#endif // !__ASSEMBLER__
#endif // JBR_COMPAT_H
