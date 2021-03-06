/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSNumber, BRDividerControl, NSArray, BRImageControl, BRTextControl;

@interface BRMetadataLongDescriptionControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 40 = 0x28
	BRTextControl *_titleSubtextLayer;	// 44 = 0x2c
	BRTextControl *_priceLayer;	// 48 = 0x30
	BRControl *_formatControl;	// 52 = 0x34
	BRTextControl *_releaseDateLayer;	// 56 = 0x38
	BRTextControl *_lengthLayer;	// 60 = 0x3c
	BRTextControl *_studioNameLayer;	// 64 = 0x40
	BRImageControl *_ratingImageLayer;	// 68 = 0x44
	BRControl *_userRatingControl;	// 72 = 0x48
	BRImageControl *_topRightImageLayer;	// 76 = 0x4c
	BRTextControl *_summaryLayer;	// 80 = 0x50
	BRTextControl *_copyrightLayer;	// 84 = 0x54
	NSNumber *_trackNumber;	// 88 = 0x58
	BRDividerControl *_topDivider;	// 92 = 0x5c
	BRDividerControl *_bottomDivider;	// 96 = 0x60
	NSArray *_metadataObjs;	// 100 = 0x64
	NSArray *_metadataLabels;	// 104 = 0x68
	float _totalHeight;	// 108 = 0x6c
	int _alignment;	// 112 = 0x70
	CGSize _artworkSize;	// 116 = 0x74
}
- (id)init;	// 0x32e59e71
- (void)_setCopyright:(id)copyright;	// 0x32e5a225
- (void)_setFormatControl:(id)control;	// 0x32e596f1
- (void)_setLength:(id)length;	// 0x32e5a52d
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x32e59581
- (void)_setPrice:(id)price;	// 0x32e5a6ad
- (void)_setRating:(id)rating;	// 0x32e596a1
- (void)_setReleaseDate:(id)date;	// 0x32e5a5ed
- (void)_setStudioName:(id)name;	// 0x32e5a46d
- (void)_setSummary:(id)summary;	// 0x32e5a2e5
- (void)_setTitle:(id)title;	// 0x32e5a829
- (void)_setTitleSubtext:(id)subtext;	// 0x32e5a76d
- (void)_setTopRightImage:(id)image;	// 0x32e59611
- (void)_setTrackNumber:(id)number;	// 0x32e59761
- (void)_setUserRatingControl:(id)control;	// 0x32e59631
- (void)_themeMetricsChanged;	// 0x32e5956d
- (id)accessibilityScreenContent;	// 0x32e5a8e5
- (void)dealloc;	// 0x32e59ce1
- (void)layoutSubcontrols;	// 0x32e5aa21
- (CGSize)renderedSize;	// 0x32e5a1c1
- (void)resetAllFields;	// 0x32e59be1
- (void)setAlignment:(int)alignment;	// 0x32e5955d
- (void)setArtworkSize:(CGSize)size;	// 0x32e59885
- (void)setCopyright:(id)copyright;	// 0x32e598d1
- (void)setFormatControl:(id)control;	// 0x32e59ac9
- (void)setLength:(id)length;	// 0x32e59a59
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x32e59909
- (void)setPrice:(id)price;	// 0x32e59b01
- (void)setRating:(id)rating;	// 0x32e599e9
- (void)setReleaseDate:(id)date;	// 0x32e59a91
- (void)setStudioName:(id)name;	// 0x32e59a21
- (void)setSummary:(id)summary;	// 0x32e59941
- (void)setTitle:(id)title;	// 0x32e59ba9
- (void)setTitleSubtext:(id)subtext;	// 0x32e59b71
- (void)setTopRightImage:(id)image;	// 0x32e59979
- (void)setTrackNumber:(id)number;	// 0x32e59b39
- (void)setUserRatingControl:(id)control;	// 0x32e599b1
- (id)topRightImageControl;	// 0x32e5954d
@end

