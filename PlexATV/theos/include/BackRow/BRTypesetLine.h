/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
//


__attribute__((visibility("hidden")))
@interface BRTypesetLine : NSObject {
@private
	CTLineRef _line;	// 4 = 0x4
	CGSize _shadowOffset;	// 8 = 0x8
	float _flushFactor;	// 16 = 0x10
}
- (id)initWithCTLineRef:(CTLineRef)ctlineRef shadowOffset:(CGSize)offset flushFactor:(float)factor;	// 0x32e20619
- (void)dealloc;	// 0x32e206a1
- (void)drawLineAtPoint:(CGPoint)point withWidth:(float)width inContext:(CGContextRef)context;	// 0x32e206e1
- (void)typographicBounds:(float *)bounds descent:(float *)descent leading:(float *)leading;	// 0x32e209bd
@end

