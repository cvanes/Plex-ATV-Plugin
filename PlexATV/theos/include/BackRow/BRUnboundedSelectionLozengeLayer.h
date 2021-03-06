/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRSelectionLozengeLayer.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BRImage *_topImage;	// 88 = 0x58
	BRImage *_bottomImage;	// 92 = 0x5c
	BOOL _brighterImage;	// 96 = 0x60
	BOOL _focusedImage;	// 97 = 0x61
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x32dbe39d; S=0x32d669c5; converted property
- (id)init;	// 0x32d66845
- (void)_updateImages;	// 0x32d66895
- (void)dealloc;	// 0x32dbe3b1
- (void)drawInContext:(CGContextRef)context;	// 0x32d6d381
- (void)layoutSubcontrols;	// 0x32dbe3ad
- (void)setFocused:(BOOL)focused;	// 0x32d6d791
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x32d669c5
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x32dbe39d
@end

