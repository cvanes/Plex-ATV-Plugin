/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRKeyboardRomanSquare.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRKeyboardCandidates : BRKeyboardRomanSquare {
@private
	NSArray *_rawKeyboardDataStrings;	// 40 = 0x28
}
- (id)_keyboardDataFileName;	// 0x32dcdb6d
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x32dcd5d5
- (float)_mainKeysVerticalSpacing;	// 0x32dcd5d1
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x32dcd661
- (int)_numberOfMainKeyRows;	// 0x32dcd6dd
- (float)_preferredGlyphHeight:(id)height;	// 0x32dcd5c5
- (id)_rawKeyboardData;	// 0x32dcdb85
- (int)_scrollDirectionForMainKeys;	// 0x32dcd5cd
- (id)actionKeyRows;	// 0x32dcd5bd
- (id)actionKeysContainer;	// 0x32dcd5c1
- (id)attributesForTextFieldLabel;	// 0x32dcd5ad
- (id)bottomRow;	// 0x32dcd705
- (void)dealloc;	// 0x32dcdb25
- (id)mainKeysContainer;	// 0x32dcda41
- (id)name;	// 0x32dcd5b1
- (void)setRawKeyboardDataStrings:(id)strings;	// 0x32dcd915
- (void)updateMainKeysContainer:(id)container;	// 0x32dcd729
@end

