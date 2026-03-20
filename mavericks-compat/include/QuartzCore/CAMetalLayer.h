// Stub — CAMetalLayer not available on 10.9
#ifndef CAMETALLAYER_STUB_H
#define CAMETALLAYER_STUB_H
#import <QuartzCore/QuartzCore.h>
#ifdef __OBJC__
@interface CAMetalLayer : CALayer
@end
#endif
#endif
